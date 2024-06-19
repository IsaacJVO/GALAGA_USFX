#pragma once

#include "NaveEnemiga.h"
#include "CoreMinimal.h"
#include "NaveEnemigaCaza.generated.h"


UCLASS()

class GALAGA_USFX_LAB02_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaCaza();

	FString tipoCaza = "Caza";

public:
	virtual void BeginPlay() override;

	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;

private:
	TArray<FVector> targetLocations;
	int32 currentTargetIndex;
	float speed = 1000.0f;
	float FireRate;
	FTimerHandle FireTimerHandle;

};
