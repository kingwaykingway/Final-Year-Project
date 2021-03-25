// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "InteractionComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/LightComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/PrimitiveComponent.h"	
#include "Blueprint/WidgetLayoutLibrary.h"
//#include <Runtime\UMG\Private\WidgetLayoutLibrary.cpp>
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework\ProjectileMovementComponent.h"
//#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>
//#include <Runtime\Engine\Private\GameplayStatics.cpp>
//#include <Runtime\Engine\Private\UnrealEngine.cpp>
#include "Engine/World.h"
//#include "<Runtime\Engine\Classes\Engine\World.h>"
#include <random>
//#include <Editor\SceneOutliner\Public\SceneOutlinerVisitorTypes.h>
#include <CrosshairWidget.h>
#include <CrosshairWidget.cpp>
#include <Projectile.h>
#include <TPS\TPSFunctionLibrary.h>

//#include <Projectile.cpp>

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PrimaryActorTick.bStartWithTickEnabled = false;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Root->bEditableWhenInherited = true;
	RootComponent = Root;

	InteractionTrigger = CreateDefaultSubobject<USphereComponent>("Interaction Trigger");
	if (InteractionTrigger)
	{	
		InteractionTrigger->bEditableWhenInherited = true;
		//InteractionTrigger->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);
		// RootComponent = InteractionTrigger;
		// InteractionTrigger->SetSphereRadius(100);
	}

	//GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Gun Mesh");
	//GunMesh->bEditableWhenInherited = true;
	//if (GunMesh) {
	//	GunMesh->AddLocalRotation(FRotator(0, -90, 0));
	//}

	//GunMesh->AddWorldRotation(FRotator(0, 0, -90));
	//GunMesh->RelativeRotation = FRotator(0, 0, -90);
	//GunMesh->AddLocalRotation(FRotator(0, 0, -90));
	//LazerPointer = CreateDefaultSubobject<UParticleSystemComponent>("Lazer Pointer");
	//LazerPointer->bEditableWhenInherited = true;
	//static ConstructorHelpers::FObjectFinder<UParticleSystem> LazerBeam(TEXT("/Content/_MyBlueprints/PS_LazerBeam"));
	//LazerPointer->SetTemplate();

	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>("Interaction Component");
	if (InteractionComponent && UseDefaultHighlighter)
	{
		FScriptDelegate delegate; 
		delegate.BindUFunction(InteractionComponent, FName("Highlight_Toon"));
		InteractionComponent->OnHighlight.Add(delegate);
	}
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();


	// *IMPORTANT: keep this block in BeginPlay. 
	// Putting this block in constructor will somehow crash the editor. 
	// InteractionTrigger = FindComponentByClass<USphereComponent>();
	GunMesh = FindComponentByClass<USkeletalMeshComponent>();
	LazerPointer = FindComponentByClass<UParticleSystemComponent>();
	TacticalLight = FindComponentByClass<ULightComponent>();

	if (GunMesh)
	{
		// GunMesh->bRenderCustomDepth = true;
		GunMesh->CustomDepthStencilValue = 1;
		
		if (InteractionTrigger)
		{
			InteractionTrigger->AttachToComponent(GunMesh, FAttachmentTransformRules::KeepWorldTransform);
		}
	}



	//Crosshair = NewObject<UCrosshairWidget>();
	FStringClassReference CrosshairWidgetClassRef(TEXT("/Game/_MyAssets/ScopeAndCrosshair/BP_CrosshairWidget.BP_CrosshairWidget_C"));
	if (UClass* CrosshairWidgetClass = CrosshairWidgetClassRef.TryLoadClass<UCrosshairWidget>()) {
		Crosshair = CreateWidget<UCrosshairWidget>(GetWorld(), CrosshairWidgetClass, NAME_None);
		if (Crosshair)
		{
			Crosshair->AddToViewport();
			Crosshair->UWidget::SetVisibility(ESlateVisibility::Hidden);
		}
		//Crosshair->SightPattern = IronSight_Pattern.GetValue();
	}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("fucked"));
	//}

	//if (TacticalLight)
	//{
	//	TacticalLight->USceneComponent::ToggleVisibility(true);
	//}

	//GunMesh = NewObject<USkeletalMeshComponent>(this, USkeletalMeshComponent::StaticClass());
	//LazerPointer = NewObject<UParticleSystemComponent>(this, UParticleSystemComponent::StaticClass());

	RemainingAmmo = MagazineSize;
	FireCycleLength = 60 / MaxFireRate;

	BeginPlay_Child();		// Ensure that this command is called at the end of BeginPlay. 
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//LazerPointer->SetActive(IsLazerPointerActive);

	//if (IsLazerPointerActive)
	//{
	//	FVector origin = GetComponentLocation();
	//}
}

void AWeapon::Fire_Implementation()
{
	// Play the firing animation specified in class default. 
	if (FiringAnim)
		GunMesh->PlayAnimation(FiringAnim, false);

	// Consume 1 round in the magazine. 
	RemainingAmmo--;
	
	// Spawn the projectile specified in class default. 
	if (ProjectileClass)
	{
		for (size_t i = 1; i <= ProjectileNumber; i++)
		{
			FVector2D spread = UTPSFunctionLibrary::CircleDistributionRandom(Spread, SpreadWithNormalDistribution);

			FVector spawnLocation = GetActorLocation() + UKismetMathLibrary::TransformLocation(FTransform(GetActorRotation()), MuzzleOffset);
			FRotator spawnRotation = GetActorRotation() + FRotator(spread.Y, spread.X, 0);
			FActorSpawnParameters spawnParams;
			spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			spawnParams.Owner = this;
			spawnParams.Instigator = GetInstigator();
			AProjectile* launchingProjectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass,
				FTransform(spawnRotation, spawnLocation, FVector(ProjectileScale)), spawnParams);

			UProjectileMovementComponent* movement = launchingProjectile->ProjectileMovementComponent;
			movement->InitialSpeed = MuzzleVelocity;
			movement->MaxSpeed = MuzzleVelocity;
			launchingProjectile->Damage = Damage;
			launchingProjectile->Range = Range;
			launchingProjectile->FireInDirection(launchingProjectile->GetActorForwardVector());

			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, spread.ToString());
			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, launchingProjectile->GetActorRotation().ToString());
		}
	}
}

void AWeapon::Reload_Hip_Implementation()
{
}

void AWeapon::Reload_Ironsights_Implementation()
{
}

void AWeapon::Reload_Prone_Implementation()
{
}

void AWeapon::Unaim_Implementation()
{
	//LazerPointer->SetVisibility(false);
	//Crosshair->UWidget::SetVisibility(ESlateVisibility::Hidden);

	AWeapon::Aim_IronSight_Implementation(false);
	AWeapon::Aim_LazerPointer_Implementation(false);
	AWeapon::Aim_Scope_Implementation(false);

	//APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	//ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(playerController, 0);
	//AActor* playerActor = Cast<AActor>(playerCharacter);
	//if (playerActor)
	//{
	//	playerController->SetViewTargetWithBlend(playerActor, 0);
	//}
}

void AWeapon::Aim_IronSight_Implementation(bool activate)
{
	if (!Crosshair)  return;	// Safety command in case the component has null reference. 

	if (activate)
	{	
		AWeapon::Aim_LazerPointer_Implementation(false);
		AWeapon::Aim_Scope_Implementation(false);
		LazerPointer->SetVisibility(false);

		Crosshair->UWidget::SetVisibility(ESlateVisibility::Visible);
		
		FVector source = LazerPointer->USceneComponent::GetComponentLocation(),
			target = source + LazerPointer->USceneComponent::GetForwardVector() * Range;
		FHitResult hit;
		FVector2D ScreenPosition;
		FCollisionQueryParams TraceParams;

		if (GetWorld()->LineTraceSingleByChannel(hit, source, target, ECC_Visibility, TraceParams)) 
		{
			UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(
				UGameplayStatics::GetPlayerController(GetWorld(), 0), 
				hit.Location, ScreenPosition);
		}
		else
		{
			UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(
				UGameplayStatics::GetPlayerController(GetWorld(), 0),
				hit.TraceEnd, ScreenPosition);
		}
		
		Crosshair->SetPositionInViewport(ScreenPosition, false);
	}
	else
	{
		Crosshair->UWidget::SetVisibility(ESlateVisibility::Hidden);
	}
}

void AWeapon::Aim_LazerPointer_Implementation(bool activate)
{
	if (!LazerPointer)  return;		// Safety command in case the component has null reference. 

	LazerPointer->SetVisibility(activate);

	if (activate)
	{
		AWeapon::Aim_IronSight_Implementation(false);
		AWeapon::Aim_Scope_Implementation(false);
		Crosshair->UWidget::SetVisibility(ESlateVisibility::Hidden);

		FVector source = LazerPointer->USceneComponent::GetComponentLocation(),
			target = source + LazerPointer->USceneComponent::GetForwardVector() * 10000;
		FHitResult hit;
		FCollisionQueryParams TraceParams;

		LazerPointer->SetBeamSourcePoint(0, source, 0);

		//FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), false, this);
		//TraceParams.bTraceComplex = false;
		//TraceParams.bReturnPhysicalMaterial = false;

		if (GetWorld()->LineTraceSingleByChannel(hit, source, target, ECC_Visibility, TraceParams)) {
			LazerPointer->SetBeamTargetPoint(0, hit.Location, 0);

			if ((hit.Actor->ActorHasTag("Enemy") || hit.Component->ComponentHasTag("Shootable"))
				&& hit.Distance <= Range)
			{
				LazerPointer->SetColorParameter("Color", FLinearColor(1, 0, 0, 1));
			}
			else
			{
				LazerPointer->SetColorParameter("Color", FLinearColor(0, 1, 1, 1));
			}
		}
		else
		{
			LazerPointer->SetBeamTargetPoint(0, hit.TraceEnd, 0);
			LazerPointer->SetColorParameter("Color", FLinearColor(0, 1, 1, 1));
		}
	}
}

void AWeapon::Aim_Scope_Implementation(bool activate)
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (activate)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("aim"));

		playerController->SetViewTargetWithBlend(this, AimingDelay);
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("unaim"));

		ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(playerController, 0);
		AActor* playerActor = Cast<AActor>(playerCharacter);
		if (playerActor)
		{
			playerController->SetViewTargetWithBlend(playerActor, 0);
		}
		//else
		//{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("unaim"));
		//}
	}
}

//void AWeapon::SwitchFlashLight_Implementation(bool activate)
//{
//}

void AWeapon::SwitchTacticalLight_Implementation()
{
	if (TacticalLight && Attachment_HasTacticalLight)
	{
		TacticalLight->USceneComponent::ToggleVisibility(true);
	}
}

void AWeapon::ActivateStrobeLight_Implementation(bool activate)
{
	if (!TacticalLight || !Attachment_HasTacticalLight)  return;

	if (!activate)
	{
		TacticalLight->USceneComponent::SetVisibility(false, true);
		return;
	}

	StrobeTimer += FApp::GetDeltaTime();

	if (StrobeTimer >= 60 / StrobeLightFrequency)
	{
		StrobeTimer = 0;
		TacticalLight->USceneComponent::ToggleVisibility(true);
	}
}

FVector2D AWeapon::GetRecoil_Implementation(bool aiming)
{
	float recoil_H, recoil_V;

	//FMath::RandRange();
	std::random_device rd{};
	std::mt19937 gen{ rd() };
	std::normal_distribution<float> d{ 0, aiming ? Aiming_HorizontalRecoil : Hip_HorizontalRecoil };

	recoil_H = d(gen);
	recoil_V = (aiming ? Aiming_VerticalRecoil : Hip_VerticalRecoil) - abs(recoil_H);

	return FVector2D(recoil_H, recoil_V);
}

//void IInteractionInterface::Interact() {
//
//}

//float AWeapon::NormalDistributionRandom(float mean, float sigma)
//{
//	std::random_device rd{};
//	std::mt19937 gen{ rd() };
//	std::normal_distribution<float> d{ mean, sigma };
//
//	return d(gen);
//}

//FVector2D AWeapon::CircleDistributionRandom(float radius, bool isNormalDistribution)
//{
//	float x, y, 
//		r = isNormalDistribution ? abs(NormalDistributionRandom(0, radius)) : FMath::RandRange(0.0f, radius);
//
//	x = FMath::RandRange(0.0f, r);
//	y = r - x;
//	x = UKismetMathLibrary::Sqrt(x);
//	x = FMath::RandBool() ? x : -x;
//	y = UKismetMathLibrary::Sqrt(y);
//	y = FMath::RandBool() ? y : -y;
//	
//	return FVector2D(x, y);
//}

//void AWeapon::LineTrace_Implementation()
//{
//}

