
#include "MotorNaveNodriza.h"
#include "ProyectilPrueba.h"

AMotorNaveNodriza::AMotorNaveNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallav(TEXT("StaticMesh'/Game/TwinStick/FINAL/NODRIZA/e65ba5d9a12e_Nave_espacial__3d_a.e65ba5d9a12e_Nave_espacial__3d_a'"));
	MeshComponente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponente->SetupAttachment(RootComponent);
	MeshComponente->SetWorldScale3D(FVector(3.0f, 3.0f, 3.0f));
	MeshComponente->SetStaticMesh(mallav.Object);

	RootComponent = MeshComponente;
	PrimaryActorTick.bCanEverTick = true;

	MovimientoNavesComponent = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("MovimientoNavesComponente"));

	FireRate = 0.2f;
	ContadorImpactos = 0;
}

void AMotorNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AMotorNaveNodriza::FireProjectile, FireRate, true);
}

void AMotorNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMotorNaveNodriza::FireProjectile()
{
	AProyectilPrueba* Projectile = GetWorld()->SpawnActor<AProyectilPrueba>(AProyectilPrueba::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{
		FVector ForwardDirection = GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Projectile->Fire();
	}
}

void AMotorNaveNodriza::ImpactoProyectilMotor()
{
	ContadorImpactos++;
	if (ContadorImpactos >= 10)
	{
		Destroy();
		FString Message = FString::Printf(TEXT("Nodriza Eliminada"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, Message, true, FVector2D(5.0f, 5.0f));
	}
}

