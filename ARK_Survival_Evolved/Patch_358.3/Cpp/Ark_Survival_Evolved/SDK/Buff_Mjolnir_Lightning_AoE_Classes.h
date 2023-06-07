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
	 * BlueprintGeneratedClass Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C
	 * Size -> 0x0028 (FullSize[0x09B0] - InheritedSize[0x0988])
	 */
	class ABuff_Mjolnir_Lightning_AoE_C : public ABuff_Base_AoE_C
	{
	public:
		float                                                      maxDragWeightToApplyStunBuff;                            // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AoEInitialized;                                          // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_47PZ[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      maxDistanceToApplyBuffForPlayers;                        // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      emitterAngle;                                            // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EffectRadius;                                            // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4DZR[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNewActorAdded;                                         // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsActorInEffectiveRange(class AActor* Actor, bool* IsInRange);
		void InitializeAoE();
		void CanAffectCharacter(class APrimalCharacter* characterToAffect, bool* canStun);
		bool BPExcludeAoEActor(class AActor* ActorToConsider);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE(int32_t EntryPoint);
		void OnNewActorAdded__DelegateSignature(class AActor* forActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
