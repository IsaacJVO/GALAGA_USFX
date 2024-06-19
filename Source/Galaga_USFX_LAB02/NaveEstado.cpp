// **********  ES LA NAVE ESTADO  **********

// TIENE LOS SIGUIENTES ESTADOS:
// 1. NOKIA (ESTADO POTENCIADO)
// 2. NORMAL (ESTADO DE TRANSICION)
// 3. APLAZADA (ESTADO DAÑADO)

#include "NaveEstado.h"
#include "EstadoNormal.h"
#include "EstadoNokia.h"
#include "EstadoAplazado.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "INaveState.h"

ANaveEstado::ANaveEstado()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaEstado(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_14.TwinStickUFO_14'"));
	MallaEstado = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaAliada"));
	RootComponent = MallaEstado;
	MallaEstado->SetStaticMesh(mallaEstado.Object);
	MallaEstado->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	vida = 200.0f;
}

void ANaveEstado::BeginPlay()
{
	Super::BeginPlay();
	 
	EstadoAplazado = GetWorld()->SpawnActor<AEstadoAplazado>(AEstadoAplazado::StaticClass());
	EstadoNokia = GetWorld()->SpawnActor<AEstadoNokia>(AEstadoNokia::StaticClass());
	EstadoNormal = GetWorld()->SpawnActor<AEstadoNormal>(AEstadoNormal::StaticClass());

	InicializarEstados();	
}

void ANaveEstado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverAliada(DeltaTime);
}

void ANaveEstado::RecibirDanio() 
{
	vida -= 10.0f;

	if (vida <= 0.0f)
	{
		Destroy();
		return;
	}
	InicializarEstados();
}

void ANaveEstado::InicializarEstados()
{
	if (vida >= 130.0f)
	{
		EstadoNokia->SetAliada(this);
		MostrarEstado(EstadoNokia);
	}
	else if (vida >= 60.0f && vida < 130)
	{
		EstadoNormal->SetAliada(this);
		MostrarEstado(EstadoNormal);
	}
	else
	{
		EstadoAplazado->SetAliada(this);
		MostrarEstado(EstadoAplazado);
	}
}

void ANaveEstado::MoverAliada(float DeltaTime)
{
	Estado->Mover(DeltaTime);
}

void ANaveEstado::DispararAliada()
{
	Estado->Disparar();
}

void ANaveEstado::CambiarMalla()
{
	Estado->CambiarMalla();
}

void ANaveEstado::MostrarEstado(IINaveState* _State)
{
	GetWorldTimerManager().ClearAllTimersForObject(this);
	Estado = _State;
}

IINaveState* ANaveEstado::GetEstadoNormal()
{
	return EstadoNormal;
}

IINaveState* ANaveEstado::GetEstadoNokia()
{
	return EstadoNokia;
}

IINaveState* ANaveEstado::GetEstadoAplazado()
{
	return EstadoAplazado;
}

IINaveState* ANaveEstado::GetEstado()
{
	return Estado;
}
