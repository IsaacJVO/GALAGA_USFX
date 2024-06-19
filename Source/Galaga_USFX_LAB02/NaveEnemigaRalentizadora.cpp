
#include "NaveEnemigaRalentizadora.h"
#include "ProyectilEnemiga.h"

ANaveEnemigaRalentizadora::ANaveEnemigaRalentizadora()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/FINAL/NaveRALENITIZADORA/d24cd4cad601_Nave_espacial_futur.d24cd4cad601_Nave_espacial_futur'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetWorldScale3D(FVector(1.7f, 1.7f, 1.7f));

	PrimaryActorTick.bCanEverTick = true;


	targetLocations.Add(FVector(400, -1600, 200));    
	targetLocations.Add(FVector(-1300, -350, 200)); 
	targetLocations.Add(FVector(-1300, 350, 200));  
	targetLocations.Add(FVector(400, 1600, 200));
	currentTargetIndex = 0;

	FireRate = 2.0f;
}

void ANaveEnemigaRalentizadora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaRalentizadora::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANaveEnemigaRalentizadora::Disparar, FireRate, true);
}

void ANaveEnemigaRalentizadora::Mover(float DeltaTime)
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

void ANaveEnemigaRalentizadora::Disparar()
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
