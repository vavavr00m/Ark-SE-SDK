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
	 * BlueprintGeneratedClass Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C
	 * Size -> 0x0000 (FullSize[0x0ED0] - InheritedSize[0x0ED0])
	 */
	class ABuff_FearCourage_WildYutyrannus_C : public ABuff_FearCourage_C
	{
	public:
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_FearCourage_WildYutyrannus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
