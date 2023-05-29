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
	 * BlueprintGeneratedClass BP_ShipRoot.BP_ShipRoot_C
	 * Size -> 0x005A (FullSize[0x04C2] - InheritedSize[0x0468])
	 */
	class ABP_ShipRoot_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                Root;                                                    // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Scene1;                                                  // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ADayCycleManager_Gen2_C*                             DayCycle;                                                // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BufferForTrailerOverride;                                // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FIO6[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarpTimeMPC;                                             // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      WarpMPC;                                                 // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_BB3F[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMatineeActor*>                               Matinees;                                                // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		float                                                      ShipSails;                                               // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x04A4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x04B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x04C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x04C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetMatineeLengthsAndPlayRates(struct FVector2D* WarmUp, struct FVector2D* Loop, struct FVector2D* Cooldown);
		void BindDCM();
		void UserConstructionScript();
		void BindMatineeUpdateFromDCM();
		void OnDCMUpdated();
		void ReceiveBeginPlay();
		void RecieveMatineeUpdated();
		void ExecuteUbergraph_BP_ShipRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
