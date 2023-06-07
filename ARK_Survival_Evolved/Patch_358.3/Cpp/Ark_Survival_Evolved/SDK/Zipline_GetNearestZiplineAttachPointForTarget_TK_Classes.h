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
	 * BlueprintGeneratedClass Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C
	 * Size -> 0x00D0 (FullSize[0x0148] - InheritedSize[0x0078])
	 */
	class UZipline_GetNearestZiplineAttachPointForTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              NavTargetKey;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      AttachDistance;                                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NTJX[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Pawn;                                                    // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         TargetBuff;                                              // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FindGroundLocationStepDistance;                          // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WC2K[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              AttachTargetPointKey;                                    // 0x00C0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00E8(0x0028) Edit, BlueprintVisible
		float                                                      MinDistanceToGround;                                     // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RDJ7[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0118(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0128(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x0138(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
