
#include "PowerUp.h"

APowerUp::APowerUp()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule_2.Shape_NarrowCapsule_2'"));
	mallaPowerUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mallaPowerUp"));
	mallaPowerUp->SetupAttachment(RootComponent);
	mallaPowerUp->SetStaticMesh(mallaC.Object);
	RootComponent = mallaPowerUp;
	InitialLifeSpan = 5.0f;

	PrimaryActorTick.bCanEverTick = true;

}

void APowerUp::BeginPlay()
{
	Super::BeginPlay();
}

void APowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

