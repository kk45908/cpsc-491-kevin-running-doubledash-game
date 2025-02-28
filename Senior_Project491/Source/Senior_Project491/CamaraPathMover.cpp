// Fill out your copyright notice in the Description page of Project Settings.


#include "CamaraPathMover.h"
#include "Components/SplineComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACamaraPathMover::ACamaraPathMover()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create Spline Component (Path for Camera)
    CameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("CameraSpline"));
    RootComponent = CameraSpline;

    // Create Camera Component
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ACamaraPathMover::BeginPlay()
{
	Super::BeginPlay();
    DistanceTravelled = 0.0f;
}

// Called every frame
void ACamaraPathMover::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!CameraSpline) return;

    // Move camera along spline
    DistanceTravelled += MovementSpeed * DeltaTime;
    float SplineLength = CameraSpline->GetSplineLength();

    if (DistanceTravelled > SplineLength)
    {
        DistanceTravelled = 0.0f;  // Loop the movement
    }

    FVector NewLocation = CameraSpline->GetLocationAtDistanceAlongSpline(DistanceTravelled, ESplineCoordinateSpace::World);
    FRotator NewRotation = CameraSpline->GetRotationAtDistanceAlongSpline(DistanceTravelled, ESplineCoordinateSpace::World);

    Camera->SetWorldLocation(NewLocation);
    Camera->SetWorldRotation(NewRotation);
}

