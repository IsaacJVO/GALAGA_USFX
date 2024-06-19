#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEstrategica.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ANaveEstrategica : public AActor
{
	GENERATED_BODY()
	
public:	
	ANaveEstrategica();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reloj, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaPapa;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	class IIEstrategias* Estrategia;

protected:
	void FireProjectile();
	float FireRate;
	FTimerHandle FireTimerHandle;

private:
	int32 ProjectileCount;
	int32 MaxProjectiles;

public:
	void AlterarEstrategia(AActor* _EstrategiaElegida);
	void EmplearEstrategia(float DeltaTime);
};
