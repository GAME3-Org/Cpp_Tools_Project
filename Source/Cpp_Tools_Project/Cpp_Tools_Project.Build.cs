// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cpp_Tools_Project : ModuleRules
{
	public Cpp_Tools_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
