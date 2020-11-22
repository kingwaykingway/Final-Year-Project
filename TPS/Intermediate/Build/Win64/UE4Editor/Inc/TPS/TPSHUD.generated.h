// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_TPSHUD_generated_h
#error "TPSHUD.generated.h already included, missing '#pragma once' in TPSHUD.h"
#endif
#define TPS_TPSHUD_generated_h

#define TPS_Source_TPS_TPSHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_magazineAmmo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iventoryAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAmmo(Z_Param_magazineAmmo,Z_Param_iventoryAmmo); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_TPSHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_magazineAmmo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iventoryAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAmmo(Z_Param_magazineAmmo,Z_Param_iventoryAmmo); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_TPSHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSHUD(); \
	friend struct Z_Construct_UClass_ATPSHUD_Statics; \
public: \
	DECLARE_CLASS(ATPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSHUD)


#define TPS_Source_TPS_TPSHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSHUD(); \
	friend struct Z_Construct_UClass_ATPSHUD_Statics; \
public: \
	DECLARE_CLASS(ATPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSHUD)


#define TPS_Source_TPS_TPSHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSHUD(ATPSHUD&&); \
	NO_API ATPSHUD(const ATPSHUD&); \
public:


#define TPS_Source_TPS_TPSHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSHUD(ATPSHUD&&); \
	NO_API ATPSHUD(const ATPSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSHUD)


#define TPS_Source_TPS_TPSHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairTexture() { return STRUCT_OFFSET(ATPSHUD, CrosshairTexture); }


#define TPS_Source_TPS_TPSHUD_h_12_PROLOG
#define TPS_Source_TPS_TPSHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSHUD_h_15_RPC_WRAPPERS \
	TPS_Source_TPS_TPSHUD_h_15_INCLASS \
	TPS_Source_TPS_TPSHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_TPSHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSHUD_h_15_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class ATPSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_TPSHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
