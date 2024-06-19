#include "AComponenteMovimiento.h"

UAComponenteMovimiento::UAComponenteMovimiento()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UAComponenteMovimiento::BeginPlay()
{
	Super::BeginPlay();
}
void UAComponenteMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* Parent = GetOwner();
    if (Parent)
    {
        FVector PosicionActual = Parent->GetActorLocation();
        float LimiteIzquierdo = -1600.0f;
        float LimiteDerecho = 1600.0f;
        float VelocidadHorizontal = 1000.0f;
        float DesplazamientoHorizontal = VelocidadHorizontal * DeltaTime;


        if (DireccionMovimientoHorizontal == 1)
        {
            FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal, 0.0f);
            if (NuevaPosicion.Y <= LimiteDerecho)
            {
                Parent->SetActorLocation(NuevaPosicion);
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
                Parent->SetActorLocation(NuevaPosicion);
            }
            else
            {
                DireccionMovimientoHorizontal = 1;
            }
        }
    }
}

