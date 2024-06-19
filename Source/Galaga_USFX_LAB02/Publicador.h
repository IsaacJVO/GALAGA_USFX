
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISubscriptor.h"
#include "Publicador.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API APublicador : public AActor
{
	GENERATED_BODY()
	
public:	
	APublicador();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	class AReloj* Reloj;

private:
	TArray<IISubscriptor*> Subscriptores;

public:
	void AddSubscriptor(IISubscriptor* Subscriptor);
	void RemoveSubscriptor(IISubscriptor* Subscriptor);
	void NotifySubscriptor();
	void SubscriptorReloj(class AReloj* _Reloj);
};
