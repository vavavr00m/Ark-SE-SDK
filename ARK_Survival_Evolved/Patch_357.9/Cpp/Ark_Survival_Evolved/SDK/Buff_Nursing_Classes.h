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
	 * BlueprintGeneratedClass Buff_Nursing.Buff_Nursing_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class ABuff_Nursing_C : public ABuff_Base_C
	{
	public:
		float                                                      BuffImprintingEffectivenessMultiplier;                   // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPGetBabyImprintingSpeedMultiplier();
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Nursing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
