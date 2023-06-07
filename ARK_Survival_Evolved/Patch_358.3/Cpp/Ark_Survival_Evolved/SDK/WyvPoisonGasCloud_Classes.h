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
	 * BlueprintGeneratedClass WyvPoisonGasCloud.WyvPoisonGasCloud_C
	 * Size -> 0x0008 (FullSize[0x0990] - InheritedSize[0x0988])
	 */
	class AWyvPoisonGasCloud_C : public ABuff_Base_AoE_C
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WyvPoisonGasCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
