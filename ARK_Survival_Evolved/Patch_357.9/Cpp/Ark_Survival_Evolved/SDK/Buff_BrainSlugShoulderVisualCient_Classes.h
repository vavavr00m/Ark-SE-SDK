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
	 * BlueprintGeneratedClass Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C
	 * Size -> 0x0014 (FullSize[0x0994] - InheritedSize[0x0980])
	 */
	class ABuff_BrainSlugShoulderVisualCient_C : public ABuff_Base_C
	{
	public:
		struct FLinearColor                                        CrosshairColor;                                          // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTime;                                  // 0x0990(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void UserConstructionScript();
		void BuffTickClient(float DeltaTime);
		void ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
