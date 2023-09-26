// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


/**
 * 
 */
class  MYPROJECTCPP_API UDebug 
{
public:
	UDebug();
	virtual ~UDebug();

	static void PrintToScreen(const FString Message, const double TimeToDisplay = 1,
	                          FColor Color = FColor(255, 255, 255, 255),
	                          const double TextScale = 1.36);

	
	static void PrintToLog(const FString Message);

	static void DrawSphere(APawn* Drawer, FVector Center ,const FColor Color = FColor::Orange,bool bPersistentLines = false,float LifeTime = 10,
							float Radius = 32,int32 Segments = 12);
	
};
