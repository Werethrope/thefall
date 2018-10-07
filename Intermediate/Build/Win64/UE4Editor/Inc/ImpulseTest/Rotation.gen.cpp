// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImpulseTest/Rotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotation() {}
// Cross Module References
	IMPULSETEST_API UClass* Z_Construct_UClass_ARotation_NoRegister();
	IMPULSETEST_API UClass* Z_Construct_UClass_ARotation();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ImpulseTest();
// End Cross Module References
	void ARotation::StaticRegisterNativesARotation()
	{
	}
	UClass* Z_Construct_UClass_ARotation_NoRegister()
	{
		return ARotation::StaticClass();
	}
	struct Z_Construct_UClass_ARotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ImpulseTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rotation.h" },
		{ "ModuleRelativePath", "Rotation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotation_Statics::ClassParams = {
		&ARotation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARotation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotation, 2633223107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotation(Z_Construct_UClass_ARotation, &ARotation::StaticClass, TEXT("/Script/ImpulseTest"), TEXT("ARotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
