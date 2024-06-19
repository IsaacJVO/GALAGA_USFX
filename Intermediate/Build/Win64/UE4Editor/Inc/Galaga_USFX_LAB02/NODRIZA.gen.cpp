// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NODRIZA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNODRIZA() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANODRIZA_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANODRIZA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UConstructorNave_NoRegister();
// End Cross Module References
	void ANODRIZA::StaticRegisterNativesANODRIZA()
	{
	}
	UClass* Z_Construct_UClass_ANODRIZA_NoRegister()
	{
		return ANODRIZA::StaticClass();
	}
	struct Z_Construct_UClass_ANODRIZA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANODRIZA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANODRIZA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NODRIZA.h" },
		{ "ModuleRelativePath", "NODRIZA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANODRIZA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorNave_NoRegister, (int32)VTABLE_OFFSET(ANODRIZA, IConstructorNave), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANODRIZA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANODRIZA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANODRIZA_Statics::ClassParams = {
		&ANODRIZA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANODRIZA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANODRIZA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANODRIZA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANODRIZA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANODRIZA, 2512370038);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ANODRIZA>()
	{
		return ANODRIZA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANODRIZA(Z_Construct_UClass_ANODRIZA, &ANODRIZA::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ANODRIZA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANODRIZA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
