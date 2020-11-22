// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/CrosshairWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrosshairWidget() {}
// Cross Module References
	TPS_API UEnum* Z_Construct_UEnum_TPS_ESightPattern();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UCrosshairWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	static UEnum* ESightPattern_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TPS_ESightPattern, Z_Construct_UPackage__Script_TPS(), TEXT("ESightPattern"));
		}
		return Singleton;
	}
	template<> TPS_API UEnum* StaticEnum<ESightPattern>()
	{
		return ESightPattern_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESightPattern(ESightPattern_StaticEnum, TEXT("/Script/TPS"), TEXT("ESightPattern"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TPS_ESightPattern_Hash() { return 3902664629U; }
	UEnum* Z_Construct_UEnum_TPS_ESightPattern()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESightPattern"), 0, Get_Z_Construct_UEnum_TPS_ESightPattern_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SightPattern_Circle", (int64)SightPattern_Circle },
				{ "SightPattern_Dot", (int64)SightPattern_Dot },
				{ "SightPattern_Cross", (int64)SightPattern_Cross },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "CrosshairWidget.h" },
				{ "SightPattern_Circle.DisplayName", "Circle" },
				{ "SightPattern_Cross.DisplayName", "Cross" },
				{ "SightPattern_Dot.DisplayName", "Dot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TPS,
				nullptr,
				"ESightPattern",
				"ESightPattern",
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
	void UCrosshairWidget::StaticRegisterNativesUCrosshairWidget()
	{
	}
	UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister()
	{
		return UCrosshairWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCrosshairWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SightPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrosshairWidget.h" },
		{ "ModuleRelativePath", "CrosshairWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_SightPattern_MetaData[] = {
		{ "Category", "CrosshairWidget" },
		{ "ModuleRelativePath", "CrosshairWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_SightPattern = { "SightPattern", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrosshairWidget, SightPattern), Z_Construct_UEnum_TPS_ESightPattern, METADATA_PARAMS(Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_SightPattern_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_SightPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_SightPattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrosshairWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams = {
		&UCrosshairWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrosshairWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrosshairWidget, 4205646851);
	template<> TPS_API UClass* StaticClass<UCrosshairWidget>()
	{
		return UCrosshairWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrosshairWidget(Z_Construct_UClass_UCrosshairWidget, &UCrosshairWidget::StaticClass, TEXT("/Script/TPS"), TEXT("UCrosshairWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
