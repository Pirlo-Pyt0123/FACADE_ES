// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_OBSTACLES.h"
#include "SATELITE_ABANDONADO.h"
#include "COMETA_LINEAL.h"
#include "CAJAS_ABANDONADAS.h"


AGENERAL_OBSTACLE* AP_FM_OBSTACLES::Crear_Obstaculos(FString Obstaculo_Identificador)
{
    FVector SpawnLocation = FVector(1770.0f, FMath::RandRange(-1780, 1780), 210.0f);
    FRotator Rotation = FRotator(0.f, 0.f, 0.f);

    if (Obstaculo_Identificador.Equals("CometaLINE"))
        return GetWorld()->SpawnActor<ACOMETA_LINEAL>(ACOMETA_LINEAL::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("CAJAS"))
        return GetWorld()->SpawnActor<ACAJAS_ABANDONADAS>(ACAJAS_ABANDONADAS::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("SATELITE_MUERTO"))
        return GetWorld()->SpawnActor<ASATELITE_ABANDONADO>(ASATELITE_ABANDONADO::StaticClass(), SpawnLocation, Rotation);


    return nullptr; // Retorna nullptr si el identificador no coincide
}
