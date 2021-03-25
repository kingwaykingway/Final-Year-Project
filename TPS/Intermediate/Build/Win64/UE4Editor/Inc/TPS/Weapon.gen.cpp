// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	TPS_API UEnum* Z_Construct_UEnum_TPS_ETargetingTool();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UEnum* Z_Construct_UEnum_TPS_EWeaponType();
	TPS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	TPS_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_ActivateStrobeLight();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Aim_IronSight();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Aim_LazerPointer();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Aim_Scope();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_BeginPlay_Child();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Fire();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_GetRecoil();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Reload_Hip();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Reload_Ironsights();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Reload_Prone();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_SwitchTacticalLight();
	TPS_API UFunction* Z_Construct_UFunction_AWeapon_Unaim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TPS_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* ETargetingTool_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TPS_ETargetingTool, Z_Construct_UPackage__Script_TPS(), TEXT("ETargetingTool"));
		}
		return Singleton;
	}
	template<> TPS_API UEnum* StaticEnum<ETargetingTool>()
	{
		return ETargetingTool_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetingTool(ETargetingTool_StaticEnum, TEXT("/Script/TPS"), TEXT("ETargetingTool"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TPS_ETargetingTool_Hash() { return 3481183147U; }
	UEnum* Z_Construct_UEnum_TPS_ETargetingTool()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetingTool"), 0, Get_Z_Construct_UEnum_TPS_ETargetingTool_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TargetingTool_None", (int64)TargetingTool_None },
				{ "TargetingTool_IronSight", (int64)TargetingTool_IronSight },
				{ "TargetingTool_LazerPointer", (int64)TargetingTool_LazerPointer },
				{ "TargetingTool_Scope", (int64)TargetingTool_Scope },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Weapon.h" },
				{ "TargetingTool_IronSight.DisplayName", "Iron Sight" },
				{ "TargetingTool_LazerPointer.DisplayName", "Lazer Pointer" },
				{ "TargetingTool_None.DisplayName", "None" },
				{ "TargetingTool_Scope.DisplayName", "Scope" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TPS,
				nullptr,
				"ETargetingTool",
				"ETargetingTool",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TPS_EWeaponType, Z_Construct_UPackage__Script_TPS(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> TPS_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/TPS"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TPS_EWeaponType_Hash() { return 3847924798U; }
	UEnum* Z_Construct_UEnum_TPS_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_TPS_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Weapon_Pistol", (int64)Weapon_Pistol },
				{ "Weapon_Shotgun", (int64)Weapon_Shotgun },
				{ "Weapon_Rifle", (int64)Weapon_Rifle },
				{ "Weapon_SniperRifle", (int64)Weapon_SniperRifle },
				{ "Weapon_GrenadeLauncher", (int64)Weapon_GrenadeLauncher },
				{ "Weapon_RocketLauncher", (int64)Weapon_RocketLauncher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Weapon.h" },
				{ "Weapon_GrenadeLauncher.DisplayName", "Grenade Launcher" },
				{ "Weapon_Pistol.DisplayName", "Pistol" },
				{ "Weapon_Rifle.DisplayName", "Rifle" },
				{ "Weapon_RocketLauncher.DisplayName", "Rocket Launcher" },
				{ "Weapon_Shotgun.DisplayName", "Shotgun" },
				{ "Weapon_SniperRifle.DisplayName", "Sniper Rifle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TPS,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AWeapon_ActivateStrobeLight = FName(TEXT("ActivateStrobeLight"));
	void AWeapon::ActivateStrobeLight(bool activate)
	{
		Weapon_eventActivateStrobeLight_Parms Parms;
		Parms.activate=activate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_ActivateStrobeLight),&Parms);
	}
	static FName NAME_AWeapon_Aim_IronSight = FName(TEXT("Aim_IronSight"));
	void AWeapon::Aim_IronSight(bool activate)
	{
		Weapon_eventAim_IronSight_Parms Parms;
		Parms.activate=activate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Aim_IronSight),&Parms);
	}
	static FName NAME_AWeapon_Aim_LazerPointer = FName(TEXT("Aim_LazerPointer"));
	void AWeapon::Aim_LazerPointer(bool activate)
	{
		Weapon_eventAim_LazerPointer_Parms Parms;
		Parms.activate=activate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Aim_LazerPointer),&Parms);
	}
	static FName NAME_AWeapon_Aim_Scope = FName(TEXT("Aim_Scope"));
	void AWeapon::Aim_Scope(bool activate)
	{
		Weapon_eventAim_Scope_Parms Parms;
		Parms.activate=activate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Aim_Scope),&Parms);
	}
	static FName NAME_AWeapon_BeginPlay_Child = FName(TEXT("BeginPlay_Child"));
	void AWeapon::BeginPlay_Child()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_BeginPlay_Child),NULL);
	}
	static FName NAME_AWeapon_Fire = FName(TEXT("Fire"));
	void AWeapon::Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Fire),NULL);
	}
	static FName NAME_AWeapon_GetRecoil = FName(TEXT("GetRecoil"));
	FVector2D AWeapon::GetRecoil(bool aiming)
	{
		Weapon_eventGetRecoil_Parms Parms;
		Parms.aiming=aiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_GetRecoil),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWeapon_Reload_Hip = FName(TEXT("Reload_Hip"));
	void AWeapon::Reload_Hip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Reload_Hip),NULL);
	}
	static FName NAME_AWeapon_Reload_Ironsights = FName(TEXT("Reload_Ironsights"));
	void AWeapon::Reload_Ironsights()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Reload_Ironsights),NULL);
	}
	static FName NAME_AWeapon_Reload_Prone = FName(TEXT("Reload_Prone"));
	void AWeapon::Reload_Prone()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Reload_Prone),NULL);
	}
	static FName NAME_AWeapon_SwitchTacticalLight = FName(TEXT("SwitchTacticalLight"));
	void AWeapon::SwitchTacticalLight()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_SwitchTacticalLight),NULL);
	}
	static FName NAME_AWeapon_Unaim = FName(TEXT("Unaim"));
	void AWeapon::Unaim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Unaim),NULL);
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateStrobeLight", &AWeapon::execActivateStrobeLight },
			{ "Aim_IronSight", &AWeapon::execAim_IronSight },
			{ "Aim_LazerPointer", &AWeapon::execAim_LazerPointer },
			{ "Aim_Scope", &AWeapon::execAim_Scope },
			{ "Fire", &AWeapon::execFire },
			{ "GetRecoil", &AWeapon::execGetRecoil },
			{ "Reload_Hip", &AWeapon::execReload_Hip },
			{ "Reload_Ironsights", &AWeapon::execReload_Ironsights },
			{ "Reload_Prone", &AWeapon::execReload_Prone },
			{ "SwitchTacticalLight", &AWeapon::execSwitchTacticalLight },
			{ "Unaim", &AWeapon::execUnaim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics
	{
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((Weapon_eventActivateStrobeLight_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventActivateStrobeLight_Parms), &Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ActivateStrobeLight", sizeof(Weapon_eventActivateStrobeLight_Parms), Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_ActivateStrobeLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_ActivateStrobeLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics
	{
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((Weapon_eventAim_IronSight_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventAim_IronSight_Parms), &Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Aim the gun with sight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Aim_IronSight", sizeof(Weapon_eventAim_IronSight_Parms), Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Aim_IronSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Aim_IronSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics
	{
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((Weapon_eventAim_LazerPointer_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventAim_LazerPointer_Parms), &Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Aim the gun with lazer pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Aim_LazerPointer", sizeof(Weapon_eventAim_LazerPointer_Parms), Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Aim_LazerPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Aim_LazerPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Aim_Scope_Statics
	{
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((Weapon_eventAim_Scope_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventAim_Scope_Parms), &Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Aim the gun with lazer pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Aim_Scope", sizeof(Weapon_eventAim_Scope_Parms), Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Aim_Scope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Aim_Scope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "BeginPlay_Child", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_BeginPlay_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_BeginPlay_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Fire the gun. Called once oer fire." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Fire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetRecoil_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_aiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_aiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetRecoil_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_aiming_SetBit(void* Obj)
	{
		((Weapon_eventGetRecoil_Parms*)Obj)->aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_aiming = { "aiming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventGetRecoil_Parms), &Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_aiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetRecoil_Statics::NewProp_aiming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Switch the flashlight on and off, should the gun have one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetRecoil", sizeof(Weapon_eventGetRecoil_Parms), Z_Construct_UFunction_AWeapon_GetRecoil_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetRecoil_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_GetRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Reload_Hip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Reload_Hip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Reload the gun at hip stance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Reload_Hip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Reload_Hip", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Reload_Hip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Reload_Hip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Reload_Hip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Reload_Hip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Reload the gun at ironsights stance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Reload_Ironsights", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Reload_Ironsights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Reload_Ironsights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Reload_Prone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Reload_Prone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Reload the gun at prone stance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Reload_Prone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Reload_Prone", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Reload_Prone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Reload_Prone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Reload_Prone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Reload_Prone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "// Switch the flashlight on and off, should the gun have one.\n//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)\n//      void SwitchFlashLight(bool activate);\n//      void SwitchFlashLight_Implementation(bool activate);\n// Switch the flashlight on and off, should the gun have one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "SwitchTacticalLight", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_SwitchTacticalLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_SwitchTacticalLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Unaim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Unaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Unaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Unaim", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Unaim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Unaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Unaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Unaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStrobeLightActivated_MetaData[];
#endif
		static void NewProp_IsStrobeLightActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStrobeLightActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrobeLightFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrobeLightFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_HasTacticalLight_MetaData[];
#endif
		static void NewProp_Attachment_HasTacticalLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Attachment_HasTacticalLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_TargetingTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Aiming_TargetingTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_TargetingTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hip_TargetingTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_RecoilRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aiming_RecoilRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_VerticalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aiming_VerticalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_HorizontalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aiming_HorizontalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_RecoilRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hip_RecoilRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_VerticalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hip_VerticalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_HorizontalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hip_HorizontalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouch_Aiming_SwayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Crouch_Aiming_SwayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouch_Hip_SwayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Crouch_Hip_SwayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standing_Aiming_SwayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Standing_Aiming_SwayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standing_Hip_SwayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Standing_Hip_SwayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwappingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwappingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ProjectileNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadWithNormalDistribution_MetaData[];
#endif
		static void NewProp_SpreadWithNormalDistribution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpreadWithNormalDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DealsDamageOnProjectileHit_MetaData[];
#endif
		static void NewProp_DealsDamageOnProjectileHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DealsDamageOnProjectileHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstFireCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstFireCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstFireRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BurstFireRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireChargingTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireChargingTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFireCharging_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFireCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCycleLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireCycleLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFullAuto_MetaData[];
#endif
		static void NewProp_IsFullAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFullAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanHipFire_MetaData[];
#endif
		static void NewProp_CanHipFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanHipFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemainingAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MagazineSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectorPortOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RejectorPortOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefaultHighlighter_MetaData[];
#endif
		static void NewProp_UseDefaultHighlighter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDefaultHighlighter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TacticalLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazerPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LazerPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_ActivateStrobeLight, "ActivateStrobeLight" }, // 1885686502
		{ &Z_Construct_UFunction_AWeapon_Aim_IronSight, "Aim_IronSight" }, // 3056627673
		{ &Z_Construct_UFunction_AWeapon_Aim_LazerPointer, "Aim_LazerPointer" }, // 3525191524
		{ &Z_Construct_UFunction_AWeapon_Aim_Scope, "Aim_Scope" }, // 2986021138
		{ &Z_Construct_UFunction_AWeapon_BeginPlay_Child, "BeginPlay_Child" }, // 3874112443
		{ &Z_Construct_UFunction_AWeapon_Fire, "Fire" }, // 996489473
		{ &Z_Construct_UFunction_AWeapon_GetRecoil, "GetRecoil" }, // 3859410663
		{ &Z_Construct_UFunction_AWeapon_Reload_Hip, "Reload_Hip" }, // 2287203366
		{ &Z_Construct_UFunction_AWeapon_Reload_Ironsights, "Reload_Ironsights" }, // 413678215
		{ &Z_Construct_UFunction_AWeapon_Reload_Prone, "Reload_Prone" }, // 1213405831
		{ &Z_Construct_UFunction_AWeapon_SwitchTacticalLight, "SwitchTacticalLight" }, // 3185271272
		{ &Z_Construct_UFunction_AWeapon_Unaim, "Unaim" }, // 1776578755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "A complete Weapon blueprint instance should have the following components:\n            - Skeletal mesh, as the shape and look of the gun\n            - Particle system, as the lazer pointer\n            - Light (preferably spot light), as the tactical light\nMissing any of those components can cause Unreal Engine to crash." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated_MetaData[] = {
		{ "Category", "Attachment and Upgrade" },
		{ "EditCondition", "Attachment_HasTacticalLight" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->IsStrobeLightActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated = { "IsStrobeLightActivated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_StrobeLightFrequency_MetaData[] = {
		{ "Category", "Attachment and Upgrade" },
		{ "EditCondition", "Attachment_HasTacticalLight" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_StrobeLightFrequency = { "StrobeLightFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, StrobeLightFrequency), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_StrobeLightFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_StrobeLightFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight_MetaData[] = {
		{ "Category", "Attachment and Upgrade" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "//\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attachment and Upgrade\")\n//      TEnumAsByte<ESightPattern> IronSightPattern;\n// True if the gun has a flashlight, false otherwise." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->Attachment_HasTacticalLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight = { "Attachment_HasTacticalLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_TargetingTool_MetaData[] = {
		{ "Category", "Attachment and Upgrade" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Targeting tool when the character is aiming." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_TargetingTool = { "Aiming_TargetingTool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Aiming_TargetingTool), Z_Construct_UEnum_TPS_ETargetingTool, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_TargetingTool_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_TargetingTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_TargetingTool_MetaData[] = {
		{ "Category", "Attachment and Upgrade" },
		{ "EditCondition", "CanHipFire" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Targeting tool when the character is not aiming." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_TargetingTool = { "Hip_TargetingTool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Hip_TargetingTool), Z_Construct_UEnum_TPS_ETargetingTool, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_TargetingTool_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_TargetingTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_RecoilRecovery_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "How quickly the gun recovers from aiming fire recoil." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_RecoilRecovery = { "Aiming_RecoilRecovery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Aiming_RecoilRecovery), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_RecoilRecovery_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_RecoilRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_VerticalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The muzzle rise immediately after aiming firing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_VerticalRecoil = { "Aiming_VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Aiming_VerticalRecoil), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_VerticalRecoil_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_VerticalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_HorizontalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The muzzle sway immediately after aiming firing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_HorizontalRecoil = { "Aiming_HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Aiming_HorizontalRecoil), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_HorizontalRecoil_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_HorizontalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_RecoilRecovery_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "How quickly the gun recovers from hip fire recoil." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_RecoilRecovery = { "Hip_RecoilRecovery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Hip_RecoilRecovery), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_RecoilRecovery_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_RecoilRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_VerticalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The muzzle rise immediately after hip firing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_VerticalRecoil = { "Hip_VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Hip_VerticalRecoil), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_VerticalRecoil_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_VerticalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_HorizontalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The muzzle sway immediately after hip firing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_HorizontalRecoil = { "Hip_HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Hip_HorizontalRecoil), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_HorizontalRecoil_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_HorizontalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Aiming_SwayRate_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Play rate of crouch ironsights idle animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Aiming_SwayRate = { "Crouch_Aiming_SwayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Crouch_Aiming_SwayRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Aiming_SwayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Aiming_SwayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Hip_SwayRate_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Play rate of crouch hip idle animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Hip_SwayRate = { "Crouch_Hip_SwayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Crouch_Hip_SwayRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Hip_SwayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Hip_SwayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Aiming_SwayRate_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Play rate of standing ironsights idle animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Aiming_SwayRate = { "Standing_Aiming_SwayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Standing_Aiming_SwayRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Aiming_SwayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Aiming_SwayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Hip_SwayRate_MetaData[] = {
		{ "Category", "Sway" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Play rate of standing hip idle animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Hip_SwayRate = { "Standing_Hip_SwayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Standing_Hip_SwayRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Hip_SwayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Hip_SwayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_SwappingSpeed_MetaData[] = {
		{ "Category", "Tactical" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Length of delay when swaping to this weapon." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SwappingSpeed = { "SwappingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, SwappingSpeed), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_SwappingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_SwappingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AimingDelay_MetaData[] = {
		{ "Category", "Tactical" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "// Firing frequency acquired from max fire rate.\nUPROPERTY(BlueprintReadWrite, Category = \"Firing\")\n        int BurstFireRoundCounter;\n// Length of delay when switching between hip and aiming stance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimingDelay = { "AimingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AimingDelay), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AimingDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AimingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileNumber_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Number of projectiles launched on each fire." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileNumber = { "ProjectileNumber", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ProjectileNumber), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->SpreadWithNormalDistribution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution = { "SpreadWithNormalDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Represents the deviation of projectile. 0 stande for absolute accurecy.\nSpecially, the spread of shotgun buckshot is applied to each projectile individually." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Spread), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Spread_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleVelocity_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Initial speed of fired projectiles." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleVelocity = { "MuzzleVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MuzzleVelocity), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "The max distance the gun can hit with a fire." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Range), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileScale_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Visual and collision size multiplier of the projectile." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileScale = { "ProjectileScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ProjectileScale), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Projectile class reference for generating projectile when firing.\nclass UClass* ProjectileClass;\nclass AProjectile* ProjectileClass;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "True if the weapon deals damage when projectile hits target,\nfalse for dealing damage on immediate hit -- the projectile FX will be played immediately afterwards." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->DealsDamageOnProjectileHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit = { "DealsDamageOnProjectileHit", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireCooldown_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "!IsFullAuto && BurstFireRound > 1" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Time gap between two burst fire commands.\nNot valid when the weapon is full auto." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireCooldown = { "BurstFireCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, BurstFireCooldown), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireRound_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "!IsFullAuto" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Number of rounds to fire each time the trigger is pulled.\nValues greater than 1 implies the gun has burst fire, otherwise semi-auto fire.\nTheoretical fire rate still depends on MaxFireRate, whereas the gap in practice depends on BurstFireCooldown.\nNot valid when the weapon is full auto." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireRound = { "BurstFireRound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, BurstFireRound), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireRound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Time between firing signal and actual fire." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireDelay), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireChargingTimer_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "MaxFireCharging > 0.0f" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Timer for fire charging. Should keep timing when fire button is held." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireChargingTimer = { "FireChargingTimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireChargingTimer), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireChargingTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireChargingTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireCharging_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "// Whether or not the weapon fires after charging.\n// Semi-auto weapons with true value should fire any time the firing button is released.\n// Full-auto weapons with true value should start firing when the charging timer reaches this value.\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Firing\")\n//      bool HasChargedFire;\n// The longest effective charging time of the gun.\n// The concrete meaning of 'charging' is to be defined in blueprints." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireCharging = { "MaxFireCharging", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MaxFireCharging), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireCharging_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireCycleLength_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Firing frequency acquired from max fire rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireCycleLength = { "FireCycleLength", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireCycleLength), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCycleLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCycleLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireRate_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Maximum fire rate of the gun.\nThe unit is rounds per minute." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireRate = { "MaxFireRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MaxFireRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "True if the gun has full auto fire mode, false otherwise.\nTrue implies that when holding fire button, the gun keeps firing." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->IsFullAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto = { "IsFullAuto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FiringAnim_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FiringAnim = { "FiringAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FiringAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FiringAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FiringAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "True if the gun can do hip fire, false implies that the gun can only fire when aiming." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->CanHipFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire = { "CanHipFire", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_RemainingAmmo_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Current remaining rounds of cartridge in magazine." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, RemainingAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_RemainingAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_RemainingAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Magazine size of the gun." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MagazineSize), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Damage dealt for each hit of the gun." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Enum type of the weapon." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponType), Z_Construct_UEnum_TPS_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_RejectorPortOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun rejector port's offset from the transform center." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RejectorPortOffset = { "RejectorPortOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, RejectorPortOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_RejectorPortOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_RejectorPortOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun muzzle's offset from the transform center." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->UseDefaultHighlighter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter = { "UseDefaultHighlighter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, Category = Component)\n               TSubclassOf<class UUserWidget> CrosshairWidgetClass;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, InteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Crosshair_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Iron sight of the gun." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Crosshair), Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Crosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Crosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_TacticalLight_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Tactical light of the gun." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_TacticalLight = { "TacticalLight", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, TacticalLight), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_TacticalLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_TacticalLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_LazerPointer_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Lazer pointer of the gun." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_LazerPointer = { "LazerPointer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, LazerPointer), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_LazerPointer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_LazerPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Skeletal mesh of the gun." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionTrigger_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionTrigger = { "InteractionTrigger", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, InteractionTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "void SetupIronSightPattern_Implementation();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_IsStrobeLightActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_StrobeLightFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Attachment_HasTacticalLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_TargetingTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_TargetingTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_RecoilRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_VerticalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Aiming_HorizontalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_RecoilRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_VerticalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Hip_HorizontalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Aiming_SwayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Crouch_Hip_SwayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Aiming_SwayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Standing_Hip_SwayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SwappingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SpreadWithNormalDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_DealsDamageOnProjectileHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BurstFireRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireChargingTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireCycleLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxFireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_IsFullAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FiringAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CanHipFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RemainingAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagazineSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RejectorPortOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_UseDefaultHighlighter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Crosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_TacticalLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_LazerPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_InteractionTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 2140771174);
	template<> TPS_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/TPS"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
