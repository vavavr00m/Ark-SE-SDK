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
	 * BlueprintGeneratedClass Buff_Ignite.Buff_Ignite_C
	 * Size -> 0x0060 (FullSize[0x09E0] - InheritedSize[0x0980])
	 */
	class ABuff_Ignite_C : public ABuff_Base_C
	{
	public:
		float                                                      CurrentIgniteValue;                                      // 0x0980(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddIgniteThrottleTime;                                   // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldCauseFire;                                         // 0x0988(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FL3C[0x7];                                   // 0x0989(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAddIgniteTime;                                       // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              FireBuff;                                                // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ExtinguishSpeed;                                         // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeleeIncToAmount;                                        // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DOTDamage;                                               // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x09B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x09B5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x09B6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CE8G[0x1];                                   // 0x09B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Time2;                                // 0x09B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Amount;                               // 0x09BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Time;                                 // 0x09C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_ExtendBuffTime_ReturnValue;                     // 0x09C4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x09C5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TUYT[0x2];                                   // 0x09C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x09C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x09CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x09D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_FloatToVector_ReturnValue;                 // 0x09D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void MeleeIncIgnite();
		void UpdateBuffDescription();
		struct FStatusValueModifierDescription GetBuffDescription();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		float GetBuffPostprocessIntensity();
		void BuffTickClient(float DeltaTime);
		void Initialize();
		void BuffTickServer(float DeltaTime);
		void ApplyOnFireDebuff();
		void AddIgnite(float amount, float Time);
		void CheckDeactivateCondition();
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void MultiExtendBuffTime(float Time);
		void MultiAddIgnite(float amount, float Time);
		void ReceiveBeginPlay();
		void ApplyOnFire();
		void ChangeIgniteVFX();
		void ExecuteUbergraph_Buff_Ignite(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
