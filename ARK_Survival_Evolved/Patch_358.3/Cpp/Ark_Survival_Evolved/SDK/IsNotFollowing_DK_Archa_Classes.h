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
	 * BlueprintGeneratedClass IsNotFollowing_DK_Archa.IsNotFollowing_DK_Archa_C
	 * Size -> 0x0061 (FullSize[0x00F1] - InheritedSize[0x0090])
	 */
	class UIsNotFollowing_DK_Archa_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              NavigationTargetObjectKey;                               // 0x0090(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class AActor*                                              K2Node_Event_OwnerActor;                                 // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x00C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NNS5[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x00E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PSY[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetTamedFollowTarget_ReturnValue;               // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x00F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_IsNotFollowing_DK_Archa(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
