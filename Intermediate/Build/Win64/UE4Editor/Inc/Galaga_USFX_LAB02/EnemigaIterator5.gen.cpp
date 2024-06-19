// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/EnemigaIterator5.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigaIterator5() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEnemigaIterator5_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEnemigaIterator5();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemigaIterator5::StaticRegisterNativesAEnemigaIterator5()
	{
	}
	UClass* Z_Construct_UClass_AEnemigaIterator5_NoRegister()
	{
		return AEnemigaIterator5::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigaIterator5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigaIterator5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigaIterator5_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigaIterator5.h" },
		{ "ModuleRelativePath", "EnemigaIterator5.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigaIterator5_Statics::NewProp_MallaI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reloj" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigaIterator5.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigaIterator5_Statics::NewProp_MallaI = { "MallaI", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigaIterator5, MallaI), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigaIterator5_Statics::NewProp_MallaI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator5_Statics::NewProp_MallaI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigaIterator5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigaIterator5_Statics::NewProp_MallaI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigaIterator5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigaIterator5>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigaIterator5_Statics::ClassParams = {
		&AEnemigaIterator5::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigaIterator5_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator5_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigaIterator5_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator5_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigaIterator5()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigaIterator5_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigaIterator5, 1863523160);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AEnemigaIterator5>()
	{
		return AEnemigaIterator5::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigaIterator5(Z_Construct_UClass_AEnemigaIterator5, &AEnemigaIterator5::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AEnemigaIterator5"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigaIterator5);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
