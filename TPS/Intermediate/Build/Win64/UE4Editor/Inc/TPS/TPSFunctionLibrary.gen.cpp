// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/TPSFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSFunctionLibrary() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_UTPSFunctionLibrary_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UTPSFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TPS_API UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TPS_API UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom();
// End Cross Module References
	void UTPSFunctionLibrary::StaticRegisterNativesUTPSFunctionLibrary()
	{
		UClass* Class = UTPSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleBetweenVectors", &UTPSFunctionLibrary::execAngleBetweenVectors },
			{ "CircleDistributionRandom", &UTPSFunctionLibrary::execCircleDistributionRandom },
			{ "NormalDistributionRandom", &UTPSFunctionLibrary::execNormalDistributionRandom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics
	{
		struct TPSFunctionLibrary_eventAngleBetweenVectors_Parms
		{
			FVector A;
			FVector B;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventAngleBetweenVectors_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventAngleBetweenVectors_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSFunctionLibrary, nullptr, "AngleBetweenVectors", sizeof(TPSFunctionLibrary_eventAngleBetweenVectors_Parms), Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics
	{
		struct TPSFunctionLibrary_eventCircleDistributionRandom_Parms
		{
			float radius;
			bool isNormalDistribution;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_isNormalDistribution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNormalDistribution;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventCircleDistributionRandom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_isNormalDistribution_SetBit(void* Obj)
	{
		((TPSFunctionLibrary_eventCircleDistributionRandom_Parms*)Obj)->isNormalDistribution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_isNormalDistribution = { "isNormalDistribution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TPSFunctionLibrary_eventCircleDistributionRandom_Parms), &Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_isNormalDistribution_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventCircleDistributionRandom_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_isNormalDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::NewProp_radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSFunctionLibrary, nullptr, "CircleDistributionRandom", sizeof(TPSFunctionLibrary_eventCircleDistributionRandom_Parms), Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics
	{
		struct TPSFunctionLibrary_eventNormalDistributionRandom_Parms
		{
			float mean;
			float sigma;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sigma;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventNormalDistributionRandom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_sigma = { "sigma", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventNormalDistributionRandom_Parms, sigma), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSFunctionLibrary_eventNormalDistributionRandom_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_sigma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::NewProp_mean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSFunctionLibrary, nullptr, "NormalDistributionRandom", sizeof(TPSFunctionLibrary_eventNormalDistributionRandom_Parms), Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTPSFunctionLibrary_NoRegister()
	{
		return UTPSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTPSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPSFunctionLibrary_AngleBetweenVectors, "AngleBetweenVectors" }, // 2540801194
		{ &Z_Construct_UFunction_UTPSFunctionLibrary_CircleDistributionRandom, "CircleDistributionRandom" }, // 4061179381
		{ &Z_Construct_UFunction_UTPSFunctionLibrary_NormalDistributionRandom, "NormalDistributionRandom" }, // 1020997968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPSFunctionLibrary.h" },
		{ "ModuleRelativePath", "TPSFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTPSFunctionLibrary_Statics::ClassParams = {
		&UTPSFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTPSFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTPSFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTPSFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTPSFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTPSFunctionLibrary, 1186677955);
	template<> TPS_API UClass* StaticClass<UTPSFunctionLibrary>()
	{
		return UTPSFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTPSFunctionLibrary(Z_Construct_UClass_UTPSFunctionLibrary, &UTPSFunctionLibrary::StaticClass, TEXT("/Script/TPS"), TEXT("UTPSFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
