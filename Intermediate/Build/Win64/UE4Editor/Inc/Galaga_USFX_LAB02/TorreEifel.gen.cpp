// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/TorreEifel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTorreEifel() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ATorreEifel_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ATorreEifel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UISubscriptor_NoRegister();
// End Cross Module References
	void ATorreEifel::StaticRegisterNativesATorreEifel()
	{
	}
	UClass* Z_Construct_UClass_ATorreEifel_NoRegister()
	{
		return ATorreEifel::StaticClass();
	}
	struct Z_Construct_UClass_ATorreEifel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaTorre_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaTorre;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATorreEifel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreEifel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TorreEifel.h" },
		{ "ModuleRelativePath", "TorreEifel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreEifel_Statics::NewProp_MallaTorre_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TorreEifel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATorreEifel_Statics::NewProp_MallaTorre = { "MallaTorre", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATorreEifel, MallaTorre), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATorreEifel_Statics::NewProp_MallaTorre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreEifel_Statics::NewProp_MallaTorre_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATorreEifel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATorreEifel_Statics::NewProp_MallaTorre,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATorreEifel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISubscriptor_NoRegister, (int32)VTABLE_OFFSET(ATorreEifel, IISubscriptor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATorreEifel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATorreEifel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATorreEifel_Statics::ClassParams = {
		&ATorreEifel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATorreEifel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATorreEifel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATorreEifel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreEifel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATorreEifel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATorreEifel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATorreEifel, 3340135988);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ATorreEifel>()
	{
		return ATorreEifel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATorreEifel(Z_Construct_UClass_ATorreEifel, &ATorreEifel::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ATorreEifel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATorreEifel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
