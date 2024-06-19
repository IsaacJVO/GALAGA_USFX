// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilPrueba.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "NaveEstado.h"

void AProyectilPrueba::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AProyectilPrueba::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 200.0f;
	SetActorLocation(NewLocation);
}

void AProyectilPrueba::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{

		Pawn->ReducirVida();

		FString Message = FString::Printf(TEXT("Vidas restantes: %d "), Pawn->GetVidasRestantes());
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, Message);
		Pawn->recibirImpacto();
	}


	ANaveEstado* Nav = Cast<ANaveEstado>(OtherActor);
	if (Nav)
	{
		Nav->RecibirDanio();
	}

	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

AProyectilPrueba::AProyectilPrueba()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaP(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(mallaP.Object); 
	mallaProyectil->SetupAttachment(RootComponent);
	RootComponent = mallaProyectil; 
	mallaProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	mallaProyectil->OnComponentHit.AddDynamic(this, &AProyectilPrueba::OnHit);

	SetActorScale3D(FVector(0.5f, 0.5f, 0.5f));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = mallaProyectil;
	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f; 

	Damage = 10.0f;
	InitialLifeSpan = 3.0f;


}

void AProyectilPrueba::BeginPlay()
{
	Super::BeginPlay();
}

void AProyectilPrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

