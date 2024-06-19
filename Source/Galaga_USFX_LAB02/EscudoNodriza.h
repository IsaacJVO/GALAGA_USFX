
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AComponenteMovimiento.h"
#include "EscudoNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEscudoNodriza : public AActor
{
	GENERATED_BODY()
	
private:
	UAComponenteMovimiento* MovimientoNavesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshEscudo;
public:	
	AEscudoNodriza();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	void ImpactoProyectil();

private:
	int32 ContadorImpactos;

};
