// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Connect2Arduino.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnect2Arduino() {}
// Cross Module References
	ARDUINOCONNECT_API UClass* Z_Construct_UClass_AConnect2Arduino_NoRegister();
	ARDUINOCONNECT_API UClass* Z_Construct_UClass_AConnect2Arduino();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArduinoConnect();
	ARDUINOCONNECT_API UFunction* Z_Construct_UFunction_AConnect2Arduino_CancleConnectArduino();
	ARDUINOCONNECT_API UFunction* Z_Construct_UFunction_AConnect2Arduino_isConnected();
	ARDUINOCONNECT_API UFunction* Z_Construct_UFunction_AConnect2Arduino_readSerialPort();
	ARDUINOCONNECT_API UFunction* Z_Construct_UFunction_AConnect2Arduino_StartConnectArduino();
	ARDUINOCONNECT_API UFunction* Z_Construct_UFunction_AConnect2Arduino_writeSerialPort();
// End Cross Module References
	void AConnect2Arduino::StaticRegisterNativesAConnect2Arduino()
	{
		UClass* Class = AConnect2Arduino::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancleConnectArduino", (Native)&AConnect2Arduino::execCancleConnectArduino },
			{ "isConnected", (Native)&AConnect2Arduino::execisConnected },
			{ "readSerialPort", (Native)&AConnect2Arduino::execreadSerialPort },
			{ "StartConnectArduino", (Native)&AConnect2Arduino::execStartConnectArduino },
			{ "writeSerialPort", (Native)&AConnect2Arduino::execwriteSerialPort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AConnect2Arduino_CancleConnectArduino()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SerialPort" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnect2Arduino, "CancleConnectArduino", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AConnect2Arduino_isConnected()
	{
		struct Connect2Arduino_eventisConnected_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Connect2Arduino_eventisConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Connect2Arduino_eventisConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SerialPort" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnect2Arduino, "isConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Connect2Arduino_eventisConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AConnect2Arduino_readSerialPort()
	{
		struct Connect2Arduino_eventreadSerialPort_Parms
		{
			int32 buf_size;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Connect2Arduino_eventreadSerialPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_buf_size = { UE4CodeGen_Private::EPropertyClass::Int, "buf_size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Connect2Arduino_eventreadSerialPort_Parms, buf_size), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_buf_size,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SerialPort" },
				{ "CPP_Default_buf_size", "255" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnect2Arduino, "readSerialPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Connect2Arduino_eventreadSerialPort_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AConnect2Arduino_StartConnectArduino()
	{
		struct Connect2Arduino_eventStartConnectArduino_Parms
		{
			FString PortName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PortName = { UE4CodeGen_Private::EPropertyClass::Str, "PortName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Connect2Arduino_eventStartConnectArduino_Parms, PortName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PortName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SerialPort" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnect2Arduino, "StartConnectArduino", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Connect2Arduino_eventStartConnectArduino_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AConnect2Arduino_writeSerialPort()
	{
		struct Connect2Arduino_eventwriteSerialPort_Parms
		{
			FString buffer;
			int32 buf_size;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Connect2Arduino_eventwriteSerialPort_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Connect2Arduino_eventwriteSerialPort_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_buf_size = { UE4CodeGen_Private::EPropertyClass::Int, "buf_size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Connect2Arduino_eventwriteSerialPort_Parms, buf_size), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_buffer = { UE4CodeGen_Private::EPropertyClass::Str, "buffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Connect2Arduino_eventwriteSerialPort_Parms, buffer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_buf_size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_buffer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SerialPort" },
				{ "CPP_Default_buf_size", "255" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnect2Arduino, "writeSerialPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Connect2Arduino_eventwriteSerialPort_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConnect2Arduino_NoRegister()
	{
		return AConnect2Arduino::StaticClass();
	}
	UClass* Z_Construct_UClass_AConnect2Arduino()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ArduinoConnect,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AConnect2Arduino_CancleConnectArduino, "CancleConnectArduino" }, // 2255316287
				{ &Z_Construct_UFunction_AConnect2Arduino_isConnected, "isConnected" }, // 1748568938
				{ &Z_Construct_UFunction_AConnect2Arduino_readSerialPort, "readSerialPort" }, // 3813628679
				{ &Z_Construct_UFunction_AConnect2Arduino_StartConnectArduino, "StartConnectArduino" }, // 1791616831
				{ &Z_Construct_UFunction_AConnect2Arduino_writeSerialPort, "writeSerialPort" }, // 3575262323
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Connect2Arduino.h" },
				{ "ModuleRelativePath", "Public/Connect2Arduino.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AConnect2Arduino>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AConnect2Arduino::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConnect2Arduino, 2339232310);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConnect2Arduino(Z_Construct_UClass_AConnect2Arduino, &AConnect2Arduino::StaticClass, TEXT("/Script/ArduinoConnect"), TEXT("AConnect2Arduino"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConnect2Arduino);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
