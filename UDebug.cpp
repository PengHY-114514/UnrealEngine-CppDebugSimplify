// Fill out your copyright notice in the Description page of Project Settings.


#include "UDebug.h"
#include "DrawDebugHelpers.h"



UDebug::UDebug()
{
}

UDebug::~UDebug()
{
}


void UDebug::PrintToScreen(const FString Message, const double TimeToDisplay, FColor Color, const double TextScale)
{
	GEngine->AddOnScreenDebugMessage(-1,TimeToDisplay,Color,(TEXT("%s"), *Message),false,
									TextScale * FVector2d::UnitVector);
}

void UDebug::PrintToLog(const FString Message)
{
	UE_LOG(LogTemp,Log,TEXT("%s"), *Message);
}

void UDebug::DrawSphere(APawn* Drawer, FVector Center ,const FColor Color ,bool bPersistentLines ,float LifeTime ,
							float Radius ,int32 Segments)
{
	
	DrawDebugSphere(Drawer->GetWorld(),Center,Radius,Segments,Color,bPersistentLines,LifeTime);
}





