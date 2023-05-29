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
	 * BlueprintGeneratedClass Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C
	 * Size -> 0x001C (FullSize[0x099C] - InheritedSize[0x0980])
	 */
	class ABuff_OnFire_VentHeat_C : public ABuff_OnFire_C
	{
	public:
		struct FVector                                             LaunchDirection;                                         // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Strength;                                                // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LaunchTime;                                              // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpulseMax;                                              // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void SetupVentHeat(const struct FVector& Direction, float Strength);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_OnFire_VentHeat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
