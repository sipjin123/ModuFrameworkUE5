// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjNexus : ModuleRules
{
	public ProjNexus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});
		PrivateDependencyModuleNames.Add("CoreFramework");
		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProjNexus",
			"ProjNexus/Variant_Platforming",
			"ProjNexus/Variant_Platforming/Animation",
			"ProjNexus/Variant_Combat",
			"ProjNexus/Variant_Combat/AI",
			"ProjNexus/Variant_Combat/Animation",
			"ProjNexus/Variant_Combat/Gameplay",
			"ProjNexus/Variant_Combat/Interfaces",
			"ProjNexus/Variant_Combat/UI",
			"ProjNexus/Variant_SideScrolling",
			"ProjNexus/Variant_SideScrolling/AI",
			"ProjNexus/Variant_SideScrolling/Gameplay",
			"ProjNexus/Variant_SideScrolling/Interfaces",
			"ProjNexus/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
