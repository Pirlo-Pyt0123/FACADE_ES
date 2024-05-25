// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MENU_HUD.generated.h"




UCLASS()
class FACADE_ES_API AMENU_HUD : public AHUD
{
	GENERATED_BODY()

public:
    AMENU_HUD();

protected:
    virtual void BeginPlay() override;

public:
    void ShowMenu();
    void RemoveMenu();
    virtual void Tick(float DeltaTime) override;

    void StartGameplayFacil();
    void StartGameplayNormal();
    void StartGameplayDificil();

    void InitializeFacadeReference();

private:
    TSharedPtr<class MainMenuWidget> MenuWidget;
    TSharedPtr<class SWidget> MenuWidgetContainer;

    class AFA_DIFICULT* Facade;



	
};
