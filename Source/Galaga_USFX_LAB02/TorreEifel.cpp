
#include "TorreEifel.h"
#include "Components/StaticMeshComponent.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "ProyectilEnemiga.h"
#include "Publicador.h"


ATorreEifel::ATorreEifel()
	: disparoDuroActivo(false)
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallatorre(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_10.TwinStickUFO_10'"));
	MallaTorre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrope"));
	MallaTorre->SetupAttachment(RootComponent);
	MallaTorre->SetStaticMesh(mallatorre.Object);
	MallaTorre->SetWorldScale3D(FVector(3.0f, 3.0f, 3.0f));
	RootComponent = MallaTorre;

	disparoDuroActivo = false;

}

void ATorreEifel::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ATorreEifel::DispararDuro, FireRate1, true);
}

void ATorreEifel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ATorreEifel::FireProjectile()
{
	if (!disparoDuroActivo) {
		AProyectilEnemiga* Projectile = GetWorld()->SpawnActor<AProyectilEnemiga>(AProyectilEnemiga::StaticClass(), GetActorLocation(), GetActorRotation());
		if (Projectile) {

			FVector ForwardDirection = GetActorForwardVector();
			FRotator SpawnRotation = ForwardDirection.Rotation();
			FVector SpawnLocation = GetActorLocation();
			Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
			Projectile->Fire();
		}
	}
}


void ATorreEifel::SetPublicador(APublicador* _Publicador)
{
	Publicador = _Publicador;
	Publicador->AddSubscriptor(this);
}

void ATorreEifel::Actualizar()
{
	DispararDuro();
}

void ATorreEifel::EliminaSubs()
{
	Publicador->RemoveSubscriptor(this);
}

void ATorreEifel::DispararDuro()
{
	disparoDuroActivo = true;
	AGalaga_USFX_LAB02Projectile* Projectile1 = GetWorld()->SpawnActor<AGalaga_USFX_LAB02Projectile>(AGalaga_USFX_LAB02Projectile::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile1) {
		FVector ForwardDirection = GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = GetActorLocation();
		Projectile1->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Projectile1->Fire();
	}
}

