
#include "PORTAL1.h"
#include "Components/BoxComponent.h"
#include "Galaga_USFX_LAB02Pawn.h"

APORTAL1::APORTAL1()
{
	PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaportal(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
    MALLAPORT = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MALLAPORT"));
    RootComponent = MALLAPORT;
    MALLAPORT->SetStaticMesh(mallaportal.Object);
    MALLAPORT->SetWorldScale3D(FVector(0.25f, 5.0f, 5.25f));

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    CollisionBox->SetupAttachment(MALLAPORT); // Attach to MALLAPORT
    CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
    CollisionBox->SetCollisionProfileName(TEXT("Trigger"));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APORTAL1::OnOverlapBegin);

    TeleportLocation = FVector(-1000.f, 0.0f, 35410.f);
}

void APORTAL1::BeginPlay()
{
	Super::BeginPlay();
}

void APORTAL1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APORTAL1::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    AGalaga_USFX_LAB02Pawn* PlayerPawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
    if (PlayerPawn)
    {
        PlayerPawn->SetActorLocation(TeleportLocation);
    }
}
