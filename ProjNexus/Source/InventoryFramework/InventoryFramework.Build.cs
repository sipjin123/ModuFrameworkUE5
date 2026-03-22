using UnrealBuildTool;

public class InventoryFramework : ModuleRules
{
	public InventoryFramework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine"
		});
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"CoreFramework" // 👈 dependency
		});
	}
}