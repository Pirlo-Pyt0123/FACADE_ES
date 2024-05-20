// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/FACADE_LEVELC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACADE_LEVELC() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_LEVELC_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_LEVELC();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AFACADE_LEVELC::StaticRegisterNativesAFACADE_LEVELC()
	{
	}
	UClass* Z_Construct_UClass_AFACADE_LEVELC_NoRegister()
	{
		return AFACADE_LEVELC::StaticClass();
	}
	struct Z_Construct_UClass_AFACADE_LEVELC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACADE_LEVELC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFACADE_UNITY,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_LEVELC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FACADE_LEVELC.h" },
		{ "ModuleRelativePath", "FACADE_LEVELC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACADE_LEVELC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACADE_LEVELC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACADE_LEVELC_Statics::ClassParams = {
		&AFACADE_LEVELC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFACADE_LEVELC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_LEVELC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACADE_LEVELC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACADE_LEVELC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACADE_LEVELC, 956794357);
	template<> FACADE_ES_API UClass* StaticClass<AFACADE_LEVELC>()
	{
		return AFACADE_LEVELC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACADE_LEVELC(Z_Construct_UClass_AFACADE_LEVELC, &AFACADE_LEVELC::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AFACADE_LEVELC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACADE_LEVELC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
