#include "NaveEnemigaEspia.h"
#include "ProyectilEnemiga.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/ESPIA/620e18cb7c4a_NAVE_ESPACIAL_BONIT.620e18cb7c4a_NAVE_ESPACIAL_BONIT'"));
    mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.7f, 1.7f, 1.7f));
    PrimaryActorTick.bCanEverTick = true;


	targetLocations.Add(FVector(100, 1000, 200));  
	targetLocations.Add(FVector(1300, 1000, 200));  
	targetLocations.Add(FVector(1300, -1000, 200)); 
	targetLocations.Add(FVector(100, -1000, 200));  
	currentTargetIndex = 0;

	FireRate = 1.0f;
}


void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANaveEnemigaEspia::Disparar, FireRate, true);

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime); 
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	FVector newLocation = GetActorLocation();
	FVector targetLocation = targetLocations[currentTargetIndex];
	FVector direction = (targetLocation - newLocation).GetSafeNormal();
	float distance = FVector::Distance(targetLocation, newLocation);
	newLocation += direction * speed * DeltaTime;

	SetActorLocation(newLocation);
	if (distance < 20.0f)
	{
		currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
	}
}

void ANaveEnemigaEspia::Disparar()
{
	// Implementación específica de disparo para NaveEnemigaCaza
	AProyectilEnemiga* Projectile = GetWorld()->SpawnActor<AProyectilEnemiga>(AProyectilEnemiga::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{
		FVector ForwardDirection = GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Projectile->Fire();
	}
}
