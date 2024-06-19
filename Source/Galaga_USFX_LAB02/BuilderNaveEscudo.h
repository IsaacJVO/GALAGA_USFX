#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "BuilderNaveEscudo.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ABuilderNaveEscudo : public AActor, public IBuilderNaveNodriza
{
	GENERATED_BODY()
	
public:	
	ABuilderNaveEscudo();

protected:
	virtual void BeginPlay() override;
	UPROPERTY (VisibleAnywhere, Category="NaveNodriza")
	class ANODRIZA* NaveNodriza;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	virtual void GetHijasNodriza() override;
	virtual void GetEscudoNodriza() override;
	virtual void GetMotorNaveNodriza() override;
	virtual class ANODRIZA* GetNaveNodriza() override;
};
