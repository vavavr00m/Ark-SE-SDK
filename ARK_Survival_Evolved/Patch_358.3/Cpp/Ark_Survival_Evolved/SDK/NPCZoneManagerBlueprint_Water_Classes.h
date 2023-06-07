#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class ANPCZoneManagerBlueprint_Water_C : public ANPCZoneManagerBlueprint_Land_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_NPCZoneManagerBlueprint_Water(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
