#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "INaveState.h"
#include "EstadoNormal.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEstadoNormal : public AActor, public IINaveState
{
	GENERATED_BODY()
	
public:	
	AEstadoNormal();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	float MovimientoNaves = 4;
	float limiteInferiorY = 1600.0f;
	int DireccionMovimientoHorizontal = 1;
	float FireRate;
	FTimerHandle FireTimerHandle;
	int32 ProjectileCount;
	int32 MaxProjectiles;

public:
	UPROPERTY()
	UStaticMesh* NuevaMalla;

	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void CambiarMalla() override;
	virtual void SetAliada(class ANaveEstado* _NaveAliada) override;

private:
	class ANaveEstado* NaveAliada;
};

