#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "INaveState.h"
#include "EstadoNokia.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEstadoNokia : public AActor, public IINaveState
{
	GENERATED_BODY()
	
public:	
	AEstadoNokia();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	TArray<FVector> targetLocations;
	int32 currentTargetIndex;
	float Speed = 1000.0f;

private:
	float FireRate;
	FTimerHandle FireTimerHandle;
	int32 ProjectileCount;
	int32 MaxProjectiles;

	class ANaveEstado* NaveAliada1;

public:
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void CambiarMalla() override;
	virtual void SetAliada(class ANaveEstado* _NaveAliada) override;

};
