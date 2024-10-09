// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cpp_Tools_Project : ModuleRules
{
	public Cpp_Tools_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		//string[] pdmn1 = new string[] { };
		//string[] pdmn2 = new string[] { };
		//string pdmn2;
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		//PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}
