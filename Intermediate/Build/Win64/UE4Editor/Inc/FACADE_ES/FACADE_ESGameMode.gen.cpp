// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/FACADE_ESGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACADE_ESGameMode() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_ESGameMode_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_ESGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
	FACADE_ES_API UClass* Z_Construct_UClass_AENEMY_FACADE_NoRegister();
// End Cross Module References
	void AFACADE_ESGameMode::StaticRegisterNativesAFACADE_ESGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFACADE_ESGameMode_NoRegister()
	{
		return AFACADE_ESGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFACADE_ESGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Facade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACADE_ESGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_ESGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FACADE_ESGameMode.h" },
		{ "ModuleRelativePath", "FACADE_ESGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_ESGameMode_Statics::NewProp_Facade_MetaData[] = {
		{ "Category", "Facade Enemy" },
		{ "ModuleRelativePath", "FACADE_ESGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFACADE_ESGameMode_Statics::NewProp_Facade = { "Facade", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFACADE_ESGameMode, Facade), Z_Construct_UClass_AENEMY_FACADE_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFACADE_ESGameMode_Statics::NewProp_Facade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_ESGameMode_Statics::NewProp_Facade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFACADE_ESGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFACADE_ESGameMode_Statics::NewProp_Facade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACADE_ESGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACADE_ESGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACADE_ESGameMode_Statics::ClassParams = {
		&AFACADE_ESGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFACADE_ESGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_ESGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFACADE_ESGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_ESGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACADE_ESGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACADE_ESGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACADE_ESGameMode, 851657467);
	template<> FACADE_ES_API UClass* StaticClass<AFACADE_ESGameMode>()
	{
		return AFACADE_ESGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACADE_ESGameMode(Z_Construct_UClass_AFACADE_ESGameMode, &AFACADE_ESGameMode::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AFACADE_ESGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACADE_ESGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
