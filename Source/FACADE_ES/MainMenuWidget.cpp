// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "MENU_HUD.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Texture2D.h"
#include "SlateExtras.h"

// Cargar la nueva textura de dise�o para los botones

#define LOCTEXT_NAMESPACE "MainMenu"
void MainMenuWidget::Construct(const FArguments& InArgs)
{
   
        // Habilita el soporte de enfoque de teclado para el widget
        bCanSupportFocus = true;

        // Asigna el HUD propietario pasado como argumento
        OwningHUD = InArgs._OwningHUD;

        // Define los textos de los botones y el t�tulo
       // const FText TitleText = LOCTEXT("GameTitle", "ELIGE LA DIFICULTAD  ");
        const FText PlayText = LOCTEXT("PlayGame", "EASY");
        const FText SettingsText = LOCTEXT("Settings", "NORMAL");
        const FText QuitText = LOCTEXT("QuitGame", "HARD");

        //UTexture2D* NewButtonDesignTexture = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/Game/Path/To/NewButtonTexture.NewButtonTexture'"));
        //if (NewButtonDesignTexture != nullptr)
        //{
        //    FSlateBrush* NewButtonDesignBrush = new FSlateBrush();
        //    NewButtonDesignBrush->SetResourceObject(NewButtonDesignTexture);

        //    // Cambiar la textura de dise�o de los botones
        //    ButtonStyle.Normal.SetResourceObject(NewButtonDesignTexture);
        //    ButtonStyle.Hovered.SetResourceObject(NewButtonDesignTexture);
        //    ButtonStyle.Pressed.SetResourceObject(NewButtonDesignTexture);
        //}
        // Define el estilo de fuente para los botones y el t�tulo
        FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("Power_Smurf");
        ButtonTextStyle.Size = 40.0f;

        // Define el estilo de fuente para el t�tulo
        FSlateFontInfo TitleTextStyle = ButtonTextStyle;
        TitleTextStyle.Size = 50.0f;

        // Cargar la textura de dise�o para los botones
        UTexture2D* ButtonDesignTexture = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/Game/StarterContent/imagens/batle.batle'"));
        if (ButtonDesignTexture != nullptr)
        {
            FSlateBrush* ButtonDesignBrush = new FSlateBrush();
            ButtonDesignBrush->SetResourceObject(ButtonDesignTexture);

            // Define el estilo para los botones
            const FButtonStyle& ButtonStyle = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button.Friendly");
            FSlateBrush ButtonBrush = ButtonStyle.Normal;

            // Cambia el color de fondo de los botones
            ButtonBrush.TintColor = FSlateColor(FLinearColor(150.f, 150.f, 300.f)); // Cambia el color aqu�

            // Cargar la textura de fondo para el fondo del men�
            UTexture2D* BackgroundTexture = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/Game/StarterContent/imagens/FIRTSGALAGATEXT.FIRTSGALAGATEXT'"));
            if (BackgroundTexture != nullptr)
            {
                FSlateBrush* BackgroundBrush = new FSlateBrush();
                BackgroundBrush->SetResourceObject(BackgroundTexture);

                // Agregar la imagen de fondo y el dise�o de los botones al overlay
                ChildSlot
                    [
                        SNew(SOverlay)

                            // Fondo de imagen
                            + SOverlay::Slot()
                            [
                                SNew(SImage)
                                    .Image(BackgroundBrush)
                            ]

                            // Resto del contenido del men�
                            + SOverlay::Slot()
                            .HAlign(HAlign_Fill)
                            .VAlign(VAlign_Fill)
                            [
                                SNew(SVerticalBox)

                                    // T�tulo
                                    + SVerticalBox::Slot()
                                    .HAlign(HAlign_Center)
                                    .VAlign(VAlign_Center)
                                    .Padding(FMargin(0.f, 50.f))
                                    [
                                        SNew(STextBlock)
                                            .Font(TitleTextStyle)
                                            .ColorAndOpacity(FLinearColor::Green)
                                           // .Text(TitleText)
                                    ]

                                    // Bot�n de "Continuar"
                                    + SVerticalBox::Slot()
                                    .HAlign(HAlign_Center)
                                    .VAlign(VAlign_Center)
                                    .Padding(FMargin(0.f, 20.f))
                                    [
                                        SNew(SButton)
                                            .ButtonStyle(&ButtonStyle) // Usa el estilo de bot�n modificado
                                            .OnClicked(this, &MainMenuWidget::OnFacilClicked)
                                            .ContentPadding(FMargin(50.f))
                                            [
                                                SNew(STextBlock)
                                                    .Font(ButtonTextStyle)  // Cambi� la fuente a "Arial" y ajust� el tama�o del texto
                                                    .ColorAndOpacity(FLinearColor::Red)  // Cambi� el color del texto a blanco
                                                    .Text(PlayText)
                                            ]
                                    ]

                                    // Bot�n de "Ajustes"
                                    + SVerticalBox::Slot()
                                    .HAlign(HAlign_Center)
                                    .VAlign(VAlign_Center)
                                    .Padding(FMargin(0.f, 20.f))
                                    [
                                        SNew(SButton)
                                            .OnClicked(this, &MainMenuWidget::OnNormalClicked)
                                            .ContentPadding(FMargin(50.f))
                                            [
                                                SNew(STextBlock)
                                                    .Font(ButtonTextStyle)
                                                    .ColorAndOpacity(FLinearColor::Black)
                                                    .Text(SettingsText)
                                            ]
                                    ]

                                    // Bot�n de "Salir del Juego"
                                    + SVerticalBox::Slot()
                                    .HAlign(HAlign_Center)
                                    .VAlign(VAlign_Center)
                                    .Padding(FMargin(100.f, 20.f))
                                    [
                                        SNew(SButton)
                                            .OnClicked(this, &MainMenuWidget::OnDificilClicked)
                                            .ContentPadding(FMargin(50.f))
                                            [
                                                SNew(STextBlock)
                                                    .Font(ButtonTextStyle)
                                                    .ColorAndOpacity(FLinearColor::Yellow)
                                                    .Text(QuitText)
                                            ]
                                    ]
                            ]
                    ];


            }
        }
    

}

FReply MainMenuWidget::OnFacilClicked() const
{
    if (OwningHUD.IsValid())
    {
        OwningHUD->StartGameplayFacil();
    }
    return FReply::Handled();
}

FReply MainMenuWidget::OnNormalClicked() const
{
    if (OwningHUD.IsValid())
    {
        OwningHUD->StartGameplayNormal();
    }
    return FReply::Handled();
}

FReply MainMenuWidget::OnDificilClicked() const
{
    if (OwningHUD.IsValid())
    {
        OwningHUD->StartGameplayDificil();
    }
    return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
