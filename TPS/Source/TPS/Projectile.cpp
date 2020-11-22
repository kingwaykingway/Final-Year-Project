// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework\ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Sound/SoundAttenuation.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//MaxSpeed = InitialSpeed;

	//ProjectileBody = FindComponentByClass<UStaticMeshComponent>();
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	Orientation = CreateDefaultSubobject<UArrowComponent>(TEXT("Orientation"));

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//ProjectileMovementComponent->SetActive(false);
	if (Collider)
	{
		RootComponent = Collider;
		Collider->SetSphereRadius(5);
		//Collider->RelativeRotation = FRotator(0, 90, 0);
		//Collider->SetRelativeRotation(FRotator(90, 0, 0));
		//Collider->SetCapsuleRadius(5);
		//Collider->SetCapsuleHalfHeight(5);
		//Collider->SetBoxExtent(FVector(1, 1, 1));
		Collider->CanCharacterStepUp(false);
		Collider->SetNotifyRigidBodyCollision(true);
		ProjectileMovementComponent->SetUpdatedComponent(Collider); 
	}

	ProjectileMovementComponent->SetUpdatedComponent(RootComponent);
	//ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	//ProjectileMovementComponent->MaxSpeed = MaxSpeed;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	//ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.3f;
	
	//InitialLifeSpan = InitialLifeSpan <= 0
	//	? (Range > 0 ? (Range / ProjectileMovementComponent->InitialSpeed) : 0)
	//	: InitialLifeSpan;

	PenetrationPower = MaxPenetrationTolerance;

	Tags.Add("Projectile");
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	//Collider = FindComponentByClass<UCapsuleComponent>();

	StartLocation = GetActorLocation();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FVector trajectory = GetActorLocation() - StartLocation;
	//if (trajectory.Size() > Range)
	//{
	//	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(trajectory.Size()));
	//	Destroy();
	//}
}

void AProjectile::NotifyHit(
	class UPrimitiveComponent* MyComp,
	AActor* Other,
	class UPrimitiveComponent* OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal,
	FVector NormalImpulse,
	const FHitResult& Hit)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("fucked"));
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	//FVector location = HitLocation;
	//FRotator rotation = UKismetMathLibrary::MakeRotFromX(HitNormal);

	//if (HitEmitter)
	//	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEmitter, location, rotation, FVector(EmitterScale), true, EPSCPoolMethod::None);
	//
	//if (HitSound && HitSoundAttenuation)
	//	UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSound, location, 1, 1, 0, HitSoundAttenuation, nullptr);

	//Destroy();
}

void AProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

