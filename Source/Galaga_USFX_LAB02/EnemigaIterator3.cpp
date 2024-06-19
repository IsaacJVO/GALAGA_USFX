// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigaIterator3.h"
#include "Containers/Array.h"
#include "Engine/World.h"
#include "TorreAtaque.h"
#include "Engine/Engine.h"

// Sets default values
AEnemigaIterator3::AEnemigaIterator3()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaIte(TEXT("StaticMesh'/Game/TwinStick/FINAL/ITERATOR/63512b160632_AVES_ROBOTS_DE_CALI.63512b160632_AVES_ROBOTS_DE_CALI'"));
	MallaI = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaReloj"));
	RootComponent = MallaI;
	MallaI->SetStaticMesh(MallaIte.Object);
	MallaI->SetWorldScale3D(FVector(2.5f, 2.5f, 3.0f));
	MovementDirection = FVector(0.0f, 1.0f, 0.0f);
	TargetPoint = FVector(-550.0f, 3000.0f, 200.0f);

	Speed = 300.0f;
	FireRate = 1.0f;

	disparoDuroActivo = false;
}

void AEnemigaIterator3::DispararDuro()
{
	disparoDuroActivo = true;
	ATorreAtaque* Projectile1 = GetWorld()->SpawnActor<ATorreAtaque>(ATorreAtaque::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile1) {
		FVector ForwardDirection = GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = GetActorLocation();
		Projectile1->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Projectile1->Fire();
	}
}

// Called when the game starts or when spawned
void AEnemigaIterator3::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AEnemigaIterator3::DispararDuro, FireRate, true);
}

// Called every frame
void AEnemigaIterator3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation() + (MovementDirection * Speed * DeltaTime);
	SetActorLocation(NewLocation);
	// Check if the enemy has reached the target point and destroy it if true
	if (NewLocation.X <= TargetPoint.X && NewLocation.Y >= TargetPoint.Y && NewLocation.Z == TargetPoint.Z)
	{
		Destroy();
	}
}

