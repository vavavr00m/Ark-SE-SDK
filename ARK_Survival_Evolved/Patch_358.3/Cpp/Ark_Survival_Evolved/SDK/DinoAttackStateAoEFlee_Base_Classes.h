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
	 * BlueprintGeneratedClass DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C
	 * Size -> 0x0012 (FullSize[0x006A] - InheritedSize[0x0058])
	 */
	class UDinoAttackStateAoEFlee_Base_C : public UPrimalAIState
	{
	public:
		class UClass*                                              FrightenCooldownBuffClass;                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FrightenBuffToApply;                                     // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DontApplyToEnemyTamesOnPVEServer;                        // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShouldFrightenMounted;                                  // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetOctreeGroup(EServerOctreeGroup* OctreeGroup);
		void OnTickEvent(float DeltaSeconds);
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void GetAoERadius(float* Radius);
		void FindCharactersToFrighten(TArray<class APrimalCharacter*>* Characters);
		void ShouldFrightenCharacter(class APrimalCharacter* Character, bool* ShouldFrighten);
		void IsOnCooldown(bool* OnCooldown);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void ExecuteUbergraph_DinoAttackStateAoEFlee_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
