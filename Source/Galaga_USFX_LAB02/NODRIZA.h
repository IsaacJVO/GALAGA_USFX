
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorNave.h"
#include "NODRIZA.generated.h"

UCLASS()

class GALAGA_USFX_LAB02_API ANODRIZA : public AActor, public IConstructorNave
{
	GENERATED_BODY()
	
public:	
	ANODRIZA();


private:
	class AEscudoNodriza* Escudo;
	class AHijasNodriza* Hijas;
	class AMotorNaveNodriza* Motor;


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	virtual void SetHijasNodrizas( AHijasNodriza* hijas) override;
	virtual void SetEscudoNodriza( AEscudoNodriza* escudo) override;
	virtual void SetMotorNaveNodriza( AMotorNaveNodriza* motor) override;

};
