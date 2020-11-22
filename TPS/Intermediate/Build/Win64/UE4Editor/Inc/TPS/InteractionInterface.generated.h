// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define TPS_InteractionInterface_generated_h

#define TPS_Source_TPS_InteractionInterface_h_13_RPC_WRAPPERS
#define TPS_Source_TPS_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_InteractionInterface_h_13_EVENT_PARMS
#define TPS_Source_TPS_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define TPS_Source_TPS_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPS_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPS_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPS_API UInteractionInterface(UInteractionInterface&&); \
	TPS_API UInteractionInterface(const UInteractionInterface&); \
public:


#define TPS_Source_TPS_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPS_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPS_API UInteractionInterface(UInteractionInterface&&); \
	TPS_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPS_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface)


#define TPS_Source_TPS_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TPS"), TPS_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define TPS_Source_TPS_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TPS_Source_TPS_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TPS_Source_TPS_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TPS_Source_TPS_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TPS_Source_TPS_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TPS_Source_TPS_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TPS_Source_TPS_InteractionInterface_h_10_PROLOG \
	TPS_Source_TPS_InteractionInterface_h_13_EVENT_PARMS


#define TPS_Source_TPS_InteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_InteractionInterface_h_13_RPC_WRAPPERS \
	TPS_Source_TPS_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	TPS_Source_TPS_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	TPS_Source_TPS_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
