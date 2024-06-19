
#pragma once

#include "CoreMinimal.h"
#include "PowerUp.h"
#include "PowerUpVelocidad.generated.h"


UCLASS()

class GALAGA_USFX_LAB02_API APowerUpVelocidad : public APowerUp
{
	GENERATED_BODY()

public:
	APowerUpVelocidad();
	FString tipoCapsula = "Energia";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "FacadeNaves")
	class AFacadeNaves* FacadeNaves;
};