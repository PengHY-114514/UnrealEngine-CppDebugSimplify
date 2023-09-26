# UnrealEngine-CppDebugSimplify【持续更新】
简化用C++绘制Debug文字和图形的语句。

## 简介
在蓝图里进行Debug绘制比较简单，比如在屏幕上绘制一句话：

【图片】【图片】

但是在Cpp里就比较复杂，例如打印“Hello World”在屏幕上需要：

GEngine->AddOnScreenDebugMessage(-1,TimeToDisplay,Color,(TEXT("%s"), *Message),false,TextScale * FVector2d::UnitVector);

或是绘制球体：

DrawDebugSphere(Drawer->GetWorld(),Center,Radius,Segments,Color,bPersistentLines,LifeTime);

然鹅实际开发时完全没必要每次都写这么一长串参数

## 使用方法
下载UDebug.h和UDebug.cpp两个文件到ProjectName\Source\ProjectName\，也就是和 ProjectName.Build.cs 同一目录下

在需要Debug绘制的cpp文件里
#include "UDebug.h"

## 示例
在屏幕上打印"Hello World"：

UDebug::PrintToScreen(L"HelloWorld");

在屏幕上打印组合字符串：

UDebug::PrintToScreen(L"Unlock "+PlayerSkill->GetName());

在某处绘制圆球：

UDebug::DrawSphere(this,GetActorLocation());

-------------------------------------
持续更新









