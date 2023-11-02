// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

class FName;

class FSlateStyleSet;
class ISlateStyle;

//////////////////////////////////////////////////////////////////////////
// FMediaFrameworkUtilitiesEditorStyle

class FMediaFrameworkUtilitiesEditorStyle
{
public:
	static void Register();
	static void Unregister();

	static FName GetStyleSetName();

	static const ISlateStyle& Get();
};