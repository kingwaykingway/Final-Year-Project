// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/TPSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSHUD() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_ATPSHUD_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ATPSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UFunction* Z_Construct_UFunction_ATPSHUD_UpdateAmmo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ATPSHUD::StaticRegisterNativesATPSHUD()
	{
		UClass* Class = ATPSHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAmmo", &ATPSHUD::execUpdateAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics
	{
		struct TPSHUD_eventUpdateAmmo_Parms
		{
			int32 magazineAmmo;
			int32 iventoryAmmo;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iventoryAmmo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magazineAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::NewProp_iventoryAmmo = { "iventoryAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSHUD_eventUpdateAmmo_Parms, iventoryAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::NewProp_magazineAmmo = { "magazineAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSHUD_eventUpdateAmmo_Parms, magazineAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::NewProp_iventoryAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::NewProp_magazineAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSHUD, nullptr, "UpdateAmmo", sizeof(TPSHUD_eventUpdateAmmo_Parms), Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSHUD_UpdateAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSHUD_UpdateAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSHUD_NoRegister()
	{
		return ATPSHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATPSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSHUD_UpdateAmmo, "UpdateAmmo" }, // 2365572615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TPSHUD.h" },
		{ "ModuleRelativePath", "TPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "TPSHUD" },
		{ "ModuleRelativePath", "TPSHUD.h" },
		{ "ToolTip", "This will be drawn at the center of the screen." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSHUD_Statics::NewProp_CrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSHUD_Statics::ClassParams = {
		&ATPSHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATPSHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATPSHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSHUD, 2424839937);
	template<> TPS_API UClass* StaticClass<ATPSHUD>()
	{
		return ATPSHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSHUD(Z_Construct_UClass_ATPSHUD, &ATPSHUD::StaticClass, TEXT("/Script/TPS"), TEXT("ATPSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
