// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef TPS_TPSFunctionLibrary_generated_h
#error "TPSFunctionLibrary.generated.h already included, missing '#pragma once' in TPSFunctionLibrary.h"
#endif
#define TPS_TPSFunctionLibrary_generated_h

#define TPS_Source_TPS_TPSFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAngleBetweenVectors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTPSFunctionLibrary::AngleBetweenVectors(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCircleDistributionRandom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_UBOOL(Z_Param_isNormalDistribution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UTPSFunctionLibrary::CircleDistributionRandom(Z_Param_radius,Z_Param_isNormalDistribution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalDistributionRandom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mean); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sigma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTPSFunctionLibrary::NormalDistributionRandom(Z_Param_mean,Z_Param_sigma); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAngleBetweenVectors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTPSFunctionLibrary::AngleBetweenVectors(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCircleDistributionRandom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_UBOOL(Z_Param_isNormalDistribution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UTPSFunctionLibrary::CircleDistributionRandom(Z_Param_radius,Z_Param_isNormalDistribution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalDistributionRandom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mean); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sigma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTPSFunctionLibrary::NormalDistributionRandom(Z_Param_mean,Z_Param_sigma); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTPSFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTPSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTPSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UTPSFunctionLibrary)


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTPSFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTPSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTPSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UTPSFunctionLibrary)


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTPSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPSFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTPSFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPSFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTPSFunctionLibrary(UTPSFunctionLibrary&&); \
	NO_API UTPSFunctionLibrary(const UTPSFunctionLibrary&); \
public:


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTPSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTPSFunctionLibrary(UTPSFunctionLibrary&&); \
	NO_API UTPSFunctionLibrary(const UTPSFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTPSFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPSFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPSFunctionLibrary)


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_TPSFunctionLibrary_h_12_PROLOG
#define TPS_Source_TPS_TPSFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_RPC_WRAPPERS \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_INCLASS \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_TPSFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class UTPSFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_TPSFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
