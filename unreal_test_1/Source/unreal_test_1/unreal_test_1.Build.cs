// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class unreal_test_1 : ModuleRules
{
	public unreal_test_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
