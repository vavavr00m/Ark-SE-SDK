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
	 * BlueprintGeneratedClass Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C
	 * Size -> 0x00A8 (FullSize[0x0120] - InheritedSize[0x0078])
	 */
	class UZipline_ZiplineMoveTowardsTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		float                                                      AcceptanceRange;                                         // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUJV[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              RangeKey;                                                // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LocationOverride;                                        // 0x00A8(0x0028) Edit, BlueprintVisible
		bool                                                       UseLocationOverride;                                     // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRangeOverride;                                        // 0x00D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJW6[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00D8(0x0028) Edit, BlueprintVisible
		double                                                     LastBlockedTime;                                         // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UActorComponent*                                     ZiplineComponent;                                        // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABuff_Zipline_DinoBase_C*                            Buff;                                                    // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0118(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ZiplineMotorState                                        K2Node_Select_ReturnValue;                               // 0x0119(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x011A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HP09[0x1];                                   // 0x011B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x011C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveAbort(class AActor* OwnerActor);
		void ReceiveExecute(class AActor* OwnerActor);
		void TryToUnblock();
		void ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
