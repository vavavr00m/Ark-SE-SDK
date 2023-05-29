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
	 * BlueprintGeneratedClass Buff_MinigunOverheat.Buff_MinigunOverheat_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class ABuff_MinigunOverheat_C : public APrimalBuff
	{
	public:
		float                                                      StaminaDrain;                                            // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickClient(float DeltaTime);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult);
		void UserConstructionScript();
		void StopStaminaDrain();
		void ExecuteUbergraph_Buff_MinigunOverheat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
