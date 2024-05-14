// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FACADE_ES_FACADE_ESProjectile_generated_h
#error "FACADE_ESProjectile.generated.h already included, missing '#pragma once' in FACADE_ESProjectile.h"
#endif
#define FACADE_ES_FACADE_ESProjectile_generated_h

#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_SPARSE_DATA
#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFACADE_ESProjectile(); \
	friend struct Z_Construct_UClass_AFACADE_ESProjectile_Statics; \
public: \
	DECLARE_CLASS(AFACADE_ESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FACADE_ES"), NO_API) \
	DECLARE_SERIALIZER(AFACADE_ESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFACADE_ESProjectile(); \
	friend struct Z_Construct_UClass_AFACADE_ESProjectile_Statics; \
public: \
	DECLARE_CLASS(AFACADE_ESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FACADE_ES"), NO_API) \
	DECLARE_SERIALIZER(AFACADE_ESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFACADE_ESProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFACADE_ESProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFACADE_ESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFACADE_ESProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFACADE_ESProjectile(AFACADE_ESProjectile&&); \
	NO_API AFACADE_ESProjectile(const AFACADE_ESProjectile&); \
public:


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFACADE_ESProjectile(AFACADE_ESProjectile&&); \
	NO_API AFACADE_ESProjectile(const AFACADE_ESProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFACADE_ESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFACADE_ESProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFACADE_ESProjectile)


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFACADE_ESProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFACADE_ESProjectile, ProjectileMovement); }


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_12_PROLOG
#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_SPARSE_DATA \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_RPC_WRAPPERS \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_INCLASS \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_SPARSE_DATA \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_ES_API UClass* StaticClass<class AFACADE_ESProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FACADE_ES_Source_FACADE_ES_FACADE_ESProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
