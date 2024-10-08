// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenuWidget.h"

#define LOCTEXT_NAMESPACE "MainMenu"

void SMainMenuWidget::Construct(const FArguments& InArgs)
{
	const FMargin ContentPadding = FMargin(500.f,  300.f);

	const FText TitleText = LOCTEXT("GameTitle", "My Super Great Game");
	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
				[
					SNew(SImage)
					.ColorAndOpacity(FColor::Black)
				]
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(ContentPadding)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(TitleText)
				]
			]
		];
	
}


#undef LOCTEXT_NAMESPACE