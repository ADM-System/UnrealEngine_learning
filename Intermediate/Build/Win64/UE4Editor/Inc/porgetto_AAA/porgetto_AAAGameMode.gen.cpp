// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "porgetto_AAA/porgetto_AAAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeporgetto_AAAGameMode() {}
// Cross Module References
	PORGETTO_AAA_API UClass* Z_Construct_UClass_Aporgetto_AAAGameMode_NoRegister();
	PORGETTO_AAA_API UClass* Z_Construct_UClass_Aporgetto_AAAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_porgetto_AAA();
// End Cross Module References
	void Aporgetto_AAAGameMode::StaticRegisterNativesAporgetto_AAAGameMode()
	{
	}
	UClass* Z_Construct_UClass_Aporgetto_AAAGameMode_NoRegister()
	{
		return Aporgetto_AAAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aporgetto_AAAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_porgetto_AAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "porgetto_AAAGameMode.h" },
		{ "ModuleRelativePath", "porgetto_AAAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aporgetto_AAAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::ClassParams = {
		&Aporgetto_AAAGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aporgetto_AAAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aporgetto_AAAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aporgetto_AAAGameMode, 2745872685);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aporgetto_AAAGameMode(Z_Construct_UClass_Aporgetto_AAAGameMode, &Aporgetto_AAAGameMode::StaticClass, TEXT("/Script/porgetto_AAA"), TEXT("Aporgetto_AAAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aporgetto_AAAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
