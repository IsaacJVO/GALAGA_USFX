
#include "TorreAtaque.h"
#include "FacadeNaves.h"
#include "Components/StaticMeshComponent.h"
#include "NaveEnemiga.h"
#include "Engine/World.h"
#include "Sound/SoundBase.h"
#include "GameFramework/ProjectileMovementComponent.h"

ATorreAtaque::ATorreAtaque()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaP(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(mallaP.Object);
	mallaProyectil->SetupAttachment(RootComponent);
	RootComponent = mallaProyectil;
	mallaProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	mallaProyectil->OnComponentHit.AddDynamic(this, &ATorreAtaque::OnHit);
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = mallaProyectil;
	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 2.5f;

	InitialLifeSpan = 3.0f;

}

void ATorreAtaque::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATorreAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATorreAtaque::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void ATorreAtaque::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 200.0f;
	SetActorLocation(NewLocation);
}

void ATorreAtaque::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->IsA(ANaveEnemiga::StaticClass()))
	{
		ANaveEnemiga* nave = Cast<ANaveEnemiga>(OtherActor);
		if (nave)
		{
			nave->Destroy();
		}
	}
	Destroy();
}