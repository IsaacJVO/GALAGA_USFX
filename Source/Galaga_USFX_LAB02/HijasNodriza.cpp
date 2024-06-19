
#include "HijasNodriza.h"
#include "ProyectilNodriza.h"

AHijasNodriza::AHijasNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallav(TEXT("StaticMesh'/Game/TwinStick/FINAL/NaveHijas/53e8b15be6db_Nave_espacial_futur.53e8b15be6db_Nave_espacial_futur'"));
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetStaticMesh(mallav.Object);
	RootComponent = MeshComp;
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));
	PrimaryActorTick.bCanEverTick = true;
	MovimientoNavesComponent = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("MovimientoNavesComponente"));

	FireRate = 1.0f;
	ContadorImpactos = 0;
}

void AHijasNodriza::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AHijasNodriza::FireProjectile, FireRate, true);
}

void AHijasNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHijasNodriza::FireProjectile()
{
	AProyectilNodriza* Projectile = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{
		FVector ForwardDirection = GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Projectile->Fire();
	}
}

void AHijasNodriza::ImpactoProyectilHijas()
{
	ContadorImpactos++;
	if (ContadorImpactos >= 3)
	{
		Destroy();
		FString Message = FString::Printf(TEXT("Hija Nodriza Eliminada"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
	}
}





