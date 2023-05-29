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
	 * BlueprintGeneratedClass FeedingTrough.FeedingTrough_C
	 * Size -> 0x000C (FullSize[0x0EC0] - InheritedSize[0x0EB4])
	 */
	class AFeedingTrough_C : public AFeedingTroughBaseBP_C
	{
	public:
		unsigned char                                              UnknownData_HJNP[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalInventoryBP_FeedingTrough_C*                  PrimalInventoryBP_FeedingTrough_C1;                      // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_FeedingTrough(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
