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
	 * BlueprintGeneratedClass Buff_BasilReplaceAttackTargetingAndFollowDistance.Buff_BasilReplaceAttackTargetingAndFollowDistance_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class ABuff_BasilReplaceAttackTargetingAndFollowDistance_C : public ABuff_Base_C
	{
	public:
		float                                                      ReplacementTargetingRange;                               // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OldAttackDistance;                                       // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ReplacementFollowingStopDistance;                        // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OldFollowingStopDistance;                                // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinFollowStopDistance;                                   // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxFollowStopDistance;                                   // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_BasilReplaceAttackTargetingAndFollowDistance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
