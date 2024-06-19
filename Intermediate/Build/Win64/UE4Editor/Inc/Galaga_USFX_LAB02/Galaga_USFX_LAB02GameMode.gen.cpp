// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/Galaga_USFX_LAB02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_LAB02GameMode() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFacadeNaves_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void AGalaga_USFX_LAB02GameMode::StaticRegisterNativesAGalaga_USFX_LAB02GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_NoRegister()
	{
		return AGalaga_USFX_LAB02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacadeNaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FacadeNaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_Reloj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle_Reloj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_LAB02GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_FacadeNaves_MetaData[] = {
		{ "Category", "FacadeNaves" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB02GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_FacadeNaves = { "FacadeNaves", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB02GameMode, FacadeNaves), Z_Construct_UClass_AFacadeNaves_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_FacadeNaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_FacadeNaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_TimerHandle_Reloj_MetaData[] = {
		{ "ModuleRelativePath", "Galaga_USFX_LAB02GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_TimerHandle_Reloj = { "TimerHandle_Reloj", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB02GameMode, TimerHandle_Reloj), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_TimerHandle_Reloj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_TimerHandle_Reloj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_FacadeNaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::NewProp_TimerHandle_Reloj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_LAB02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::ClassParams = {
		&AGalaga_USFX_LAB02GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_LAB02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_LAB02GameMode, 361048261);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AGalaga_USFX_LAB02GameMode>()
	{
		return AGalaga_USFX_LAB02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_LAB02GameMode(Z_Construct_UClass_AGalaga_USFX_LAB02GameMode, &AGalaga_USFX_LAB02GameMode::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AGalaga_USFX_LAB02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_LAB02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
