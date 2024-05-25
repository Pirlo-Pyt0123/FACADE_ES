// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/P_FM_FABRICA_GEN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_FABRICA_GEN() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AP_FM_FABRICA_GEN_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AP_FM_FABRICA_GEN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AP_FM_FABRICA_GEN::StaticRegisterNativesAP_FM_FABRICA_GEN()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_FABRICA_GEN_NoRegister()
	{
		return AP_FM_FABRICA_GEN::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_FM_FABRICA_GEN.h" },
		{ "ModuleRelativePath", "P_FM_FABRICA_GEN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_FABRICA_GEN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::ClassParams = {
		&AP_FM_FABRICA_GEN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_FABRICA_GEN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_FABRICA_GEN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_FABRICA_GEN, 499254398);
	template<> FACADE_ES_API UClass* StaticClass<AP_FM_FABRICA_GEN>()
	{
		return AP_FM_FABRICA_GEN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_FABRICA_GEN(Z_Construct_UClass_AP_FM_FABRICA_GEN, &AP_FM_FABRICA_GEN::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AP_FM_FABRICA_GEN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_FABRICA_GEN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
