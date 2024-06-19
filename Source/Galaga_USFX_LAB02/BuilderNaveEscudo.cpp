
#include "BuilderNaveEscudo.h"
#include "NODRIZA.h"
#include "HijasNodriza.h"
#include "MotorNaveNodriza.h"
#include "EscudoNodriza.h"

ABuilderNaveEscudo::ABuilderNaveEscudo()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABuilderNaveEscudo::BeginPlay()
{
	Super::BeginPlay();
	NaveNodriza = GetWorld()->SpawnActor<ANODRIZA>(ANODRIZA::StaticClass());
	NaveNodriza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform); 
	
}

void ABuilderNaveEscudo::GetHijasNodriza()
{
	FVector Location = FVector(1700, -100, 200);
	FVector Location2 = FVector(1700, 280, 200);
	FRotator Rotation = FRotator(0, 180, 0);


	Hijas = GetWorld()->SpawnActor<AHijasNodriza>(AHijasNodriza::StaticClass(), Location, Rotation);
	Hijas = GetWorld()->SpawnActor<AHijasNodriza>(AHijasNodriza::StaticClass(), Location2, Rotation);
	NaveNodriza->SetHijasNodrizas(Hijas);

}

void ABuilderNaveEscudo::GetEscudoNodriza()
{
	FVector Location = FVector(1680, 90, 200);
	FRotator Rotation = FRotator(0, 225, 0);
	Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass(), Location, Rotation);
	NaveNodriza->SetEscudoNodriza(Escudo); 
}

void ABuilderNaveEscudo::GetMotorNaveNodriza()
{
	FVector Location = FVector(1780, 90, 230);
	FRotator Rotation = FRotator(0, 180, 0);
	Motor = GetWorld()->SpawnActor<AMotorNaveNodriza>(AMotorNaveNodriza::StaticClass(), Location, Rotation);
	NaveNodriza->SetMotorNaveNodriza(Motor);
}

ANODRIZA* ABuilderNaveEscudo::GetNaveNodriza()
{
	return NaveNodriza;
}

void ABuilderNaveEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

