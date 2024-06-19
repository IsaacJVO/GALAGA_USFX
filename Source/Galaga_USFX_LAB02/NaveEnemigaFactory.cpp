
#include "NaveEnemigaFactory.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaRalentizadora.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaUwU.h"
#include "NaveEnemigaHacker.h"

ANaveEnemigaFactory::ANaveEnemigaFactory()
{
	PrimaryActorTick.bCanEverTick = true;
}

ANaveEnemiga* ANaveEnemigaFactory::FabricaNaves(FString FabricarNaves, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

	if (FabricarNaves == "Caza") {
		ANaveEnemigaCaza* NaveFabricada = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation); 
		return NaveFabricada;

	}
	if (FabricarNaves == "Transporte") {
		ANaveEnemigaTransporte* NaveFabricada = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
		return NaveFabricada;
	}
	if (FabricarNaves == "Ralentizadora") {
		ANaveEnemigaRalentizadora* NaveFabricada = World->SpawnActor<ANaveEnemigaRalentizadora>(SpawnLocation, SpawnRotation); 
		return NaveFabricada;
	}
	if (FabricarNaves == "Espia") {
		ANaveEnemigaEspia* NaveFabricada = World->SpawnActor<ANaveEnemigaEspia>(SpawnLocation, SpawnRotation);
		return NaveFabricada;
	}
	if (FabricarNaves == "UwU") {
		ANaveEnemigaUwU* NaveFabricada = World->SpawnActor<ANaveEnemigaUwU>(SpawnLocation, SpawnRotation); 
		return NaveFabricada;
	}
	if (FabricarNaves == "Hacker") {
		ANaveEnemigaHacker* NaveFabricada = World->SpawnActor<ANaveEnemigaHacker>(SpawnLocation, SpawnRotation);
		return NaveFabricada;
	}

	return nullptr;
}

void ANaveEnemigaFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemigaFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

