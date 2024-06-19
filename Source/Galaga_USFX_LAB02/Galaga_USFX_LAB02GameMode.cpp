//***********  MUNDO  ********************
#include "Galaga_USFX_LAB02GameMode.h"  // 
#include "Galaga_USFX_LAB02Pawn.h"      //
//***********  OBSERVER  ***************//
#include "Reloj.h"                      //
#include "Publicador.h"                 //
#include "TorreEifel.h"                 //
//***********  STATE  ******************//
#include "NaveEstado.h"                 //
//***********  STRATERGY  ****************
#include "NaveEstrategica.h"            //
#include "EstrategiaEspiadora.h"        //
#include "EstrategiaAyudante.h"         //
#include "EstrategiaDisparadora.h"      //
//***********  FACADE  *****************//
#include "FacadeNaves.h"                //  
#include "Engine/World.h"               //
#include "Engine/Engine.h"              //
//***********  ITERATOR  ***************//
#include "EnemigaIterator.h"            //
#include "EnemigaItertor2.h"            //
#include "EnemigaIterator3.h"           //
#include "EnemigaIterator4.h"           //
#include "EnemigaIterator5.h"           //
//***********  COLLECTION  *************//
#include "NaveEnemigaCollection.h"      //
#include "NaveEnemigaIterator.h"        //
//***********  PORTAL  *****************//
#include "PORTAL1.h"                    //
//**************************************//

//******************************************************  GAME_MODE  ********************************************************

AGalaga_USFX_LAB02GameMode::AGalaga_USFX_LAB02GameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    DefaultPawnClass = AGalaga_USFX_LAB02Pawn::StaticClass();

    // INICIALIZADORES
    E_Reloj = 0.0f;
    bEstrategiasCambiadas = false;
}

//*****************************************************  PORTAL SPAWN  *******************************************************
void AGalaga_USFX_LAB02GameMode::SpawmPortal()
{
    FVector ubicacionPortal = FVector(2750.0f, 0.0f, 410.0f);
    FRotator rotacionPortal = FRotator(0.0f, 0.0f, 0.0f);

    Portal = GetWorld()->SpawnActor<APORTAL1>(APORTAL1::StaticClass(), ubicacionPortal, rotacionPortal);
}
//******************************************************  BEGIN_PLAY  ********************************************************

void AGalaga_USFX_LAB02GameMode::BeginPlay()
{
    Super::BeginPlay();

    //**************************************************  PORTAL TIMER  *******************************************************
    float TimeToSpawnPortal = 10.0f; 
    GetWorldTimerManager().SetTimer(PortalSpawnTimerHandle, this, &AGalaga_USFX_LAB02GameMode::SpawmPortal, TimeToSpawnPortal, false);

    //**************************************************  ITERATOR   **********************************************************

    ANaveEnemigaCollection* NaveCollection = GetWorld()->SpawnActor<ANaveEnemigaCollection>();
    if (!NaveCollection)
    {
        return;
    }

    FVector ubicacionNavesIterator[] = {
        FVector(-50.0f, -3000.0f, 900.0f),
        FVector(-50.0f, -2500.0f, 900.0f),
        FVector(-50.0f, -2000.0f, 900.0f),
        FVector(-50.0f, -1500.0f, 900.0f),
        FVector(-50.0f, -1000.0f, 900.0f)
    };
    FRotator rotacionNavesIterator = FRotator(0.0f, 180.0f, 0.0f);


    for (int32 i = 0; i < 5; ++i)
    {
        AActor* Nave = nullptr;
        switch (i)
        {
        case 0:
            Nave = GetWorld()->SpawnActor<AEnemigaIterator>(ubicacionNavesIterator[i], rotacionNavesIterator);
            break;
        case 1:
            Nave = GetWorld()->SpawnActor<AEnemigaItertor2>(ubicacionNavesIterator[i], rotacionNavesIterator);
            break;
        case 2:
            Nave = GetWorld()->SpawnActor<AEnemigaIterator3>(ubicacionNavesIterator[i], rotacionNavesIterator);
            break;
        case 3:
            Nave = GetWorld()->SpawnActor<AEnemigaIterator4>(ubicacionNavesIterator[i], rotacionNavesIterator);
            break;
        case 4:
            Nave = GetWorld()->SpawnActor<AEnemigaIterator5>(ubicacionNavesIterator[i], rotacionNavesIterator);
            break;
        default:
            break;
        }
        if (Nave)
        {
            NaveCollection->AddNave(Nave);
        }
    }

    UNaveEnemigaIterator* NaveIteratorInstance = NewObject<UNaveEnemigaIterator>();
    if (!NaveIteratorInstance)
    {
        return;
    }

    NaveIteratorInstance->SetCollection(NaveCollection);
    while (!NaveIteratorInstance->IsDone())
    {
        AActor* Nave = NaveIteratorInstance->GetCurrentNave();
        NaveIteratorInstance->Next();
    }


    //************************************  FACADE   **********************************************

    FacadeNaves = GetWorld()->SpawnActor<AFacadeNaves>(AFacadeNaves::StaticClass());

    FacadeNaves->SPAWN_NAVES_ENEMIGAS();
    FacadeNaves->SpawnPowerUpVelocidad();


    //************************************  OBSERVER   ********************************************

    FVector ubicacionReloj = FVector(-1160.0f, -1220.0f, 150.0f);
    FRotator rotacionReloj = FRotator(0.0f, 0.0f, 0.0f);

    FVector ubicacionTorreEifel = FVector(-960.0f, 1120.0f, 700.0f);
    FRotator rotacionTorreEifel = FRotator(-23.0f, -45.0f, 0.0f);

    Reloj = GetWorld()->SpawnActor<AReloj>(ubicacionReloj, rotacionReloj);
    TorreEifel = GetWorld()->SpawnActor<ATorreEifel>(ubicacionTorreEifel, rotacionTorreEifel);

    Publicador = GetWorld()->SpawnActor<APublicador>(APublicador::StaticClass());
    TorreEifel->SetPublicador(Publicador);
    Publicador->SubscriptorReloj(Reloj); 

    //************************************   STATE    **********************************************

    FVector ubicacionNaveEstado = FVector(-1570.0f, 0.0f, 200.0f);
    FRotator rotacionNaveEstado = FRotator(0.0f, 0.0f, 0.0f);

    NaveEstado = GetWorld()->SpawnActor<ANaveEstado>(ubicacionNaveEstado, rotacionNaveEstado);

    //************************************  STRATERGY  *********************************************

    FVector ubicacionE = FVector(1600.0f, -900.0f, 850.0f);
    FRotator rotacionE = FRotator(0.0f, 180.0f, 0.0f); 

    Estrategica = GetWorld()->SpawnActor<ANaveEstrategica>(ubicacionE, rotacionE);

    E_Espiadora = GetWorld()->SpawnActor<AEstrategiaEspiadora>(AEstrategiaEspiadora::StaticClass());
    E_Ayudante = GetWorld()->SpawnActor<AEstrategiaAyudante>(AEstrategiaAyudante::StaticClass());
    E_Disparadora = GetWorld()->SpawnActor<AEstrategiaDisparadora>(AEstrategiaDisparadora::StaticClass());

    GetWorldTimerManager().SetTimer(TimerHandle_Reloj, this, &AGalaga_USFX_LAB02GameMode::TickReloj, 1.0f, true);


}

//*****************************************  RELOJ DEL STRATERGY  ************************************
void AGalaga_USFX_LAB02GameMode::TickReloj()
{
    E_Reloj += 1;

    if (!bEstrategiasCambiadas)
    {
        if (E_Reloj <= 5.0)
        {
            Estrategica->AlterarEstrategia(E_Espiadora);
            Estrategica->EmplearEstrategia(DeltaTime);
        }
        if (E_Reloj > 5.0 && E_Reloj < 15.0)
        {
            Estrategica->AlterarEstrategia(E_Ayudante);
            Estrategica->EmplearEstrategia(DeltaTime);
        }
        if (E_Reloj > 15.0 && E_Reloj < 25.0)
        {
            Estrategica->AlterarEstrategia(E_Disparadora);
            Estrategica->EmplearEstrategia(DeltaTime);

        }
        if (E_Reloj >= 25.0)
        {
            E_Reloj = 0.0;
            bEstrategiasCambiadas = true;
        }
    }
}
