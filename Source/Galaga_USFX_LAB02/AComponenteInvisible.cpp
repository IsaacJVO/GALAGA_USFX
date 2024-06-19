#include "AComponenteInvisible.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

UAComponenteInvisible::UAComponenteInvisible()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAComponenteInvisible::BeginPlay()
{
	Super::BeginPlay();
}

void UAComponenteInvisible::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}



