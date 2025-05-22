// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS415 : ModuleRules
{
	public FPS415(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		// Added Niagara
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara" });
	}
}
