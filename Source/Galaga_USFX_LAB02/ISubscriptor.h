
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISubscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISubscriptor : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IISubscriptor
{
	GENERATED_BODY()

public:
	virtual void Actualizar() = 0;
};
