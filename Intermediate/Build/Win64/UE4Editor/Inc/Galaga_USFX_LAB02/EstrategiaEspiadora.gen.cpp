// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/EstrategiaEspiadora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaEspiadora() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategiaEspiadora_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategiaEspiadora();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaEspiadora::StaticRegisterNativesAEstrategiaEspiadora()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaEspiadora_NoRegister()
	{
		return AEstrategiaEspiadora::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaEspiadora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaEspiadora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaEspiadora_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaEspiadora.h" },
		{ "ModuleRelativePath", "EstrategiaEspiadora.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaEspiadora_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaEspiadora, IIEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaEspiadora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaEspiadora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaEspiadora_Statics::ClassParams = {
		&AEstrategiaEspiadora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaEspiadora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaEspiadora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaEspiadora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaEspiadora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaEspiadora, 2042512803);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AEstrategiaEspiadora>()
	{
		return AEstrategiaEspiadora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaEspiadora(Z_Construct_UClass_AEstrategiaEspiadora, &AEstrategiaEspiadora::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AEstrategiaEspiadora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaEspiadora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
