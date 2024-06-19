
#include "Reloj.h"

AReloj::AReloj()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallareloj(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));
	MallaReloj = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaReloj"));
	RootComponent = MallaReloj;
	MallaReloj->SetStaticMesh(mallareloj.Object);
	MallaReloj->SetWorldScale3D(FVector(2.0f, 2.0f, 1.0f));

	Hora = 0;

}

void AReloj::BeginPlay()
{
	Super::BeginPlay();
}

void AReloj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Hora += GetWorld()->GetDeltaSeconds();

	if (Hora >= 10.0f)
	{
		Hora = 0.0f;
	}
}

