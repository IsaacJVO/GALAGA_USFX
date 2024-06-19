// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigaIterator5.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AEnemigaIterator5 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigaIterator5();
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	FString GetObjectName() const { return TEXT("EnemigaIterator5"); }
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
