
#include "Director.h"

ADirector::ADirector()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADirector::BeginPlay()
{
	Super::BeginPlay();
}

void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::ConstruirNaves()
{
	if (ShipBuilder)
	{
		ShipBuilder->GetHijasNodriza();
		ShipBuilder->GetEscudoNodriza();
        ShipBuilder->GetMotorNaveNodriza();

	}

}

void ADirector::SetBuilder(AActor* Builder)
{
	ShipBuilder = Cast<IBuilderNaveNodriza>(Builder);
}

ANODRIZA* ADirector::GetNaveNodriza()
{
    if (ShipBuilder)
    {
        return ShipBuilder->GetNaveNodriza();
    }
    else
    {
        return nullptr;
    }
}




