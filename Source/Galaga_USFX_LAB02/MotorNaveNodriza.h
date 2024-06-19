
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AComponenteMovimiento.h"
#include "MotorNaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AMotorNaveNodriza : public AActor
{
	GENERATED_BODY()


protected:
	UAComponenteMovimiento* MovimientoNavesComponent;
	UStaticMeshComponent* MeshComponente;

public:
	AMotorNaveNodriza();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	void FireProjectile();
	float FireRate;
	FTimerHandle FireTimerHandle;

public:
	void ImpactoProyectilMotor();

protected:
		int32 ContadorImpactos;
};
