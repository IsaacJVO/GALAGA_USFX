
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Reloj.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AReloj : public AActor
{
	GENERATED_BODY()

public:

	float Hora = 0;
	
public:	
	AReloj();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reloj, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaReloj;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	float GetTiempo() { return Hora; }

};
