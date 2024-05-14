// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FACADE_ES : ModuleRules
{
	public FACADE_ES(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
