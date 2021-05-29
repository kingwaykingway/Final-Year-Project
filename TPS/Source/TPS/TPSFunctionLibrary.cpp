// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include <random>

/**
 * Generates a normal distribution value derived from a random linear value. 
 * 
 * @param mean Expectation of the distribution. Determines the x value corresponding to the highest value, 
 *		also known as the shift of function curve. 
 * @param sigma standard deviation of the normal distribution. values are less concentrated towards mean 
 *		for higher sigma value.  
 * 
 * @return 
 */
float UTPSFunctionLibrary::NormalDistributionRandom(float mean, float sigma)
{
	std::random_device rd{};
	std::mt19937 gen{ rd() };
	std::normal_distribution<float> d{ mean, sigma };

	return d(gen);
}

/**
 * Generates normal distribution in 2D coordinate system, constrained by a circle. 
 *
 * @param radius Radius of the constrain circle. 
 * @param isNormalDistribution True for generating coordinates according to normal distribution (the end of
 *	 vector tends to be close to origin), false for generating coordinates linearly. 
 *
 * @return
 */
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

/**
 * Calculates angle btween the two specified spacial vectors using trigonometry functions. 
 *
 * @param A First ternary vector as operand of calculation. 
 * @param B Second ternary vector as operand of calculation. 
 *
 * @return Float value as angle between the vectors. Ranged (0, 180).
 */
float UTPSFunctionLibrary::AngleBetweenVectors(FVector A, FVector B)
{
	A.FVector::Normalize(0.0001f);
	B.FVector::Normalize(0.0001f);
	return UKismetMathLibrary::DegAcos(UKismetMathLibrary::Dot_VectorVector(A, B));
}
