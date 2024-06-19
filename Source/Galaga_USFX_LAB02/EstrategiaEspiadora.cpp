
#include "EstrategiaEspiadora.h"
#include "IEstrategias.h"
#include "Engine/Engine.h"
#include "NaveEstrategica.h"


bool AEstrategiaEspiadora::bMensajeMostrado = false;
AEstrategiaEspiadora::AEstrategiaEspiadora()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaEspiadora::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstrategiaEspiadora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaEspiadora::Mover(class ANaveEstrategica* PADRIZA, float DeltaTime)
{
	if (PADRIZA)
	{
		Angulo += Speed * DeltaTime;

		float NuevaY = PADRIZA->GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;
		float NuevaX = PADRIZA->GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;

		FVector NewLocation = FVector(NuevaX, NuevaY, PADRIZA->GetActorLocation().Z);
		PADRIZA->SetActorLocation(NewLocation);

		if (!AEstrategiaEspiadora::bMensajeMostrado && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ESTRATEGICA OBSERVANDO")));
			AEstrategiaEspiadora::bMensajeMostrado = true;
		}
	}
}

