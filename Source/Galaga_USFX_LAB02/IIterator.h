
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IIterator.generated.h"

UINTERFACE(MinimalAPI)
class UIIterator : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IIIterator
{
	GENERATED_BODY()

public:
	virtual class AActor* GetCurrentNave() const = 0;
	virtual void Next() = 0;
	virtual bool IsDone() const = 0;
};
