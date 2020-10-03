// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ultimate_Goal/Ultimate_GoalGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltimate_GoalGameMode() {}
// Cross Module References
	ULTIMATE_GOAL_API UClass* Z_Construct_UClass_AUltimate_GoalGameMode_NoRegister();
	ULTIMATE_GOAL_API UClass* Z_Construct_UClass_AUltimate_GoalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ultimate_Goal();
// End Cross Module References
	void AUltimate_GoalGameMode::StaticRegisterNativesAUltimate_GoalGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUltimate_GoalGameMode_NoRegister()
	{
		return AUltimate_GoalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUltimate_GoalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUltimate_GoalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ultimate_Goal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimate_GoalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ultimate_GoalGameMode.h" },
		{ "ModuleRelativePath", "Ultimate_GoalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUltimate_GoalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUltimate_GoalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUltimate_GoalGameMode_Statics::ClassParams = {
		&AUltimate_GoalGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUltimate_GoalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimate_GoalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUltimate_GoalGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUltimate_GoalGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUltimate_GoalGameMode, 4031521601);
	template<> ULTIMATE_GOAL_API UClass* StaticClass<AUltimate_GoalGameMode>()
	{
		return AUltimate_GoalGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUltimate_GoalGameMode(Z_Construct_UClass_AUltimate_GoalGameMode, &AUltimate_GoalGameMode::StaticClass, TEXT("/Script/Ultimate_Goal"), TEXT("AUltimate_GoalGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUltimate_GoalGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
