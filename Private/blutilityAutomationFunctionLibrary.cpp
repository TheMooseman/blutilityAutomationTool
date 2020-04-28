// Created by Skyler Moosman And Jaden Evanger
// themooseman.net || cyberblaststudios.com


#include "blutilityAutomationFunctionLibrary.h"
#include "Object.h"
#include "..\Public\blutilityAutomationFunctionLibrary.h"

/* FLOATS **************************************************************************************/
float blutilityAutomationFunctionLibrary::getFloat(UObject * object, FName propertyName)
{
	//Get property name from FName in BP
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UFloatProperty* floatProp = Cast<UFloatProperty>(Property);
	
	//If property exists
	if(floatProp != nullptr)
	{
		//Retreive the value from the UFloatProperty given the variables FName
		void* ValuePtr = floatProp->ContainerPtrToValuePtr<void>(object);

		//Return the UFloatProperty to the BP
		return floatProp->GetPropertyValue(ValuePtr);
	}
	//Property does not exist
	else
	{
		return 0.0f;
	}
	
	
}

void blutilityAutomationFunctionLibrary::setFloat(UObject * object, FName propertyName, float PropertyValue)
{
	//Get property name from FName in BP
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	
	
	//If the value is a float
	if (UNumericProperty *NumericProperty = Cast<UNumericProperty>(Property))
	{
		if (UFloatProperty *FloatProperty = Cast<UFloatProperty>(NumericProperty))
		{
			//Set value of UPROPERTY located under the FName
			void* ValuePtr = FloatProperty->ContainerPtrToValuePtr<void>(object);
			FloatProperty->SetFloatingPointPropertyValue(ValuePtr, PropertyValue);
			object->PostEditChange();
		}
	}
}
/***********************************************************************************************/



/* INTS ****************************************************************************************/
int blutilityAutomationFunctionLibrary::getInt(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UIntProperty* intProp = Cast<UIntProperty>(Property);
	if (intProp != nullptr)
	{
		void* ValuePtr = intProp->ContainerPtrToValuePtr<void>(object);
		return intProp->GetPropertyValue(ValuePtr);
	}
	else
	{
		return 0;
	}
}

void blutilityAutomationFunctionLibrary::setInt(UObject * object, FName propertyName, int32 PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);

	if (UNumericProperty *NumericProperty = Cast<UNumericProperty>(Property))
	{
		if (UIntProperty *IntProperty = Cast<UIntProperty>(NumericProperty))
		{
			void* ValuePtr = IntProperty->ContainerPtrToValuePtr<void>(object);
			IntProperty->SetPropertyValue(ValuePtr, PropertyValue);
			object->PostEditChange();
		}
	}
}
/***********************************************************************************************/


/* BOOLS ***************************************************************************************/
bool blutilityAutomationFunctionLibrary::getBool(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UBoolProperty* boolProp = Cast<UBoolProperty>(Property);
	if (boolProp)
	{
		void* boolPropPtr = boolProp->ContainerPtrToValuePtr<void>(object);
		bool boolPropVal = boolProp->GetPropertyValue(boolPropPtr);
		return boolPropVal;
	}
	else
	{
		return false;
	}
}

void blutilityAutomationFunctionLibrary::setBool(UObject * object, FName propertyName, bool PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);


	if (UBoolProperty *boolProperty = Cast<UBoolProperty>(Property))
	{
		void* ValuePtr = boolProperty->ContainerPtrToValuePtr<void>(object);
		boolProperty->SetPropertyValue(ValuePtr, PropertyValue);
		object->PostEditChange();
	}

}
/***********************************************************************************************/

/* BYTES ***************************************************************************************/
uint8 blutilityAutomationFunctionLibrary::getByte(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UInt8Property* byteProp = Cast<UInt8Property>(Property);
	if (byteProp != nullptr)
	{
		void* ValuePtr = byteProp->ContainerPtrToValuePtr<void>(object);
		return byteProp->GetPropertyValue(ValuePtr);
	}
	else
	{
		return 0;
	}
}

void blutilityAutomationFunctionLibrary::setByte(UObject * object, FName propertyName, uint8 PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);

	if (UInt8Property *NumericProperty = Cast<UInt8Property>(Property))
	{
		if (UInt8Property *IntProperty = Cast<UInt8Property>(NumericProperty))
		{
			void* ValuePtr = IntProperty->ContainerPtrToValuePtr<void>(object);
			IntProperty->SetPropertyValue(ValuePtr, PropertyValue);
			object->PostEditChange();
		}
	}
}
/***********************************************************************************************/

/* INT64 ***************************************************************************************/
int64 blutilityAutomationFunctionLibrary::getInt64(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UInt64Property* int64Prop = Cast<UInt64Property>(Property);
	if (int64Prop != nullptr)
	{
		void* ValuePtr = int64Prop->ContainerPtrToValuePtr<void>(object);
		return int64Prop->GetPropertyValue(ValuePtr);
	}
	else
	{
		return int64();
	}
}

void blutilityAutomationFunctionLibrary::setInt64(UObject * object, FName propertyName, int64 PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);

	if (UInt64Property *NumericProperty = Cast<UInt64Property>(Property))
	{
		if (UInt64Property *IntProperty = Cast<UInt64Property>(NumericProperty))
		{
			void* ValuePtr = IntProperty->ContainerPtrToValuePtr<void>(object);
			IntProperty->SetPropertyValue(ValuePtr, PropertyValue);
			object->PostEditChange();
		}
	}
}
/***********************************************************************************************/

/* FName ***************************************************************************************/
FName blutilityAutomationFunctionLibrary::getName(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UNameProperty* FNameProp = Cast<UNameProperty>(Property);
	if (FNameProp != nullptr)
	{
		void* ValuePtr = FNameProp->ContainerPtrToValuePtr<void>(object);
		return FNameProp->GetPropertyValue(ValuePtr);
	}
	else
	{
		return FName(TEXT("Fname"));
	}
}

void blutilityAutomationFunctionLibrary::setName(UObject * object, FName propertyName, FName PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);


	if (UNameProperty *FNameProperty = Cast<UNameProperty>(Property))
	{
		void* ValuePtr = FNameProperty->ContainerPtrToValuePtr<void>(object);
		FNameProperty->SetPropertyValue(ValuePtr, PropertyValue);
		object->PostEditChange();
	}
}
/***********************************************************************************************/

/* FString **********************************************************************************************/

FString blutilityAutomationFunctionLibrary::getString(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStrProperty* FStringProp = Cast<UStrProperty>(Property);
	if (FStringProp != nullptr)
	{
		void* ValuePtr = FStringProp->ContainerPtrToValuePtr<void>(object);
		return FStringProp->GetPropertyValue(ValuePtr);
	}
	else
	{
		return FString(TEXT("FString"));
	}
}

void blutilityAutomationFunctionLibrary::setString(UObject * object, FName propertyName, FString PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);


	if (UStrProperty *FStringProperty = Cast<UStrProperty>(Property))
	{
		void* ValuePtr = FStringProperty->ContainerPtrToValuePtr<void>(object);

		FStringProperty->SetPropertyValue(ValuePtr, PropertyValue);
		object->PostEditChange();
	}
}


/* FVector **********************************************************************************************/
FVector blutilityAutomationFunctionLibrary::getVector(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* vectorProp = Cast<UStructProperty>(Property);
	if (vectorProp != nullptr)
	{
		void* StructAddress = vectorProp->ContainerPtrToValuePtr<void>(object);
	
		if (UStructProperty* StructProp = Cast<UStructProperty>(vectorProp))
		{
			UScriptStruct* ScriptStruct = StructProp->Struct;

			//Get values of each dimension
			UProperty* xProp = ScriptStruct->FindPropertyByName("X");
			UProperty* yProp = ScriptStruct->FindPropertyByName("Y");
			UProperty* zProp = ScriptStruct->FindPropertyByName("Z");
			
			//If dimensions are valid
			if (UFloatProperty* xFloatProp = Cast<UFloatProperty>(xProp))
			{
				if (UFloatProperty* yFloatProp = Cast<UFloatProperty>(yProp))
				{
					if (UFloatProperty* zFloatProp = Cast<UFloatProperty>(zProp))
					{
						void* xValuePtr = xFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorX = xFloatProp->GetPropertyValuePtr(xValuePtr);

						void* yValuePtr = yFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorY = yFloatProp->GetPropertyValuePtr(yValuePtr);

						void* zValuePtr = zFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorZ = zFloatProp->GetPropertyValuePtr(zValuePtr);

						FVector objectVector = FVector(*vectorX, *vectorY, *vectorZ);
						return objectVector;

					}
					else
					{
						return FVector(0, 0, 0);
					}
				}
				else
				{
					return FVector(0, 0, 0);
				}
			}
			else
			{
				return FVector(0, 0, 0);
			}
		}
		else
		{
			return FVector(0, 0, 0);
		}
	}
	else
	{
		return FVector(0, 0, 0);
	}
}

void blutilityAutomationFunctionLibrary::setVector(UObject * object, FName propertyName, FVector PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* vectorProp = Cast<UStructProperty>(Property);
	if (vectorProp != nullptr)
	{
		void* StructAddress = vectorProp->ContainerPtrToValuePtr<void>(object);
	
		if (UStructProperty* StructProp = Cast<UStructProperty>(vectorProp))
		{
			UScriptStruct* ScriptStruct = StructProp->Struct;
			UProperty* xProp = ScriptStruct->FindPropertyByName("X");
			UProperty* yProp = ScriptStruct->FindPropertyByName("Y");
			UProperty* zProp = ScriptStruct->FindPropertyByName("Z");

			if (UFloatProperty* xFloatProp = Cast<UFloatProperty>(xProp))
			{
				if (UFloatProperty* yFloatProp = Cast<UFloatProperty>(yProp))
				{
					if (UFloatProperty* zFloatProp = Cast<UFloatProperty>(zProp))
					{
						void* xValuePtr = xFloatProp->ContainerPtrToValuePtr<void>(object);

						void* yValuePtr = yFloatProp->ContainerPtrToValuePtr<void>(object);

						void* zValuePtr = zFloatProp->ContainerPtrToValuePtr<void>(object);

						xFloatProp->SetFloatingPointPropertyValue(xValuePtr, PropertyValue.X);
						yFloatProp->SetFloatingPointPropertyValue(yValuePtr, PropertyValue.Y);
						zFloatProp->SetFloatingPointPropertyValue(zValuePtr, PropertyValue.Z);
						object->PostEditChange();
					}
				}
			}
		}
	}
}


/* FTransform **********************************************************************************************/
FTransform blutilityAutomationFunctionLibrary::getTransform(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* transformProp = Cast<UStructProperty>(Property);
	
	if (UStructProperty* StructProp = Cast<UStructProperty>(transformProp))
	{
		UScriptStruct* ScriptStruct = StructProp->Struct;
		
		FRotator rotProp = getRotator(ScriptStruct, "Rotation");
		FVector transProp = getVector(ScriptStruct, "Translation");
		FVector scaleProp = getVector(ScriptStruct, "Scale3D");

		FTransform objectTransform = FTransform(rotProp, transProp, scaleProp);

		return objectTransform;
	}
	else
	{
		return FTransform();
	}
}

void blutilityAutomationFunctionLibrary::setTransform(UObject * object, FName propertyName, FTransform PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* transformProp = Cast<UStructProperty>(Property);

	if (UStructProperty* StructProp = Cast<UStructProperty>(transformProp))
	{
		UScriptStruct* ScriptStruct = StructProp->Struct;

		setRotator(ScriptStruct, "Rotation", PropertyValue.Rotator());
		setVector(ScriptStruct, "Translation", PropertyValue.GetLocation());
		setVector(ScriptStruct, "Scale3D", PropertyValue.GetScale3D());
		object->PostEditChange();
	}
}

/* FRotator **********************************************************************************************/
FRotator blutilityAutomationFunctionLibrary::getRotator(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* vectorProp = Cast<UStructProperty>(Property);
	if (vectorProp != nullptr)
	{
		void* StructAddress = vectorProp->ContainerPtrToValuePtr<void>(object);
	
		if (UStructProperty* StructProp = Cast<UStructProperty>(vectorProp))
		{
			UScriptStruct* ScriptStruct = StructProp->Struct;
			UProperty* xProp = ScriptStruct->FindPropertyByName("Pitch");
			UProperty* yProp = ScriptStruct->FindPropertyByName("Yaw");
			UProperty* zProp = ScriptStruct->FindPropertyByName("Roll");

			if (UFloatProperty* xFloatProp = Cast<UFloatProperty>(xProp))
			{
				if (UFloatProperty* yFloatProp = Cast<UFloatProperty>(yProp))
				{
					if (UFloatProperty* zFloatProp = Cast<UFloatProperty>(zProp))
					{
						void* xValuePtr = xFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorX = xFloatProp->GetPropertyValuePtr(xValuePtr);

						void* yValuePtr = yFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorY = yFloatProp->GetPropertyValuePtr(yValuePtr);

						void* zValuePtr = zFloatProp->ContainerPtrToValuePtr<void>(object);
						float* vectorZ = zFloatProp->GetPropertyValuePtr(zValuePtr);

						FRotator objectRotator = FRotator(*vectorX, *vectorY, *vectorZ);
						return objectRotator;

					}
					else
					{
						return FRotator(0, 0, 0);
					}
				}
				else
				{
					return FRotator(0, 0, 0);
				}
			}
			else
			{
				return FRotator(0, 0, 0);
			}
		}
		else
		{
			return FRotator(0, 0, 0);
		}
	}
	else
	{
		return FRotator(0, 0, 0);
	}
}

void blutilityAutomationFunctionLibrary::setRotator(UObject * object, FName propertyName, FRotator PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UStructProperty* vectorProp = Cast<UStructProperty>(Property);
	if (vectorProp != nullptr)
	{
		void* StructAddress = vectorProp->ContainerPtrToValuePtr<void>(object);
		
		if (UStructProperty* StructProp = Cast<UStructProperty>(vectorProp))
		{
			UScriptStruct* ScriptStruct = StructProp->Struct;
			UProperty* xProp = ScriptStruct->FindPropertyByName("Pitch");
			UProperty* yProp = ScriptStruct->FindPropertyByName("Yaw");
			UProperty* zProp = ScriptStruct->FindPropertyByName("Roll");

			if (UFloatProperty* xFloatProp = Cast<UFloatProperty>(xProp))
			{
				if (UFloatProperty* yFloatProp = Cast<UFloatProperty>(yProp))
				{
					if (UFloatProperty* zFloatProp = Cast<UFloatProperty>(zProp))
					{
						void* xValuePtr = xFloatProp->ContainerPtrToValuePtr<void>(object);

						void* yValuePtr = yFloatProp->ContainerPtrToValuePtr<void>(object);

						void* zValuePtr = zFloatProp->ContainerPtrToValuePtr<void>(object);

						xFloatProp->SetFloatingPointPropertyValue(xValuePtr, PropertyValue.Pitch);
						yFloatProp->SetFloatingPointPropertyValue(yValuePtr, PropertyValue.Yaw);
						zFloatProp->SetFloatingPointPropertyValue(zValuePtr, PropertyValue.Roll);
						object->PostEditChange();
					}
				}
			}
		}
	}
}


/* UObject **********************************************************************************************/

UObject * blutilityAutomationFunctionLibrary::getObject(UObject * object, FName propertyName)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UObjectProperty* objectProp = Cast<UObjectProperty>(Property);
	if (objectProp)
	{
		void* objectPropPtr = objectProp->ContainerPtrToValuePtr<void>(object);
		UObject* objToReturn = objectProp->GetObjectPropertyValue(objectPropPtr);
		return objToReturn;
	}
	else
	{
		return nullptr;
	}
	
}

void blutilityAutomationFunctionLibrary::setObject(UObject * object, FName propertyName, UObject * PropertyValue)
{
	UProperty* Property = object->GetClass()->FindPropertyByName(propertyName);
	UObjectProperty* objectProp = Cast<UObjectProperty>(Property);
	if (objectProp)
	{
		void* objectPropPtr = objectProp->ContainerPtrToValuePtr<void>(object);
		objectProp->SetPropertyValue(objectPropPtr, PropertyValue);
		object->PostEditChange();
	}

}
