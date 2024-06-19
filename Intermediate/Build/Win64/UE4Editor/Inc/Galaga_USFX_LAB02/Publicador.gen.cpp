// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/Publicador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicador() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APublicador_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APublicador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void APublicador::StaticRegisterNativesAPublicador()
	{
	}
	UClass* Z_Construct_UClass_APublicador_NoRegister()
	{
		return APublicador::StaticClass();
	}
	struct Z_Construct_UClass_APublicador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Publicador.h" },
		{ "ModuleRelativePath", "Publicador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublicador_Statics::ClassParams = {
		&APublicador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APublicador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublicador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublicador, 364959008);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<APublicador>()
	{
		return APublicador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicador(Z_Construct_UClass_APublicador, &APublicador::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("APublicador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
