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
	 * BlueprintGeneratedClass Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C
	 * Size -> 0x00B8 (FullSize[0x0130] - InheritedSize[0x0078])
	 */
	class UZipline_FindAttachPointForZipline_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetAnchor;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      FindGroundLocationStepDistance;                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttachDistance;                                          // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              NavigationPointKey;                                      // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AttachTargetPointKey;                                    // 0x00D0(0x0028) Edit, BlueprintVisible
		float                                                      MinDistanceToGround;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRYB[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0100(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0110(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x0120(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
