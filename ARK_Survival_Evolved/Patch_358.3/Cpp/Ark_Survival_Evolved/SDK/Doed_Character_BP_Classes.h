﻿#pragma once

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
	 * BlueprintGeneratedClass Doed_Character_BP.Doed_Character_BP_C
	 * Size -> 0x0018 (FullSize[0x22A0] - InheritedSize[0x2288])
	 */
	class ADoed_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Doed_C*             DinoCharacterStatus_BP_Doed_C1;                          // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x2290(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C668[0x7];                                   // 0x2291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CallFunc_K2_GetRootComponent_ReturnValue;                // 0x2298(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		struct FVector BPChargingModifyInputAcceleration(const struct FVector& inputAcceleration);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void UserConstructionScript();
		void AnimNotify_EndCharge();
		void ExecuteUbergraph_Doed_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
