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
	 * BlueprintGeneratedClass Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C
	 * Size -> 0x0000 (FullSize[0x0A60] - InheritedSize[0x0A60])
	 */
	class ABuff_DireWolfPackLeader_C : public ABuff_DinoPackLeader_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_DireWolfPackLeader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
