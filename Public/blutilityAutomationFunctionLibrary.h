// Created by Skyler Moosman And Jaden Evanger
// themooseman.net || cyberblaststudios.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "blutilityAutomationFunctionLibrary.generated.h"

class UObject;
/**
 * 
 */
UCLASS()
class BORON_API blutilityAutomationFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:


	//Functions to get and set UPROPERTY variables hidden from blueprints for selected assets
	UFUNCTION(BlueprintPure)
	static float getFloat(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setFloat(UObject * object, FName propertyName, float PropertyValue);

	
	UFUNCTION(BlueprintPure)
		static int getInt(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setInt(UObject * object, FName propertyName, int PropertyValue);

	UFUNCTION(BlueprintPure)
		static bool getBool(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setBool(UObject * object, FName propertyName, bool PropertyValue);

	UFUNCTION(BlueprintPure)
		static uint8 getByte(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setByte(UObject * object, FName propertyName, uint8 PropertyValue);

	UFUNCTION(BlueprintPure)
		static int64 getInt64(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setInt64(UObject * object, FName propertyName, int64 PropertyValue);

	UFUNCTION(BlueprintPure)
		static FName getName(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setName(UObject * object, FName propertyName, FName PropertyValue);

	UFUNCTION(BlueprintPure)
		static FString getString(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setString(UObject * object, FName propertyName, FString PropertyValue);

	UFUNCTION(BlueprintPure)
		static FVector getVector(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setVector(UObject * object, FName propertyName, FVector PropertyValue);

	UFUNCTION(BlueprintPure)
		static FTransform getTransform(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setTransform(UObject * object, FName propertyName, FTransform PropertyValue);

	UFUNCTION(BlueprintPure)
		static FRotator getRotator(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setRotator(UObject * object, FName propertyName, FRotator PropertyValue);

	UFUNCTION(BlueprintPure)
		static UObject* getObject(UObject* object, FName propertyName);

	UFUNCTION(BlueprintCallable)
		static void setObject(UObject * object, FName propertyName, UObject* PropertyValue);
};
