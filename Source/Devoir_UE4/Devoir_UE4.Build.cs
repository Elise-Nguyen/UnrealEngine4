// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Devoir_UE4 : ModuleRules
{
	public Devoir_UE4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
