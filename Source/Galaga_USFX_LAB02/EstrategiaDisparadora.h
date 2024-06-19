
#pragma once

#include "IEstrategias.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaDisparadora.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEstrategiaDisparadora : public AActor, public IIEstrategias
{
	GENERATED_BODY()

public:
	AEstrategiaDisparadora();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	static bool bMensajeMostrado;

public:
	void Mover(class ANaveEstrategica* PADRIZA, float DeltaTime) override;
	class ANaveEstrategica* NaveEstrategica1;

private:
	TArray<FVector> targetLocations;
	int32 currentTargetIndex;
	float speed = 1000.0f;
};
