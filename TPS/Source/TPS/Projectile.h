// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Runtime\Engine\Classes\GameFramework\ProjectileMovementComponent.h>
#include "Projectile.generated.h"

UCLASS()
class TPS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Event called when the projectile hits 
	virtual void NotifyHit(
		class UPrimitiveComponent* MyComp,
		AActor* Other,
		class UPrimitiveComponent* OtherComp,
		bool bSelfMoved,
		FVector HitLocation,
		FVector HitNormal,
		FVector NormalImpulse,
		const FHitResult& Hit
	) override;

	// xxx
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* Collider;

	// xxx
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
		class UArrowComponent* Orientation;

	// Projectile movement component.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
		class UProjectileMovementComponent* ProjectileMovementComponent;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Effect)
		float BulletHoleSize = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Effect)
		float EmitterScale = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Effect)
		UParticleSystem* HitEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Effect)
		USoundBase* HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Effect)
		USoundAttenuation* HitSoundAttenuation;

	// 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
	//	float InitialSpeed = 1000;
	
	// 
	//UPROPERTY(BlueprintReadOnly, Category = Projectile)
	//	float MaxSpeed;


	// 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
	//	float LifeSpan;

	// True if the projectile deals damage by hitting targets. 
	UPROPERTY(BlueprintReadWrite)
		bool DealsDamage = true;

	// Damage dealt by the projectile. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
		int Damage;

	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
		float Range;
	
	//
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Penetration")
		float MaxPenetrationTolerance;
		
	//
	UPROPERTY(BlueprintReadWrite, Category = "Penetration")
		float PenetrationPower;

	// Location where the projectile is launched. 
	UPROPERTY(BlueprintReadOnly)
		FVector StartLocation;

	// Function that initializes the projectile's velocity in the shoot direction.
	UFUNCTION(BlueprintCallable)
		void FireInDirection(const FVector& ShootDirection);
};
