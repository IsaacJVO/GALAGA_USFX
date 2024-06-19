// **********  ES LA NAVE ESTRATEGICA  **********

// TIENE LAS SIGUIENTES ESTRATEGIAS:
// 1. OBSERVADORA
// 2. AYUDANTE
// 3. HUIDIZA

#include "NaveEstrategica.h"
#include "ProyectilNodriza.h"
#include "IEstrategias.h"

ANaveEstrategica::ANaveEstrategica()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallapapa(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_16.TwinStickUFO_16'"));
	MallaPapa = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaAliada"));
	RootComponent = MallaPapa;
	MallaPapa->SetStaticMesh(mallapapa.Object);
	MallaPapa->SetWorldScale3D(FVector(2.5f, 2.5f, 2.5f));

	FireRate = 0.5f;
	MaxProjectiles = 30;
	ProjectileCount = MaxProjectiles;
}

void ANaveEstrategica::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ANaveEstrategica::FireProjectile, FireRate, true);

}

void ANaveEstrategica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	EmplearEstrategia(DeltaTime);
}

void ANaveEstrategica::FireProjectile()
{
	if (ProjectileCount > 0)
	{
		ProjectileCount--;

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
}

void ANaveEstrategica::AlterarEstrategia(AActor* _EstrategiaElegida)
{
	Estrategia = Cast<IIEstrategias>(_EstrategiaElegida);
}

void ANaveEstrategica::EmplearEstrategia(float DeltaTime)
{
	if (Estrategia)
	{
		Estrategia->Mover(this, DeltaTime);
	}
}