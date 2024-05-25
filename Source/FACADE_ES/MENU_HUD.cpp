// Fill out your copyright notice in the Description page of Project Settings.


#include "MENU_HUD.h"
#include "MainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
//#include "FACADE_USFX_GALAGAGameMode.h"
#include "FA_DIFICULT.h"
#include "FACADE_ESPawn.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Widgets/SWeakWidget.h"


AMENU_HUD::AMENU_HUD()
{
}

void AMENU_HUD::BeginPlay()
{
	Super::BeginPlay();

    if (!Facade)
    {
        Facade = GetWorld()->SpawnActor<AFA_DIFICULT>();


        if (Facade)
        {
            GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("[GameMode] Facade creado y configurado correctamente."));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] Error al crear el Facade."));
        }
    }


    ShowMenu();
    InitializeFacadeReference();
   
}

void AMENU_HUD::ShowMenu()
{
    if (GEngine && GEngine->GameViewport && !MenuWidget.IsValid())
    {
        MenuWidget = SNew(MainMenuWidget).OwningHUD(this);
        GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = true;
            PlayerOwner->SetInputMode(FInputModeUIOnly());
        }
        
    }
}

void AMENU_HUD::RemoveMenu()
{
    if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
    {
        GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
        MenuWidget.Reset();
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = false;
            PlayerOwner->SetInputMode(FInputModeGameOnly());
        }
        
    }
}

void AMENU_HUD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    
}

void AMENU_HUD::StartGameplayFacil()
{
    RemoveMenu();
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo facil ")));
        Facade->ActivateFacilMode();
    }
}

void AMENU_HUD::StartGameplayNormal()
{
    RemoveMenu();
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo Normal ")));
        Facade->ActivateNormalMode();
    }
}

void AMENU_HUD::StartGameplayDificil()
{
    RemoveMenu();
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo Dificil ")));
        Facade->ActivateDificilMode();
    }
}

void AMENU_HUD::InitializeFacadeReference()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFA_DIFICULT::StaticClass(), FoundActors);
    if (FoundActors.Num() > 0)
    {
        Facade = Cast<AFA_DIFICULT>(FoundActors[0]);
    }
    else
    {
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMENU_HUD::InitializeFacadeReference, 1.0f, false);
    }
}
