
#include "EscudoNodriza.h"

AEscudoNodriza::AEscudoNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallav(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	MeshEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshEscudo->SetupAttachment(RootComponent);
	MeshEscudo->SetStaticMesh(mallav.Object);
	RootComponent = MeshEscudo;
	SetActorScale3D(FVector(2.5f, 2.5f, 2.5f));
	PrimaryActorTick.bCanEverTick = true;

	MovimientoNavesComponent = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("MovimientoNavesComponente"));

	ContadorImpactos = 0;

}

// Called when the game starts or when spawned
void AEscudoNodriza::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEscudoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscudoNodriza::ImpactoProyectil()
{
		ContadorImpactos++;

		if (ContadorImpactos >= 5)
		{
			Destroy();
			FString Message = FString::Printf(TEXT("Escudo Nodriza Eliminado"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
		}
}

