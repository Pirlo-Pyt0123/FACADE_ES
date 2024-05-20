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
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_LEVELC_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NivelActual;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nivel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nivel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nivel;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ordenado_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ordenado_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ordenado;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_NivelActual_MetaData[] = {
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, NivelActual), Z_Construct_UClass_AFACADE_LEVELC_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_NivelActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_NivelActual_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel_Inner = { "Nivel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFACADE_UNITY_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel_MetaData[] = {
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel = { "Nivel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Nivel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado_Inner = { "Ordenado", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado_MetaData[] = {
		{ "ModuleRelativePath", "ENEMY_FACADE.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado = { "Ordenado", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AENEMY_FACADE, Ordenado), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AENEMY_FACADE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_NivelActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Nivel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AENEMY_FACADE_Statics::NewProp_Ordenado,
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
	IMPLEMENT_CLASS(AENEMY_FACADE, 2473997874);
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
