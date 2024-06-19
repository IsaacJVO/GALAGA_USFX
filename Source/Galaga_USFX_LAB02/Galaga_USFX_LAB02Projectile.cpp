
#include "Galaga_USFX_LAB02Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveEnemiga.h"
#include "HijasNodriza.h"
#include "EscudoNodriza.h"
#include "MotorNaveNodriza.h"
#include "NaveEstado.h"
#include "FacadeNaves.h"


AGalaga_USFX_LAB02Projectile::AGalaga_USFX_LAB02Projectile()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFX_LAB02Projectile::OnHit);
	RootComponent = ProjectileMesh;

	SetActorScale3D(FVector(2.5f, 0.3f, 0.3f));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 5000.f;
	ProjectileMovement->MaxSpeed = 5000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f;

	InitialLifeSpan = 3.0f;
}

void AGalaga_USFX_LAB02Projectile::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 200.0f;
	SetActorLocation(NewLocation);
}


void AGalaga_USFX_LAB02Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	ANaveEnemiga* NaveEnemiga = Cast<ANaveEnemiga>(OtherActor);
	if (NaveEnemiga)
	{
		NaveEnemiga->Destroy();
	}
	ANaveEstado* NaveEstado = Cast<ANaveEstado>(OtherActor);
	if (NaveEstado)
	{
		NaveEstado->RecibirDanio();
	}

	AEscudoNodriza* EscudoNodriza = Cast<AEscudoNodriza>(OtherActor);
	if (EscudoNodriza)
	{
		EscudoNodriza->ImpactoProyectil();
	}

	AHijasNodriza* HijasNodriza = Cast<AHijasNodriza>(OtherActor);
	if (HijasNodriza)
	{
		HijasNodriza->ImpactoProyectilHijas();
	}

	AMotorNaveNodriza* MotorNaveNodriza = Cast<AMotorNaveNodriza>(OtherActor);
	if (MotorNaveNodriza)
	{
		MotorNaveNodriza->ImpactoProyectilMotor();
	}
	
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
}



