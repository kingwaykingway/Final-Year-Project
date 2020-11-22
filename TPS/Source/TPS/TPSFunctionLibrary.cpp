// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include <random>

float UTPSFunctionLibrary::NormalDistributionRandom(float mean, float sigma)
{
	std::random_device rd{};
	std::mt19937 gen{ rd() };
	std::normal_distribution<float> d{ mean, sigma };

	return d(gen);
}

FVector2D UTPSFunctionLibrary::CircleDistributionRandom(float radius, bool isNormalDistribution)
{
	float x, y,
		r = isNormalDistribution ? abs(NormalDistributionRandom(0, radius)) : FMath::RandRange(0.0f, radius);

	x = FMath::RandRange(0.0f, r);
	y = r - x;
	x = UKismetMathLibrary::Sqrt(x);
	x = FMath::RandBool() ? x : -x;
	y = UKismetMathLibrary::Sqrt(y);
	y = FMath::RandBool() ? y : -y;

	return FVector2D(x, y);
}

float UTPSFunctionLibrary::AngleBetweenVectors(FVector A, FVector B)
{
	A.FVector::Normalize(0.0001f);
	B.FVector::Normalize(0.0001f);
	return UKismetMathLibrary::DegAcos(UKismetMathLibrary::Dot_VectorVector(A, B));
}
