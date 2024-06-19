
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AComponenteMovimiento.h"
#include "HijasNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AHijasNodriza : public AActor
{
	GENERATED_BODY()
	
private:
	UAComponenteMovimiento* MovimientoNavesComponent;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))  
	UStaticMeshComponent* MeshComp;
	AHijasNodriza();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	void FireProjectile();
	float FireRate;
	FTimerHandle FireTimerHandle;

public:
	void ImpactoProyectilHijas();

private:
	int32 ContadorImpactos;

};
