
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IIterator.h"
#include "NaveEnemigaIterator.generated.h"

class ANaveEnemigaCollection;

UCLASS()
class GALAGA_USFX_LAB02_API UNaveEnemigaIterator : public UObject, public IIIterator
{
	GENERATED_BODY()

private:
    ANaveEnemigaCollection* Collection;
    int32 CurrentIndex;

public:
    void SetCollection(ANaveEnemigaCollection* InCollection);

    virtual AActor* GetCurrentNave() const override;
    virtual void Next() override;
    virtual bool IsDone() const override;
};
