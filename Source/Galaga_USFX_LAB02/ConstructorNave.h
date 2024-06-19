#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConstructorNave.generated.h"

UINTERFACE(MinimalAPI)
class UConstructorNave : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IConstructorNave
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetHijasNodrizas(class AHijasNodriza* hijas) = 0;
	virtual void SetEscudoNodriza(class AEscudoNodriza* escudo) = 0;
	virtual void SetMotorNaveNodriza(class AMotorNaveNodriza* motor) = 0;
};
