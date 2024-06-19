
#include "EstadoNokia.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "NaveEstado.h"
#include "UObject/ConstructorHelpers.h"

AEstadoNokia::AEstadoNokia()
{
	PrimaryActorTick.bCanEverTick = true;
	FireRate = 0.2f;

	targetLocations.Add(FVector(-1570, 0, 200));
	targetLocations.Add(FVector(-1570, 800, 200));
	targetLocations.Add(FVector(-1570, -800, 200));
	targetLocations.Add(FVector(-1570, 0, 200));
	targetLocations.Add(FVector(-1570, 0, 2500));
	currentTargetIndex = 0;

	MaxProjectiles = 50;
	ProjectileCount = MaxProjectiles;

}

void AEstadoNokia::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AEstadoNokia::Disparar, FireRate, true);

}

void AEstadoNokia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoNokia::Mover(float DeltaTime)
{
	FVector newLocation = NaveAliada1->GetActorLocation();
	FVector targetLocation = targetLocations[currentTargetIndex];
	FVector direction = (targetLocation - newLocation).GetSafeNormal();
	float distance = FVector::Distance(targetLocation, newLocation);
	newLocation += direction * Speed * DeltaTime;

	NaveAliada1->SetActorLocation(newLocation);
	if (distance < 20.0f)
	{
		currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
	}
}

void AEstadoNokia::Disparar()
{
	if (NaveAliada1 && ProjectileCount > 0)
	{
		AGalaga_USFX_LAB02Projectile* Projectile = GetWorld()->SpawnActor<AGalaga_USFX_LAB02Projectile>(AGalaga_USFX_LAB02Projectile::StaticClass(), NaveAliada1->GetActorLocation(), NaveAliada1->GetActorRotation());
		if (Projectile)
		{
			FVector ForwardDirection = NaveAliada1->GetActorForwardVector();
			FRotator SpawnRotation = ForwardDirection.Rotation();
			FVector SpawnLocation = NaveAliada1->GetActorLocation();
			Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
			Projectile->Fire();

			ProjectileCount--;
			if (ProjectileCount <= 0)
			{
				GetWorldTimerManager().ClearTimer(FireTimerHandle);
			}
		}
	}
}

void AEstadoNokia::CambiarMalla()
{
}

void AEstadoNokia::SetAliada(ANaveEstado* _NaveAliada)
{
	NaveAliada1 = Cast <ANaveEstado>(_NaveAliada);
	NaveAliada1->MostrarEstado(NaveAliada1->GetEstadoNokia());
}
