#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
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
	 * BlueprintGeneratedClass Greenhouse_Door.Greenhouse_Door_C
	 * Size -> 0x0000 (FullSize[0x0B70] - InheritedSize[0x0B70])
	 */
	class AGreenhouse_Door_C : public ADoor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Greenhouse_Door(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
