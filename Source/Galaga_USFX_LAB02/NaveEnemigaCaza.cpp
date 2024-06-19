#include "NaveEnemigaCaza.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "ProyectilEnemiga.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/CAZA/ef2bc0310eb0_nave_futurista_con_.ef2bc0310eb0_nave_futurista_con_'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.8f, 1.8f, 1.8f));

	PrimaryActorTick.bCanEverTick = true;

	targetLocations.Add(FVector(-300, 1600, 200)); 
	targetLocations.Add(FVector(-880, 1000, 200));
	targetLocations.Add(FVector(-510, 560, 200)); 
	targetLocations.Add(FVector(-880, 40, 200));
	targetLocations.Add(FVector(-510, -480, 200));
	targetLocations.Add(FVector(-880, -950, 200));
	targetLocations.Add(FVector(-300, -1600, 200));
	currentTargetIndex = 0;

	FireRate = 0.7f;

}
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANaveEnemigaCaza::Disparar, FireRate, true);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
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

void ANaveEnemigaCaza::Disparar()
{
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

