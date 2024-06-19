
#pragma once

#include "IEstrategias.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaEspiadora.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEstrategiaEspiadora : public AActor, public IIEstrategias
{
	GENERATED_BODY()
	
public:	
	AEstrategiaEspiadora();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	static bool bMensajeMostrado;

public:
	void Mover(class ANaveEstrategica* PADRIZA, float DeltaTime) override;

	float Radio = 2000.0f;
	float Angulo = 0.0f;
	float Speed = 10.0f;
};
