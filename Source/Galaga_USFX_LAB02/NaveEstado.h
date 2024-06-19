#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "INaveState.h"
#include "NaveEstado.generated.h"


UCLASS()
class GALAGA_USFX_LAB02_API ANaveEstado : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reloj, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaEstado;
	
public:	
	ANaveEstado();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UStaticMeshComponent* ANaveEstado::GetStaticMeshComponent() const
	{
		return MallaEstado;
	}

public:

	void RecibirDanio();
	int32 vida;

	IINaveState* EstadoNormal;
	IINaveState* EstadoNokia;
	IINaveState* EstadoAplazado;
	IINaveState* Estado;

	void InicializarEstados();
	void MoverAliada(float DeltaTime);
	void DispararAliada();
	void CambiarMalla();
	void MostrarEstado(IINaveState* _State);

	IINaveState* GetEstadoNormal();
	IINaveState* GetEstadoNokia();
	IINaveState* GetEstadoAplazado();
	IINaveState* GetEstado();
};
