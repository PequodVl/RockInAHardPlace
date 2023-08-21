// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnUnited_In_Peace : ModuleRules
{
	public UnUnited_In_Peace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
