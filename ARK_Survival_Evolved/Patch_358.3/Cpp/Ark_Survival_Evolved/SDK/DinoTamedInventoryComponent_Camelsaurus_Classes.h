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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Camelsaurus_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		class Acamelsaurus_Character_BP_C*                         CamelSaurusCharacter;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPInitializeInventory();
		void TakeWaterFromContainers(float AmountToTake, float* TakenAmount);
		void FillWaterContainers(float WaterAmount, float* WaterAmountLeft);
		void ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
