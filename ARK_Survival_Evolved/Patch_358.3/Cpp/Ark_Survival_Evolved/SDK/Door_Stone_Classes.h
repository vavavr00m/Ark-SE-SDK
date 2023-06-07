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
	 * BlueprintGeneratedClass Door_Stone.Door_Stone_C
	 * Size -> 0x0000 (FullSize[0x0B70] - InheritedSize[0x0B70])
	 */
	class ADoor_Stone_C : public ADoor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Door_Stone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
