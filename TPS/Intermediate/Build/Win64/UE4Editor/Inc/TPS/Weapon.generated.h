// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef TPS_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define TPS_Weapon_generated_h

#define TPS_Source_TPS_Weapon_h_50_RPC_WRAPPERS \
	virtual FVector2D GetRecoil_Implementation(bool aiming); \
	virtual void ActivateStrobeLight_Implementation(bool activate); \
	virtual void SwitchTacticalLight_Implementation(); \
	virtual void Aim_Scope_Implementation(bool activate); \
	virtual void Aim_LazerPointer_Implementation(bool activate); \
	virtual void Aim_IronSight_Implementation(bool activate); \
	virtual void Unaim_Implementation(); \
	virtual void Reload_Prone_Implementation(); \
	virtual void Reload_Ironsights_Implementation(); \
	virtual void Reload_Hip_Implementation(); \
	virtual void Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetRecoil) \
	{ \
		P_GET_UBOOL(Z_Param_aiming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetRecoil_Implementation(Z_Param_aiming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateStrobeLight) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateStrobeLight_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchTacticalLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchTacticalLight_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_Scope) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_Scope_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_LazerPointer) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_LazerPointer_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_IronSight) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_IronSight_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnaim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unaim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Prone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Prone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Ironsights) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Ironsights_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Hip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Hip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire_Implementation(); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_Weapon_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRecoil) \
	{ \
		P_GET_UBOOL(Z_Param_aiming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetRecoil_Implementation(Z_Param_aiming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateStrobeLight) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateStrobeLight_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchTacticalLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchTacticalLight_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_Scope) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_Scope_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_LazerPointer) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_LazerPointer_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim_IronSight) \
	{ \
		P_GET_UBOOL(Z_Param_activate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim_IronSight_Implementation(Z_Param_activate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnaim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unaim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Prone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Prone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Ironsights) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Ironsights_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload_Hip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload_Hip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire_Implementation(); \
		P_NATIVE_END; \
	}


#define TPS_Source_TPS_Weapon_h_50_EVENT_PARMS \
	struct Weapon_eventActivateStrobeLight_Parms \
	{ \
		bool activate; \
	}; \
	struct Weapon_eventAim_IronSight_Parms \
	{ \
		bool activate; \
	}; \
	struct Weapon_eventAim_LazerPointer_Parms \
	{ \
		bool activate; \
	}; \
	struct Weapon_eventAim_Scope_Parms \
	{ \
		bool activate; \
	}; \
	struct Weapon_eventGetRecoil_Parms \
	{ \
		bool aiming; \
		FVector2D ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Weapon_eventGetRecoil_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define TPS_Source_TPS_Weapon_h_50_CALLBACK_WRAPPERS
#define TPS_Source_TPS_Weapon_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define TPS_Source_TPS_Weapon_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define TPS_Source_TPS_Weapon_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define TPS_Source_TPS_Weapon_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define TPS_Source_TPS_Weapon_h_50_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_Weapon_h_47_PROLOG \
	TPS_Source_TPS_Weapon_h_50_EVENT_PARMS


#define TPS_Source_TPS_Weapon_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_Weapon_h_50_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_Weapon_h_50_RPC_WRAPPERS \
	TPS_Source_TPS_Weapon_h_50_CALLBACK_WRAPPERS \
	TPS_Source_TPS_Weapon_h_50_INCLASS \
	TPS_Source_TPS_Weapon_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_Weapon_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_Weapon_h_50_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_Weapon_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_Weapon_h_50_CALLBACK_WRAPPERS \
	TPS_Source_TPS_Weapon_h_50_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_Weapon_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_Weapon_h


#define FOREACH_ENUM_ETARGETINGTOOL(op) \
	op(TargetingTool_None) \
	op(TargetingTool_IronSight) \
	op(TargetingTool_LazerPointer) \
	op(TargetingTool_Scope) 
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(Weapon_Pistol) \
	op(Weapon_Shotgun) \
	op(Weapon_Rifle) \
	op(Weapon_SniperRifle) \
	op(Weapon_GrenadeLauncher) \
	op(Weapon_RocketLauncher) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
