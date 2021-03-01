// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <InteractionInterface.h>
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum EWeaponType
{
	Weapon_Pistol				UMETA(DisplayName = "Pistol"),
	Weapon_Shotgun				UMETA(DisplayName = "Shotgun"),
	Weapon_Rifle				UMETA(DisplayName = "Rifle"),
	Weapon_SniperRifle			UMETA(DisplayName = "Sniper Rifle"),
	Weapon_GrenadeLauncher		UMETA(DisplayName = "Grenade Launcher"),
	Weapon_RocketLauncher		UMETA(DisplayName = "Rocket Launcher")
};

UENUM(BlueprintType)
enum ETargetingTool
{
	TargetingTool_None				UMETA(DisplayName = "None"),
	TargetingTool_IronSight			UMETA(DisplayName = "Iron Sight"),
	TargetingTool_LazerPointer		UMETA(DisplayName = "Lazer Pointer"),
	TargetingTool_Scope				UMETA(DisplayName = "Scope")
};

//UENUM(BlueprintType)
//enum EReloadingStance
//{
//	Stance_Hip			UMETA(DisplayName = "Hip"),
//	Stance_Ironsights	UMETA(DisplayName = "Ironsights"),
//	Stance_Prone		UMETA(DisplayName = "Prone")
//};

/**
 * A complete Weapon blueprint instance should have the following components:
 *		- Skeletal mesh, as the shape and look of the gun
 *		- Particle system, as the lazer pointer
 *		- Light (preferably spot light), as the tactical light
 * Missing any of those components can cause Unreal Engine to crash. 
 * 
 */
UCLASS()
class TPS_API AWeapon : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// 
	UFUNCTION(BlueprintImplementableEvent)
		void BeginPlay_Child();
	//void SetupIronSightPattern_Implementation();



	// 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Component)
		class USphereComponent* InteractionTrigger;

	// Skeletal mesh of the gun. 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Component)
		USkeletalMeshComponent* GunMesh;

	// Lazer pointer of the gun. 
	UPROPERTY(BlueprintReadOnly, Category = Component)
		UParticleSystemComponent* LazerPointer;

	// Tactical light of the gun. 
	UPROPERTY(BlueprintReadOnly, Category = Component)
		ULightComponent* TacticalLight;

	// Iron sight of the gun. 
	UPROPERTY(BlueprintReadOnly, Category = Component)
		class UCrosshairWidget* Crosshair;
	/*UPROPERTY(BlueprintReadOnly, Category = Component)
		TSubclassOf<class UUserWidget> CrosshairWidgetClass;*/

	// Gun muzzle's offset from the transform center.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	// Gun rejector port's offset from the transform center. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector RejectorPortOffset;

	// Fire the gun. Called once oer fire. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Fire();
		virtual void Fire_Implementation();

	// Reload the gun at hip stance. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Reload_Hip();
		virtual void Reload_Hip_Implementation();

	// Reload the gun at ironsights stance. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Reload_Ironsights();
		virtual void Reload_Ironsights_Implementation();

	// Reload the gun at prone stance. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Reload_Prone();
		virtual void Reload_Prone_Implementation();

	// 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Unaim();
		void Unaim_Implementation();

	// Aim the gun with sight. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Aim_IronSight(bool activate);
		void Aim_IronSight_Implementation(bool activate);

	// Aim the gun with lazer pointer.  
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Aim_LazerPointer(bool activate);
		virtual void Aim_LazerPointer_Implementation(bool activate);

	// Aim the gun with lazer pointer.  
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Aim_Scope(bool activate);
	virtual void Aim_Scope_Implementation(bool activate);

/*
	// Switch the flashlight on and off, should the gun have one. 
	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	//	void SwitchFlashLight(bool activate);
	//	void SwitchFlashLight_Implementation(bool activate);	
*/
		
	// Switch the flashlight on and off, should the gun have one. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void SwitchTacticalLight();
		void SwitchTacticalLight_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void ActivateStrobeLight(bool activate);
		void ActivateStrobeLight_Implementation(bool activate);
				
	// Switch the flashlight on and off, should the gun have one. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		FVector2D GetRecoil(bool aiming);
		FVector2D GetRecoil_Implementation(bool aiming);

	//UFUNCTION(BlueprintCallable)
	//	static float NormalDistributionRandom(float mean, float sigma);

	//UFUNCTION(BlueprintCallable)
	//	static FVector2D CircleDistributionRandom(float radius, bool isNormalDistribution);


/*
	// Perform aiming actions of the gun. 
	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	//	void LineTrace();
	//virtual void LineTrace_Implementation();
*/

	// Enum type of the weapon. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic")
		TEnumAsByte<EWeaponType> WeaponType;

	// Damage dealt for each hit of the gun.	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
		int Damage;
		
	// Magazine size of the gun.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic")
		int MagazineSize;

	// Current remaining rounds of cartridge in magazine. 
	UPROPERTY(BlueprintReadWrite, Category = "Basic")
		int RemainingAmmo;

	// True if the gun can do hip fire, false implies that the gun can only fire when aiming. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic")
		bool CanHipFire = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
		UAnimationAsset* FiringAnim;

	// True if the gun has full auto fire mode, false otherwise. 
	// True implies that when holding fire button, the gun keeps firing. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
		bool IsFullAuto;

	// Maximum fire rate of the gun. 
	// The unit is rounds per minute. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firing")
		float MaxFireRate = 60;

	// Firing frequency acquired from max fire rate. 
	UPROPERTY(BlueprintReadOnly, Category = "Firing")
		float FireCycleLength;

/*	
	// Whether or not the weapon fires after charging. 
	// Semi-auto weapons with true value should fire any time the firing button is released. 
	// Full-auto weapons with true value should start firing when the charging timer reaches this value. 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	//	bool HasChargedFire;
*/

	// The longest effective charging time of the gun. 
	// The concrete meaning of 'charging' is to be defined in blueprints. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firing")
		float MaxFireCharging;

	// Timer for fire charging. Should keep timing when fire button is held. 
	UPROPERTY(BlueprintReadWrite, Category = "Firing", meta = (EditCondition = "MaxFireCharging > 0.0f"))
		float FireChargingTimer;

	// Time between firing signal and actual fire. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firing")
		float FireDelay;

	// Number of rounds to fire each time the trigger is pulled. 
	// Values greater than 1 implies the gun has burst fire, otherwise semi-auto fire. 
	// Theoretical fire rate still depends on MaxFireRate, whereas the gap in practice depends on BurstFireCooldown. 
	// Not valid when the weapon is full auto. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firing", meta = (EditCondition = "!IsFullAuto"))
		int BurstFireRound;

	// Time gap between two burst fire commands. 
	// Not valid when the weapon is full auto. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firing", meta = (EditCondition = "!IsFullAuto && BurstFireRound > 1"))
		float BurstFireCooldown;

	// True if the weapon deals damage when projectile hits target, 
	// false for dealing damage on immediate hit -- the projectile FX will be played immediately afterwards.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		bool DealsDamageOnProjectileHit = true;

	// Projectile class reference for generating projectile when firing. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		//class UClass* ProjectileClass;
		//class AProjectile* ProjectileClass;
		TSubclassOf<class AProjectile> ProjectileClass;

	// Visual and collision size multiplier of the projectile. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory")
		float ProjectileScale = 1;

	// The max distance the gun can hit with a fire. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trajectory")
		float Range;

	// Initial speed of fired projectiles. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		float MuzzleVelocity;

	// Represents the deviation of projectile. 0 stande for absolute accurecy.
	// Specially, the spread of shotgun buckshot is applied to each projectile individually. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		float Spread;

	// 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		bool SpreadWithNormalDistribution;
	
	// Number of projectiles launched on each fire. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trajectory")
		int ProjectileNumber = 1;


/*
	// Firing frequency acquired from max fire rate. 
	UPROPERTY(BlueprintReadWrite, Category = "Firing")
		int BurstFireRoundCounter;
*/

	// Length of delay when switching between hip and aiming stance. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tactical")
		float AimingDelay = 0.1;

	// Length of delay when swaping to this weapon. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tactical")
		float SwappingSpeed = 1;

	// Play rate of standing hip idle animation. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sway")
		float Standing_Hip_SwayRate = 1;
	
	// Play rate of standing ironsights idle animation. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sway")
		float Standing_Aiming_SwayRate = 0;

	// Play rate of crouch hip idle animation. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sway")
		float Crouch_Hip_SwayRate = 1;

	// Play rate of crouch ironsights idle animation. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sway")
		float Crouch_Aiming_SwayRate = 0;

	// The muzzle sway immediately after hip firing. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Hip_HorizontalRecoil;

	// The muzzle rise immediately after hip firing. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Hip_VerticalRecoil;

	// How quickly the gun recovers from hip fire recoil. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Hip_RecoilRecovery;
	
	// The muzzle sway immediately after aiming firing. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Aiming_HorizontalRecoil;

	// The muzzle rise immediately after aiming firing. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Aiming_VerticalRecoil;

	// How quickly the gun recovers from aiming fire recoil. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil")
		float Aiming_RecoilRecovery;

	// Targeting tool when the character is not aiming. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment and Upgrade", meta = (EditCondition = "CanHipFire"))
		TEnumAsByte<ETargetingTool> Hip_TargetingTool;

	// Targeting tool when the character is aiming. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment and Upgrade")
		TEnumAsByte<ETargetingTool> Aiming_TargetingTool;

/*
	//  
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment and Upgrade")
	//	TEnumAsByte<ESightPattern> IronSightPattern;
*/

	// True if the gun has a flashlight, false otherwise. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment and Upgrade")
		bool Attachment_HasTacticalLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment and Upgrade", meta = (EditCondition = "Attachment_HasTacticalLight"))
		float StrobeLightFrequency;

	UPROPERTY(BlueprintReadWrite, Category = "Attachment and Upgrade", meta = (EditCondition = "Attachment_HasTacticalLight"))
		bool IsStrobeLightActivated;
	
	float StrobeTimer;

/*
	// True indicating the flashlight is on, false otherwise. 
	// If the gun does not have a flashlight, having true value should be mistaken and does not have any effect. 
	//UPROPERTY(BlueprintReadWrite)
	//	bool IsFlashLightActivated;

	// True if the gun has lazer pointer attachment, false otherwise. 
	// Lazer pointers can provide aim assistance at hip fire. 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool Attachment_HasLazerPointer;

	// True if the gun has scope attachment, false otherwise. 
	// Scopes can provide accurate and magnified targeting when aiming down it. 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool Attachment_HasScope;
*/
};

