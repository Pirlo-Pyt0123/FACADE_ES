// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/NavesEjemplares.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesEjemplares() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ANavesEjemplares_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANavesEjemplares();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void ANavesEjemplares::StaticRegisterNativesANavesEjemplares()
	{
	}
	UClass* Z_Construct_UClass_ANavesEjemplares_NoRegister()
	{
		return ANavesEjemplares::StaticClass();
	}
	struct Z_Construct_UClass_ANavesEjemplares_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesEjemplares_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesEjemplares_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavesEjemplares.h" },
		{ "ModuleRelativePath", "NavesEjemplares.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesEjemplares_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesEjemplares>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesEjemplares_Statics::ClassParams = {
		&ANavesEjemplares::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesEjemplares_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesEjemplares_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesEjemplares()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesEjemplares_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesEjemplares, 1150090442);
	template<> FACADE_ES_API UClass* StaticClass<ANavesEjemplares>()
	{
		return ANavesEjemplares::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesEjemplares(Z_Construct_UClass_ANavesEjemplares, &ANavesEjemplares::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("ANavesEjemplares"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesEjemplares);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
