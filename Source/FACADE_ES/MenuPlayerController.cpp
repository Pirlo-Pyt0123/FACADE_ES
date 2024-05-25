// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuPlayerController.h"
#include "MENU_HUD.h"

AMenuPlayerController::AMenuPlayerController()
{

}

void AMenuPlayerController::SetupInputComponent()
{
	if (InputComponent)
	{
		InputComponent->BindAction("OpenMenu", IE_Pressed, this, &AMenuPlayerController::OpenMenu);
	}
}

void AMenuPlayerController::OpenMenu()
{
	if (AMENU_HUD* MenuHUD = Cast<AMENU_HUD>(GetHUD()))
	{
		MenuHUD->ShowMenu();
	}
}
