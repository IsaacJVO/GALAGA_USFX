
#include "EstadoNormal.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "NaveEstado.h"
#include "UObject/ConstructorHelpers.h"

AEstadoNormal::AEstadoNormal()
{
    PrimaryActorTick.bCanEverTick = true;
    FireRate = 1.0f;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> NuevaMallaFinder(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_15.TwinStickUFO_15'"));
    if (NuevaMallaFinder.Succeeded())
    {
        NuevaMalla = NuevaMallaFinder.Object;
    }

    MaxProjectiles = 5;
    ProjectileCount = MaxProjectiles;
}

void AEstadoNormal::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoNormal::Mover(float DeltaTime)
{
    if (NaveAliada)
    {
        FVector PosicionActual = NaveAliada->GetActorLocation();
        float LimiteDerecho = 1600.0f;
        float LimiteIzquierdo = -1600.0f;
        float VelocidadHorizontal = 1000.0f;
        float DesplazamientoHorizontal = VelocidadHorizontal * DeltaTime;

        if (DireccionMovimientoHorizontal == 1)
        {
            FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal, 0.0f);
            if (NuevaPosicion.Y <= LimiteDerecho)
            {
                NaveAliada->SetActorLocation(NuevaPosicion);
            }
            else
            {
                DireccionMovimientoHorizontal = -1;
            }
        }
        else
        {
            FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoHorizontal, 0.0f);
            if (NuevaPosicion.Y >= LimiteIzquierdo)
            {
                NaveAliada->SetActorLocation(NuevaPosicion);
            }
            else
            {
                DireccionMovimientoHorizontal = 1;
            }
        }
    }
}

void AEstadoNormal::Disparar()
{
    if (NaveAliada && ProjectileCount > 0)
    {
        AGalaga_USFX_LAB02Projectile* Projectile = GetWorld()->SpawnActor<AGalaga_USFX_LAB02Projectile>(AGalaga_USFX_LAB02Projectile::StaticClass(), NaveAliada->GetActorLocation(), NaveAliada->GetActorRotation());
        if (Projectile)
        {
            FVector ForwardDirection = NaveAliada->GetActorForwardVector();
            FRotator SpawnRotation = ForwardDirection.Rotation();
            FVector SpawnLocation = NaveAliada->GetActorLocation();
            Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
            Projectile->Fire();

            ProjectileCount--;
            if (ProjectileCount <= 0)
            {
                GetWorldTimerManager().ClearTimer(FireTimerHandle);
            }
        }
    }
}

void AEstadoNormal::CambiarMalla()
{
    if (NaveAliada && NuevaMalla)
    {
        NaveAliada->GetStaticMeshComponent()->SetStaticMesh(NuevaMalla);
    }
}

void AEstadoNormal::SetAliada(ANaveEstado* _NaveAliada)
{
   NaveAliada = Cast <ANaveEstado>(_NaveAliada);
   NaveAliada->MostrarEstado(NaveAliada->GetEstadoAplazado());

   CambiarMalla();

   if (NaveAliada)
    {
        GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AEstadoNormal::Disparar, FireRate, true);
    }
}


