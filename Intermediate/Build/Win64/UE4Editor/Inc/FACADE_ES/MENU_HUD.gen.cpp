// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/MENU_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMENU_HUD() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AMENU_HUD_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AMENU_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AMENU_HUD::StaticRegisterNativesAMENU_HUD()
	{
	}
	UClass* Z_Construct_UClass_AMENU_HUD_NoRegister()
	{
		return AMENU_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AMENU_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMENU_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMENU_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MENU_HUD.h" },
		{ "ModuleRelativePath", "MENU_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMENU_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMENU_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMENU_HUD_Statics::ClassParams = {
		&AMENU_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMENU_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMENU_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMENU_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMENU_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMENU_HUD, 2754233977);
	template<> FACADE_ES_API UClass* StaticClass<AMENU_HUD>()
	{
		return AMENU_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMENU_HUD(Z_Construct_UClass_AMENU_HUD, &AMENU_HUD::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AMENU_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMENU_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
