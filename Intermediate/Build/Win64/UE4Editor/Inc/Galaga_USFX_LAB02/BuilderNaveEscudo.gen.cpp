// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/BuilderNaveEscudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderNaveEscudo() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ABuilderNaveEscudo_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ABuilderNaveEscudo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANODRIZA_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UBuilderNaveNodriza_NoRegister();
// End Cross Module References
	void ABuilderNaveEscudo::StaticRegisterNativesABuilderNaveEscudo()
	{
	}
	UClass* Z_Construct_UClass_ABuilderNaveEscudo_NoRegister()
	{
		return ABuilderNaveEscudo::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderNaveEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveNodriza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveNodriza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderNaveEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderNaveEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderNaveEscudo.h" },
		{ "ModuleRelativePath", "BuilderNaveEscudo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderNaveEscudo_Statics::NewProp_NaveNodriza_MetaData[] = {
		{ "Category", "NaveNodriza" },
		{ "ModuleRelativePath", "BuilderNaveEscudo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderNaveEscudo_Statics::NewProp_NaveNodriza = { "NaveNodriza", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderNaveEscudo, NaveNodriza), Z_Construct_UClass_ANODRIZA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderNaveEscudo_Statics::NewProp_NaveNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderNaveEscudo_Statics::NewProp_NaveNodriza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderNaveEscudo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderNaveEscudo_Statics::NewProp_NaveNodriza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderNaveEscudo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderNaveNodriza_NoRegister, (int32)VTABLE_OFFSET(ABuilderNaveEscudo, IBuilderNaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderNaveEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderNaveEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderNaveEscudo_Statics::ClassParams = {
		&ABuilderNaveEscudo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderNaveEscudo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderNaveEscudo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderNaveEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderNaveEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderNaveEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderNaveEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderNaveEscudo, 32273990);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ABuilderNaveEscudo>()
	{
		return ABuilderNaveEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderNaveEscudo(Z_Construct_UClass_ABuilderNaveEscudo, &ABuilderNaveEscudo::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ABuilderNaveEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderNaveEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
