
#include "EstrategiaAyudante.h"
#include "IEstrategias.h"
#include "Engine/Engine.h"
#include "NaveEstrategica.h"



bool AEstrategiaAyudante::bMensajeMostrado = false;
AEstrategiaAyudante::AEstrategiaAyudante()
{
	PrimaryActorTick.bCanEverTick = true;

	targetLocations.Add(FVector(1200, -1000, 200)); 
	targetLocations.Add(FVector(1200, -500, 400)); 
	targetLocations.Add(FVector(1200, 0, 200));  
	targetLocations.Add(FVector(1200, 500, 400));  
	targetLocations.Add(FVector(1200, 1000, 200));  
	targetLocations.Add(FVector(1200, 500, 400));   
	targetLocations.Add(FVector(1200, 0, 200));    
	targetLocations.Add(FVector(1200, -500, 400));  
	targetLocations.Add(FVector(1200, -1000, 200)); 

	currentTargetIndex = 0;

}

void AEstrategiaAyudante::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaAyudante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaAyudante::Mover(class ANaveEstrategica* PADRIZA, float DeltaTime)
{
	if (PADRIZA) 
	{
		FVector newLocation = PADRIZA->GetActorLocation();
		FVector targetLocation = targetLocations[currentTargetIndex];
		FVector direction = (targetLocation - newLocation).GetSafeNormal();
		float distance = FVector::Distance(targetLocation, newLocation);
		newLocation += direction * speed * DeltaTime;

		PADRIZA->SetActorLocation(newLocation);

		if (distance < 20.0f)
		{
			currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
		}

		if (!AEstrategiaAyudante::bMensajeMostrado && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ESTRATEGICA AYUDANDO")));
			AEstrategiaAyudante::bMensajeMostrado = true;
		}
	}
}



