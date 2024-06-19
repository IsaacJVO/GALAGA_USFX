
#include "NaveEnemigaHacker.h"
#include "ProyectilEnemiga.h"

ANaveEnemigaHacker::ANaveEnemigaHacker()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/HACKER/b51a59df0eaf_a_humanlike_cowled_.b51a59df0eaf_a_humanlike_cowled_'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.7f, 1.7f, 1.7f));
	PrimaryActorTick.bCanEverTick = true;


	targetLocations.Add(FVector(1000, -1600, 200)); 
	targetLocations.Add(FVector(-880, 1600, 200)); 
	targetLocations.Add(FVector(-800, -1600, 200));
	targetLocations.Add(FVector(1000, 1600, 200)); 
	currentTargetIndex = 0;

	FireRate = 0.8f;
}

void ANaveEnemigaHacker::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANaveEnemigaHacker::Disparar, FireRate, true);
}


void ANaveEnemigaHacker::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaHacker::Mover(float DeltaTime)
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

void ANaveEnemigaHacker::Disparar()
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

