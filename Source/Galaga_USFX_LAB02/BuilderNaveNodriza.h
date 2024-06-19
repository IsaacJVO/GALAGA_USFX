#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NODRIZA.h"
#include "BuilderNaveNodriza.generated.h"

UINTERFACE(MinimalAPI)
class UBuilderNaveNodriza : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IBuilderNaveNodriza
{
	GENERATED_BODY()

public:

	virtual void GetHijasNodriza()=0;
	virtual void GetEscudoNodriza()=0;
	virtual void GetMotorNaveNodriza()=0;

	virtual class ANODRIZA* GetNaveNodriza()=0;

	class AHijasNodriza* Hijas;
	class AEscudoNodriza* Escudo;
	class AMotorNaveNodriza* Motor;

};
