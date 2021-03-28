// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class P1USH : ModuleRules
{
	public P1USH(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
