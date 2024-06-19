#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/TRANSP/ce6605e5f60a_CONTENEDORES_FUTURI.ce6605e5f60a_CONTENEDORES_FUTURI'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.2f, 1.2f, 1.2f));

	PrimaryActorTick.bCanEverTick = true;

	targetLocations.Add(FVector(700, -1600, 200)); 
	targetLocations.Add(FVector(700, 1600, 200)); 
	currentTargetIndex = 0;


}
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	FVector newLocation = GetActorLocation();
	FVector targetLocation = targetLocations[currentTargetIndex];
	FVector direction = (targetLocation - newLocation).GetSafeNormal();
	float distance = FVector::Distance(targetLocation, newLocation);
	newLocation += direction * speed * DeltaTime;

	SetActorLocation(newLocation);

	if (distance < 20.0f)
	{
		currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
	}
}

void ANaveEnemigaTransporte::Disparar()
{
}
