// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARDUINOCONNECT_Connect2Arduino_generated_h
#error "Connect2Arduino.generated.h already included, missing '#pragma once' in Connect2Arduino.h"
#endif
#define ARDUINOCONNECT_Connect2Arduino_generated_h

#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwriteSerialPort) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_buffer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_buf_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->writeSerialPort(Z_Param_buffer,Z_Param_buf_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreadSerialPort) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_buf_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->readSerialPort(Z_Param_buf_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancleConnectArduino) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancleConnectArduino(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartConnectArduino) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PortName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartConnectArduino(Z_Param_PortName); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwriteSerialPort) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_buffer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_buf_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->writeSerialPort(Z_Param_buffer,Z_Param_buf_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreadSerialPort) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_buf_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->readSerialPort(Z_Param_buf_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancleConnectArduino) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancleConnectArduino(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartConnectArduino) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PortName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartConnectArduino(Z_Param_PortName); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConnect2Arduino(); \
	friend ARDUINOCONNECT_API class UClass* Z_Construct_UClass_AConnect2Arduino(); \
public: \
	DECLARE_CLASS(AConnect2Arduino, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArduinoConnect"), NO_API) \
	DECLARE_SERIALIZER(AConnect2Arduino) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAConnect2Arduino(); \
	friend ARDUINOCONNECT_API class UClass* Z_Construct_UClass_AConnect2Arduino(); \
public: \
	DECLARE_CLASS(AConnect2Arduino, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArduinoConnect"), NO_API) \
	DECLARE_SERIALIZER(AConnect2Arduino) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConnect2Arduino(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConnect2Arduino) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConnect2Arduino); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConnect2Arduino); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConnect2Arduino(AConnect2Arduino&&); \
	NO_API AConnect2Arduino(const AConnect2Arduino&); \
public:


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConnect2Arduino(AConnect2Arduino&&); \
	NO_API AConnect2Arduino(const AConnect2Arduino&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConnect2Arduino); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConnect2Arduino); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConnect2Arduino)


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_10_PROLOG
#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_RPC_WRAPPERS \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_INCLASS \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArduinoConnect_Source_ArduinoConnect_Public_Connect2Arduino_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
