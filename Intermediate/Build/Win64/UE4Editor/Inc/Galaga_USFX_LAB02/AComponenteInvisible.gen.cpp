// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/AComponenteInvisible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAComponenteInvisible() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UAComponenteInvisible_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UAComponenteInvisible();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UAComponenteInvisible::StaticRegisterNativesUAComponenteInvisible()
	{
	}
	UClass* Z_Construct_UClass_UAComponenteInvisible_NoRegister()
	{
		return UAComponenteInvisible::StaticClass();
	}
	struct Z_Construct_UClass_UAComponenteInvisible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAComponenteInvisible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAComponenteInvisible_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AComponenteInvisible.h" },
		{ "ModuleRelativePath", "AComponenteInvisible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAComponenteInvisible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAComponenteInvisible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAComponenteInvisible_Statics::ClassParams = {
		&UAComponenteInvisible::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAComponenteInvisible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAComponenteInvisible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAComponenteInvisible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAComponenteInvisible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAComponenteInvisible, 1312951458);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UAComponenteInvisible>()
	{
		return UAComponenteInvisible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAComponenteInvisible(Z_Construct_UClass_UAComponenteInvisible, &UAComponenteInvisible::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UAComponenteInvisible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAComponenteInvisible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
