// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "SlateBasics.h"
#include "SlateExtras.h"

//#include "CoreMinimal.h"
/**
 * 
 */
//class CPP_TOOLS_PROJECT_API SMainMenuWidget

class SMainMenuWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SMainMenuWidget) {}
		
	SLATE_ARGUMENT(TWeakObjectPtr<class AMenuHUD>, OwningHUD)
		
	SLATE_END_ARGS()

	/** every widget needs a construction function */
	void Construct(const FArguments& InArgs);

//lass AMenuHUD*

	//not u object manage memory by urself
	
	/** The HUD tht created this widget */
	TWeakObjectPtr<class AMenuHUD> OwningHUD;

	//weak pointer
	
	//SMainMenuWidget();
	//~SMainMenuWidget();

	virtual bool SupportsKeyboardFocus() const override {return true};
};
