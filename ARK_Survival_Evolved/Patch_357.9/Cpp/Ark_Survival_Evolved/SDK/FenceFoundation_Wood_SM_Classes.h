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
	 * BlueprintGeneratedClass FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class AFenceFoundation_Wood_SM_C : public AFenceFoundation_Base_New_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_FenceFoundation_Wood_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
