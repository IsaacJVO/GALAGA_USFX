
#include "NaveEnemigaUwU.h"

ANaveEnemigaUwU::ANaveEnemigaUwU()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/NaveUwU/9d7bf11e18c1_Nave_espacial_Galag.9d7bf11e18c1_Nave_espacial_Galag'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.5f, 1.5f, 1.5f));

	PrimaryActorTick.bCanEverTick = true;

}
void ANaveEnemigaUwU::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaUwU::Mover(float DeltaTime)
{
	Angulo += Speed * DeltaTime;

	float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;
	float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;


	FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
	SetActorLocation(NewLocation);
}

void ANaveEnemigaUwU::Disparar()
{
}

