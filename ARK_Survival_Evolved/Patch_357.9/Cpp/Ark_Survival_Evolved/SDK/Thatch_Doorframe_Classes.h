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
	 * BlueprintGeneratedClass Thatch_Doorframe.Thatch_Doorframe_C
	 * Size -> 0x0000 (FullSize[0x0AF8] - InheritedSize[0x0AF8])
	 */
	class AThatch_Doorframe_C : public ADoorframe_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Thatch_Doorframe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
