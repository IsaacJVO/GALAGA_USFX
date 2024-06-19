// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigaIterator5.h"
#include "Containers/Array.h"
#include "Engine/World.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "TorreAtaque.h"
#include "Engine/Engine.h"

// Sets default values
AEnemigaIterator5::AEnemigaIterator5()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaIte(TEXT("StaticMesh'/Game/TwinStick/FINAL/ITERATOR/63512b160632_AVES_ROBOTS_DE_CALI.63512b160632_AVES_ROBOTS_DE_CALI'"));
	MallaI = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaReloj"));
	RootComponent = MallaI;
	MallaI->SetStaticMesh(MallaIte.Object);
	MallaI->SetWorldScale3D(FVector(2.5f, 2.5f, 3.0f));

	MallaI->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	MallaI->OnComponentHit.AddDynamic(this, &AEnemigaIterator5::OnHit);

	MovementDirection = FVector(0.0f, 1.0f, 0.0f);
	TargetPoint = FVector(-550.0f, 3000.0f, 200.0f);

	Speed = 300.0f;
	FireRate = 1.0f;

	disparoDuroActivo = false;

}

void AEnemigaIterator5::DispararDuro()
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
void AEnemigaIterator5::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AEnemigaIterator5::DispararDuro, FireRate, true);
}

// Called every frame
void AEnemigaIterator5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation() + (MovementDirection * Speed * DeltaTime);
	SetActorLocation(NewLocation);
	if (NewLocation.X <= TargetPoint.X && NewLocation.Y >= TargetPoint.Y && NewLocation.Z == TargetPoint.Z)
	{
		Destroy();
	}

}



void AEnemigaIterator5::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{
		Pawn->VELOCIDAD();

		FString Message = FString::Printf(TEXT("MEJORA AUMENTADA"));
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, Message);

		Destroy();
	}
}