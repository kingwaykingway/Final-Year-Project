// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighlightSignature, bool, isToHighlight);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TPS_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//	void Interact();

	// The function to be called when player can interact with the owner actor. 
	// Override the function to re-define the highlight effect or add behaviors. 
	// At the end of execution of native implementation, OnHighlight event will be broadcasted. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Highlight(bool isToHighlight);
		void Highlight_Implementation(bool isToHighlight);

	// Custom event when player interacts with the owner actor. 
	// Can be broadcasted in owner's event graph and so. 
	UPROPERTY(VisibleAnywhere, BlueprintAssignable, BlueprintCallable, Category = "Custom")
		FInteractionSignature OnInteract;

	// Custom event AFTER highlighting the 
	// Can be broadcasted in owner's event graph and so. 
	UPROPERTY(VisibleAnywhere, BlueprintAssignable, BlueprintCallable, Category = "Custom")
		FHighlightSignature OnHighlight;

	// The mesh component where highlighting effects should apply. 
	// By default, an outline effect will be applied. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		UMeshComponent* VisualizableMesh;

	// Designed to be the hint message when player can interact with the owner actor. 
	// Intended to be displayed in HUD. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText HighlightMessage;
};
