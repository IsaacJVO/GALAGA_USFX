
#include "NODRIZA.h"
#include "HijasNodriza.h"
#include "MotorNaveNodriza.h"
#include "EscudoNodriza.h"
ANODRIZA::ANODRIZA()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANODRIZA::BeginPlay()
{
	Super::BeginPlay();
}

void ANODRIZA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANODRIZA::SetHijasNodrizas(AHijasNodriza* hijas)
{
	Hijas = hijas;
}

void ANODRIZA::SetEscudoNodriza(AEscudoNodriza* escudo)
{
	Escudo = escudo;
}

void ANODRIZA::SetMotorNaveNodriza(AMotorNaveNodriza* motor)
{
	Motor = motor;
}

