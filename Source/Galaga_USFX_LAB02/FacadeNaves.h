
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeNaves.generated.h"


class ANaveEnemiga;
UCLASS()
class GALAGA_USFX_LAB02_API AFacadeNaves : public AActor
{

	GENERATED_BODY()
	
public:	
	AFacadeNaves();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	void SPAWN_NAVES_ENEMIGAS();

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;

private:

	UPROPERTY(VisibleAnywhere, Category = "NaveEscudo")
	class ABuilderNaveEscudo* NaveEscudo;
	UPROPERTY(VisibleAnywhere, Category = "Director")
	class ADirector* Director;
	
public:
	void SpawnPowerUpVelocidad();
	FTimerHandle SpawnTimerHandle; 
};
