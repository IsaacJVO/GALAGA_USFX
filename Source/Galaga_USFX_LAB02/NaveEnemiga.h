#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"



UCLASS(Abstract)
class GALAGA_USFX_LAB02_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

public:
	ANaveEnemiga();
	void TemplateMethod(float DeltaTime);

protected:
	virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	virtual void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	void CommonMovementLogic(float DeltaTime);
	void CommonFireLogic();
};