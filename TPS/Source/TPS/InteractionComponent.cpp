// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"
#include "Components/MeshComponent.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// If the variable is not manually assigned in blueprint, find the first mesh component in hierarchy and assign it to the member.  
	if (!VisualizableMesh)
	{
		VisualizableMesh = GetOwner()->FindComponentByClass<UMeshComponent>();
	}

	// Set outline color to color 2 defined in: 
	// '/Game/_MyAssets/Materials/PP_OutlineTut_Inst.PP_OutlineTut_Inst'
	//if (VisualizableMesh) 
	//{
	//	VisualizableMesh->SetCustomDepthStencilValue(2);
	//}
	
}


// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractionComponent::Highlight_Implementation(bool isFocused)
{
	if (VisualizableMesh)
	{
		VisualizableMesh->SetRenderCustomDepth(isFocused);
	}

	if (OnHighlight.IsBound())
	{
		OnHighlight.Broadcast(isFocused);
	}
}

