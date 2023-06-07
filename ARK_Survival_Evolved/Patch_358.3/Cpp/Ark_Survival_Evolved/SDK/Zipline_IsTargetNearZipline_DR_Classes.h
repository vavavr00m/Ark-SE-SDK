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
	 * BlueprintGeneratedClass Zipline_IsTargetNearZipline_DR.Zipline_IsTargetNearZipline_DR_C
	 * Size -> 0x00D0 (FullSize[0x0160] - InheritedSize[0x0090])
	 */
	class UZipline_IsTargetNearZipline_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		float                                                      TargetZiplineSearchRadius;                               // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VT3I[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ZiplinesNearTarget;                                      // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      ziplineSearchRadius;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DY1U[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AZipline_Anchor_C*                                   NewTargetAnchor;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              NewTargetAnchorKey;                                      // 0x00B8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NewTargetLocationKey;                                    // 0x00E0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NewTargetJumpOffLocation;                                // 0x0108(0x0028) Edit, BlueprintVisible
		float                                                      MinDistanceToTarget;                                     // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1BV[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x0138(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_IsTargetNearZipline_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
