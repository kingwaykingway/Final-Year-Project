// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TPSFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UTPSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
		static float NormalDistributionRandom(float mean, float sigma);

	UFUNCTION(BlueprintCallable)
		static FVector2D CircleDistributionRandom(float radius, bool isNormalDistribution);

	UFUNCTION(BlueprintCallable)
		static float AngleBetweenVectors(FVector A, FVector B);

};
