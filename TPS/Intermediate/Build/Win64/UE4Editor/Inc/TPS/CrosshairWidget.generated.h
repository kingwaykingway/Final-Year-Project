// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_CrosshairWidget_generated_h
#error "CrosshairWidget.generated.h already included, missing '#pragma once' in CrosshairWidget.h"
#endif
#define TPS_CrosshairWidget_generated_h

#define TPS_Source_TPS_CrosshairWidget_h_23_RPC_WRAPPERS
#define TPS_Source_TPS_CrosshairWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_CrosshairWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairWidget(); \
	friend struct Z_Construct_UClass_UCrosshairWidget_Statics; \
public: \
	DECLARE_CLASS(UCrosshairWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UCrosshairWidget)


#define TPS_Source_TPS_CrosshairWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCrosshairWidget(); \
	friend struct Z_Construct_UClass_UCrosshairWidget_Statics; \
public: \
	DECLARE_CLASS(UCrosshairWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UCrosshairWidget)


#define TPS_Source_TPS_CrosshairWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrosshairWidget(UCrosshairWidget&&); \
	NO_API UCrosshairWidget(const UCrosshairWidget&); \
public:


#define TPS_Source_TPS_CrosshairWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrosshairWidget(UCrosshairWidget&&); \
	NO_API UCrosshairWidget(const UCrosshairWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairWidget)


#define TPS_Source_TPS_CrosshairWidget_h_23_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_CrosshairWidget_h_20_PROLOG
#define TPS_Source_TPS_CrosshairWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_CrosshairWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_CrosshairWidget_h_23_RPC_WRAPPERS \
	TPS_Source_TPS_CrosshairWidget_h_23_INCLASS \
	TPS_Source_TPS_CrosshairWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_CrosshairWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_CrosshairWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_CrosshairWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_CrosshairWidget_h_23_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_CrosshairWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class UCrosshairWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_CrosshairWidget_h


#define FOREACH_ENUM_ESIGHTPATTERN(op) \
	op(SightPattern_Circle) \
	op(SightPattern_Dot) \
	op(SightPattern_Cross) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
