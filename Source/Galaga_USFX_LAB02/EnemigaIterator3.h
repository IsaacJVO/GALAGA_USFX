// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigaIterator3.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEnemigaIterator3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigaIterator3();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reloj, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaI;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FVector MovementDirection;
	float Speed;
	// Target point for destruction
	FVector TargetPoint;
	float FireRate;
	FTimerHandle FireTimerHandle;
	void DispararDuro();

private:
	bool disparoDuroActivo;
};
