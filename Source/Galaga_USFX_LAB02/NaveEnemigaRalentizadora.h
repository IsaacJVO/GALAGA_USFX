
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaRalentizadora.generated.h"


UCLASS()

class GALAGA_USFX_LAB02_API ANaveEnemigaRalentizadora : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaRalentizadora();

	FString tipoRalentizadora = "Ralentizadora";
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	float FireRate;
	FTimerHandle FireTimerHandle;

private:
	TArray<FVector> targetLocations;
	int32 currentTargetIndex;
	float speed = 1000.0f;

public:
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;
};
