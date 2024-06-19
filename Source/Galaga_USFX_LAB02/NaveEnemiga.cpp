#include "NaveEnemiga.h"
#include "Galaga_USFX_LAB02Pawn.h"

ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemiga::TemplateMethod(float DeltaTime)
{
	CommonMovementLogic(DeltaTime);
	Mover(DeltaTime);
	CommonFireLogic();
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TemplateMethod(DeltaTime);
}

void ANaveEnemiga::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (AGalaga_USFX_LAB02Pawn* PlayerPawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor))
	{
		PlayerPawn->choque();
	}
}

void ANaveEnemiga::CommonMovementLogic(float DeltaTime)
{
}

void ANaveEnemiga::CommonFireLogic()
{
}