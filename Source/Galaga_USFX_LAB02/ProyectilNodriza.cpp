
#include "ProyectilNodriza.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "NaveEstado.h"

AProyectilNodriza::AProyectilNodriza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaP(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(mallaP.Object);
	mallaProyectil->SetupAttachment(RootComponent);
	RootComponent = mallaProyectil; 
	mallaProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	mallaProyectil->OnComponentHit.AddDynamic(this, &AProyectilNodriza::OnHit);

	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 90.0f);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = mallaProyectil;
	ProjectileMovement->InitialSpeed = 1500.0f;
	ProjectileMovement->MaxSpeed = 1500.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f; 

	Damage = 10.0f;
	InitialLifeSpan = 3.0f;



}

void AProyectilNodriza::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AProyectilNodriza::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void AProyectilNodriza::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
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

void AProyectilNodriza::BeginPlay()
{	
	Super::BeginPlay();
}

void AProyectilNodriza::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

