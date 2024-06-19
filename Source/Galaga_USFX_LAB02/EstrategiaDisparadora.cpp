
#include "EstrategiaDisparadora.h"
#include "IEstrategias.h"
#include "Engine/Engine.h" 
#include "NaveEstrategica.h"

bool AEstrategiaDisparadora::bMensajeMostrado = false;

AEstrategiaDisparadora::AEstrategiaDisparadora()
{
	PrimaryActorTick.bCanEverTick = true;


	targetLocations.Add(FVector(1200, 900, 400));
	targetLocations.Add(FVector(1200, 950, 300));
	targetLocations.Add(FVector(1200, 900, 600)); 
	targetLocations.Add(FVector(1200, 850, 500));  
	targetLocations.Add(FVector(1200, 900, 850)); 
	targetLocations.Add(FVector(-10000, 900, 1000)); 

	currentTargetIndex = 0;
}

void AEstrategiaDisparadora::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaDisparadora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaDisparadora::Mover(class ANaveEstrategica* PADRIZA, float DeltaTime)
{
	if (PADRIZA) {
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
		if (!AEstrategiaDisparadora::bMensajeMostrado && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ESTRATEGICA ESCPANDO")));
			AEstrategiaDisparadora::bMensajeMostrado = true;
		}

	}
}





