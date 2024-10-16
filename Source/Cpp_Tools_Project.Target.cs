// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Cpp_Tools_ProjectTarget : TargetRules
{
	public Cpp_Tools_ProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("Cpp_Tools_Project");

		//PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		//PrivateDependencyModuleNames.AddRange();
		//PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}
