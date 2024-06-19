
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaFactory.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaFactory : public AActor
{
	GENERATED_BODY()

public:	
	ANaveEnemigaFactory();
	static ANaveEnemiga* FabricaNaves(FString FabricarNaves, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
