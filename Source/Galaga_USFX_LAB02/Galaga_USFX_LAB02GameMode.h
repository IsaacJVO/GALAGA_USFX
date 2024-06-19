
#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB02GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	class AReloj* Reloj;
	class ATorreEifel* TorreEifel;
	class APublicador* Publicador;
	class ANaveEstado* NaveEstado;
	class APORTAL1* Portal;

public:
	AGalaga_USFX_LAB02GameMode();

protected:
	virtual void BeginPlay() override;
	void SpawmPortal();

public:

	UPROPERTY(VisibleAnywhere, Category = "FacadeNaves")
	class AFacadeNaves* FacadeNaves;

private:
	void TickReloj();
	FTimerHandle SpawnTimerHandle;
	FTimerHandle PortalSpawnTimerHandle;


	float DeltaTime;

	UPROPERTY()
	FTimerHandle TimerHandle_Reloj;

public:
	int E_Reloj;
	bool bEstrategiasCambiadas;

private:
	class ANaveEstrategica* Estrategica;
	class AEstrategiaEspiadora* E_Espiadora;
	class AEstrategiaAyudante* E_Ayudante;
	class AEstrategiaDisparadora* E_Disparadora;

	//***************ITERATOR******************

	class AEnemigaIterator* NaveIterator;
	class AEnemigaItertor2* NaveIterator2;
	class AEnemigaIterator3* NaveIterator3;
	class AEnemigaIterator4* NaveIterator4;
	class AEnemigaIterator5* NaveIterator5;
	float espacio = 300.0f;
};