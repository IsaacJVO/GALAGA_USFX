
#pragma once

#include "IEstrategias.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaAyudante.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEstrategiaAyudante : public AActor, public IIEstrategias
{
	GENERATED_BODY()
	
public:	
	AEstrategiaAyudante();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	static bool bMensajeMostrado;

	TArray<FVector> targetLocations;
	int32 currentTargetIndex;
	float speed = 1000.0f;

public:
	void Mover(class ANaveEstrategica* PADRIZA, float DeltaTime) override;

};
