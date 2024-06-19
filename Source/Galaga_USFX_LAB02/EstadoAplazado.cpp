
#include "EstadoAplazado.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "NaveEstado.h"
#include "UObject/ConstructorHelpers.h"

AEstadoAplazado::AEstadoAplazado()
{
	PrimaryActorTick.bCanEverTick = true;
    FireRate = 2.0f;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> NuevaMallaFinder(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_13.TwinStickUFO_13'"));
    if (NuevaMallaFinder.Succeeded())
    {
        NuevaMalla = NuevaMallaFinder.Object;
    }

    MaxProjectiles = 5;
    ProjectileCount = MaxProjectiles;
}

void AEstadoAplazado::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoAplazado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoAplazado::Mover(float DeltaTime)
{

    if (NaveAliada)
    {
        FVector PosicionActual = NaveAliada->GetActorLocation();
        float LimiteDerecho = 1600.0f;
        float LimiteIzquierdo = -1600.0f;
        float VelocidadHorizontal = 300.0f;
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

void AEstadoAplazado::Disparar()
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

void AEstadoAplazado::CambiarMalla()
{
    if (NaveAliada && NuevaMalla)
    {
        NaveAliada->GetStaticMeshComponent()->SetStaticMesh(NuevaMalla);
    }
}

void AEstadoAplazado::SetAliada(ANaveEstado* _NaveAliada)
{
    NaveAliada = Cast <ANaveEstado>(_NaveAliada);
    NaveAliada->MostrarEstado(NaveAliada->GetEstadoAplazado());

    CambiarMalla();

    if (NaveAliada)
    {
        GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AEstadoAplazado::Disparar, FireRate, true);
    }
}

