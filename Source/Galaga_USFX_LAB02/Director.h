
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "Director.generated.h"


UCLASS()
class GALAGA_USFX_LAB02_API ADirector : public AActor
{
	GENERATED_BODY()
	
private:
	IBuilderNaveNodriza* ShipBuilder;

public:	
	ADirector();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void ConstruirNaves();
	void SetBuilder(AActor* Builder);
	class ANODRIZA* GetNaveNodriza(); 
};
