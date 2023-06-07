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
	 * BlueprintGeneratedClass Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class ABuff_FishingNetStopMovement_C : public APrimalBuff
	{
	public:
		struct FRotator                                            clamprotationcenter;                                     // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClampedYawAngle;                                         // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpecialClampedYawMax;                                    // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpecialClampedYawMin;                                    // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPHandleOnStopFire(bool bFromGamepad);
		void ReceiveBeginPlay();
		void BuffTickClient(float DeltaTime);
		bool BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void BuffTickServer(float DeltaTime);
		void BPHandleOnStartFire(bool bFromGamepad);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_FishingNetStopMovement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
