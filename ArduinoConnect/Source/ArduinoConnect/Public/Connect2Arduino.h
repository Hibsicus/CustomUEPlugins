// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Windows.h"
#include "GameFramework/Actor.h"
#include "Connect2Arduino.generated.h"

UCLASS()
class ARDUINOCONNECT_API AConnect2Arduino : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConnect2Arduino();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(EEndPlayReason::Type reson) override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable, Category = "SerialPort")
		void StartConnectArduino(FString PortName);

	UFUNCTION(BlueprintCallable, Category = "SerialPort")
		void CancleConnectArduino();

	UFUNCTION(BlueprintCallable, Category = "SerialPort")
		FString readSerialPort(int32 buf_size = 255);

	UFUNCTION(BlueprintCallable, Category = "SerialPort")
		bool writeSerialPort(FString buffer, int32 buf_size = 255);

	UFUNCTION(BlueprintPure, Category = "SerialPort")
		bool isConnected();



private:
	HANDLE handler;
	bool connected;
	COMSTAT status;
	DWORD errors;
	
};
