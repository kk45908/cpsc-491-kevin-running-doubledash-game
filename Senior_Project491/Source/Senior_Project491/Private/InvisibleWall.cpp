// Fill out your copyright notice in the Description page of Project Settings.


#include "InvisibleWall.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AInvisibleWall::AInvisibleWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/_GENERATED/kkiely/Extrude_2791DFB9.Extrude_2791DFB9'"));
	UStaticMesh* Asset = MeshAsset.Object;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh", meta = (AllowPrivateAccess = "true"))UStaticMeshComponent* Ramp;

	Ramp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	if (MeshAsset.Succeeded()) {

		Ramp->SetStaticMesh(Asset);

	}
}

// Called when the game starts or when spawned
void AInvisibleWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvisibleWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

