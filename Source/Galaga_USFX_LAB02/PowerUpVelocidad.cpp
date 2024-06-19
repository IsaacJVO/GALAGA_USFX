

#include "PowerUpVelocidad.h"
#include "Galaga_USFX_LAB02Pawn.h"

APowerUpVelocidad::APowerUpVelocidad()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/FINAL/radioactive-biohazard-unity-ue4/4525499cc954_Unas_capsulas_de_en.4525499cc954_Unas_capsulas_de_en'"));
	mallaPowerUp->SetStaticMesh(mallaC.Object);
	mallaPowerUp->BodyInstance.SetCollisionProfileName("PowerUp_Velocidad");
	mallaPowerUp->OnComponentHit.AddDynamic(this, &APowerUpVelocidad::OnHit);

}

void APowerUpVelocidad::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
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

void APowerUpVelocidad::BeginPlay()
{
	Super::BeginPlay();
}

void APowerUpVelocidad::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CurrentLocation = GetActorLocation();
    float DescendSpeed = 1000.0f; 
    FVector NewLocation = CurrentLocation + FVector(0.0f, 0.0f, -DescendSpeed * DeltaTime);
    float MinZ = 200.0f;
    NewLocation.Z = FMath::Max(NewLocation.Z, MinZ);

    SetActorLocation(NewLocation);
}
