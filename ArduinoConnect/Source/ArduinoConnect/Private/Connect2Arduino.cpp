// Fill out your copyright notice in the Description page of Project Settings.

#include "Connect2Arduino.h"


// Sets default values
AConnect2Arduino::AConnect2Arduino()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConnect2Arduino::BeginPlay()
{
	Super::BeginPlay();
	
}

void AConnect2Arduino::EndPlay(EEndPlayReason::Type reson)
{
	Super::EndPlay(reson);

	CancleConnectArduino();
}

// Called every frame
void AConnect2Arduino::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConnect2Arduino::StartConnectArduino(FString PortName)
{
	this->connected = false;
	char* _port = TCHAR_TO_UTF8(*PortName);

	this->handler = CreateFileA(static_cast<LPCSTR>(_port), GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	if (this->handler == INVALID_HANDLE_VALUE)
	{
		UE_LOG(LogActor, Error, TEXT("Arduino connect has trouble!"));
	}
	else
	{
		DCB dcbSerialParameters = { 0 };

		if (!GetCommState(this->handler, &dcbSerialParameters))
		{
			UE_LOG(LogActor, Error, TEXT("failed to get current serial parameters"));
		}
		else {
			dcbSerialParameters.BaudRate = CBR_9600;
			dcbSerialParameters.ByteSize = 8;
			dcbSerialParameters.StopBits = ONESTOPBIT;
			dcbSerialParameters.Parity = NOPARITY;
			dcbSerialParameters.fDtrControl = DTR_CONTROL_ENABLE;

			if (!SetCommState(handler, &dcbSerialParameters))
			{
				UE_LOG(LogActor, Error, TEXT("couldn't set serial port parameters"));
			}
			else {
				this->connected = true;
				PurgeComm(this->handler, PURGE_RXCLEAR | PURGE_TXCLEAR);
				//Sleep(2000);
			}


		}
	}
}

void AConnect2Arduino::CancleConnectArduino()
{
	if (this->connected)
	{
		this->connected = false;
		CloseHandle(this->handler);
	}
}

FString AConnect2Arduino::readSerialPort(int32 buf_size)
{
	DWORD bytesRead;
	unsigned int toRead;
	unsigned int _buf_size = buf_size;
	char* _buffer = new char[_buf_size];

	ClearCommError(this->handler, &this->errors, &this->status);

	if (this->status.cbInQue > 0)
	{
		if (this->status.cbInQue > _buf_size)
		{
			toRead = _buf_size;
		}
		else
		{
			toRead = this->status.cbInQue;
		}
	}

	if (ReadFile(this->handler, _buffer, toRead, &bytesRead, NULL)) {

		FString result = FString(_buffer);

		UE_LOG(LogActor, Warning, TEXT("Readbytes: %d"), bytesRead);

		TArray<FString> Parsed;

		result.ParseIntoArray(Parsed, TEXT("\r\n"), false);

		return Parsed[0];
	}

	return TEXT("UNKNOW");
}

bool AConnect2Arduino::writeSerialPort(FString buffer, int32 buf_size)
{
	DWORD bytesSend;
	char* _buffer = TCHAR_TO_UTF8(*buffer);

	uint32 _bus_size = buf_size;

	if (!WriteFile(this->handler, (void*)_buffer, _bus_size, &bytesSend, 0))
	{
		ClearCommError(this->handler, &this->errors, &this->status);
		return false;
	}
	else {
		return true;
	}
}

bool AConnect2Arduino::isConnected()
{
	return this->connected;
}




