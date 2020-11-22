// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CrosshairWidget.generated.h"

UENUM(BlueprintType)
enum ESightPattern
{
    SightPattern_Circle     UMETA(DisplayName = "Circle"),
    SightPattern_Dot        UMETA(DisplayName = "Dot"),
    SightPattern_Cross      UMETA(DisplayName = "Cross")
};

/**
 * 
 */
UCLASS()
class TPS_API UCrosshairWidget : public UUserWidget
{
	GENERATED_BODY()

//protected:
//    virtual bool Initialize() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TEnumAsByte<ESightPattern> SightPattern;

    //UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    //    void SetupSightPattern(TEnumAsByte<UCrosshairWidget::ESightPattern> sightPattern);
    //    void SetupSightPattern_Implementation(TEnumAsByte<UCrosshairWidget::ESightPattern> sightPattern);
};
