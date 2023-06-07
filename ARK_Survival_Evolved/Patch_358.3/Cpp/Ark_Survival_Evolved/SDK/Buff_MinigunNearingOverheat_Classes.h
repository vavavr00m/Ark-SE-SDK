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
	 * BlueprintGeneratedClass Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C
	 * Size -> 0x0020 (FullSize[0x09A0] - InheritedSize[0x0980])
	 */
	class ABuff_MinigunNearingOverheat_C : public APrimalBuff
	{
	public:
		float                                                      StaminaDrain;                                            // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XYL2[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            NearlyOverheatPostProcess;                               // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         StaminaPercentToNearlyOverheatPostProcessIntensity_Curve; // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         StaminaPercentToNearlyOverheatParticleIntensity_Curve;   // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void BuffTickClient(float DeltaTime);
		float GetBuffPostprocessIntensity();
		bool AllowPostProcessEffect();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_MinigunNearingOverheat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
