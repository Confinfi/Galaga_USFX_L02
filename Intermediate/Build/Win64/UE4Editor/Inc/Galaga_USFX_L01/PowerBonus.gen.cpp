// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PowerBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerBonus() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerBonus_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerBonus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void APowerBonus::StaticRegisterNativesAPowerBonus()
	{
	}
	UClass* Z_Construct_UClass_APowerBonus_NoRegister()
	{
		return APowerBonus::StaticClass();
	}
	struct Z_Construct_UClass_APowerBonus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerBonus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerBonus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerBonus.h" },
		{ "ModuleRelativePath", "PowerBonus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerBonus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerBonus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerBonus_Statics::ClassParams = {
		&APowerBonus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APowerBonus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerBonus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerBonus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerBonus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerBonus, 3764954120);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<APowerBonus>()
	{
		return APowerBonus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerBonus(Z_Construct_UClass_APowerBonus, &APowerBonus::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("APowerBonus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerBonus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
