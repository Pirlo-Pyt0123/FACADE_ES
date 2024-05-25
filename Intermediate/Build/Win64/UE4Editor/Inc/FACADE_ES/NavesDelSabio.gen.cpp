// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/NavesDelSabio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesDelSabio() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ANavesDelSabio_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANavesDelSabio();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void ANavesDelSabio::StaticRegisterNativesANavesDelSabio()
	{
	}
	UClass* Z_Construct_UClass_ANavesDelSabio_NoRegister()
	{
		return ANavesDelSabio::StaticClass();
	}
	struct Z_Construct_UClass_ANavesDelSabio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesDelSabio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesDelSabio_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavesDelSabio.h" },
		{ "ModuleRelativePath", "NavesDelSabio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesDelSabio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesDelSabio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesDelSabio_Statics::ClassParams = {
		&ANavesDelSabio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesDelSabio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesDelSabio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesDelSabio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesDelSabio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesDelSabio, 3568666986);
	template<> FACADE_ES_API UClass* StaticClass<ANavesDelSabio>()
	{
		return ANavesDelSabio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesDelSabio(Z_Construct_UClass_ANavesDelSabio, &ANavesDelSabio::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("ANavesDelSabio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesDelSabio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
