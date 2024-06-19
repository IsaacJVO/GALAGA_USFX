
#include "Publicador.h"
#include "Reloj.h"
#include "ISubscriptor.h"


APublicador::APublicador()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APublicador::BeginPlay()
{
	Super::BeginPlay();
	
}

void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Reloj)
	{
		if (Reloj->Hora >= 5.0f)
		{
			Reloj->Hora = 0.0f;
			NotifySubscriptor();
		}
	}

}

void APublicador::AddSubscriptor(IISubscriptor* Subscriptor)
{
		Subscriptores.Add(Subscriptor);
}

void APublicador::RemoveSubscriptor(IISubscriptor* Subscriptor)
{
	Subscriptores.Remove(Subscriptor);
}

void APublicador::NotifySubscriptor()
{
		for (IISubscriptor* Subscriptor : Subscriptores)
		{
			if (Subscriptor)
			{
				Subscriptor->Actualizar();
			}
		}

}

void APublicador::SubscriptorReloj(AReloj* _Reloj)
{
		Reloj = _Reloj;
}



