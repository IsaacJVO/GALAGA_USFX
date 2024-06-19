
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstrategias.generated.h"

UINTERFACE(MinimalAPI)
class UIEstrategias : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IIEstrategias
{
	GENERATED_BODY()

public:
	virtual void Mover(class ANaveEstrategica* PADRIZA, float DeltaTime) = 0;
};
