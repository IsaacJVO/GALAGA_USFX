// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/EstadoNokia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNokia() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoNokia_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoNokia();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UINaveState_NoRegister();
// End Cross Module References
	void AEstadoNokia::StaticRegisterNativesAEstadoNokia()
	{
	}
	UClass* Z_Construct_UClass_AEstadoNokia_NoRegister()
	{
		return AEstadoNokia::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNokia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNokia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNokia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNokia.h" },
		{ "ModuleRelativePath", "EstadoNokia.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNokia_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UINaveState_NoRegister, (int32)VTABLE_OFFSET(AEstadoNokia, IINaveState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNokia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNokia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNokia_Statics::ClassParams = {
		&AEstadoNokia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNokia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNokia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNokia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoNokia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoNokia, 1029696441);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AEstadoNokia>()
	{
		return AEstadoNokia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoNokia(Z_Construct_UClass_AEstadoNokia, &AEstadoNokia::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AEstadoNokia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNokia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
