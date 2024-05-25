// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/CAJAS_ABANDONADAS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAJAS_ABANDONADAS() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ACAJAS_ABANDONADAS_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ACAJAS_ABANDONADAS();
	FACADE_ES_API UClass* Z_Construct_UClass_AGENERAL_OBSTACLE();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void ACAJAS_ABANDONADAS::StaticRegisterNativesACAJAS_ABANDONADAS()
	{
	}
	UClass* Z_Construct_UClass_ACAJAS_ABANDONADAS_NoRegister()
	{
		return ACAJAS_ABANDONADAS::StaticClass();
	}
	struct Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGENERAL_OBSTACLE,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CAJAS_ABANDONADAS.h" },
		{ "ModuleRelativePath", "CAJAS_ABANDONADAS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAJAS_ABANDONADAS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::ClassParams = {
		&ACAJAS_ABANDONADAS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAJAS_ABANDONADAS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAJAS_ABANDONADAS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAJAS_ABANDONADAS, 3635641983);
	template<> FACADE_ES_API UClass* StaticClass<ACAJAS_ABANDONADAS>()
	{
		return ACAJAS_ABANDONADAS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAJAS_ABANDONADAS(Z_Construct_UClass_ACAJAS_ABANDONADAS, &ACAJAS_ABANDONADAS::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("ACAJAS_ABANDONADAS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAJAS_ABANDONADAS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
