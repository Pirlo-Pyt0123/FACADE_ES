// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/ENEMY_FACADE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENEMY_FACADE() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AENEMY_FACADE_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AENEMY_FACADE();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Basic_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Nodriza_NoRegister();
// End Cross Module References
	void AENEMY_FACADE::StaticRegisterNativesAENEMY_FACADE()
	{
	}
	UClass* Z_Construct_UClass_AENEMY_FACADE_NoRegister()
	{
		return AENEMY_FACADE::StaticClass();
	}
	struct Z_Construct_UClass_AENEMY_FACADE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Basicas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Basicas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Master_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Master;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AENEMY_FACADE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ENEMY_FACADE.h" },
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos_MetaData[] = {
		{ "Category", "Facade Enemy" },
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Facade Enemy" },
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Basicas_MetaData[] = {
		{ "Category", "Facade Ship" },
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Basicas = { "Basicas", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Basicas), Z_Construct_UClass_ANaveEnemiga_Basic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Basicas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Basicas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Master_MetaData[] = {
		{ "Category", "Facade Ship" },
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Master), Z_Construct_UClass_ANaveEnemiga_Nodriza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Master_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Master_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AENEMY_FACADE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Enemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Basicas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Master,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AENEMY_FACADE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AENEMY_FACADE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AENEMY_FACADE_Statics::ClassParams = {
		&AENEMY_FACADE::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AENEMY_FACADE_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AENEMY_FACADE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AENEMY_FACADE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AENEMY_FACADE, 951713844);
	template<> FACADE_ES_API UClass* StaticClass<AENEMY_FACADE>()
	{
		return AENEMY_FACADE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AENEMY_FACADE(Z_Construct_UClass_AENEMY_FACADE, &AENEMY_FACADE::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AENEMY_FACADE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AENEMY_FACADE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
