/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ExosuitHUD_Interface.ExosuitHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsesChestBeam                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanUseChestbeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ChestBeamEnergyPercent                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChestBeamState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FuelItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EnergyPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPreparingJump                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExosuitHUD_Interface_C::GetHudData(bool* bUsesChestBeam, bool* bCanUseChestbeam, float* ChestBeamEnergyPercent, int32_t* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int32_t* CurrentMode, bool* bIsPreparingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD_Interface.ExosuitHUD_Interface_C.GetHudData");
		
		UExosuitHUD_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsesChestBeam != nullptr)
			*bUsesChestBeam = params.bUsesChestBeam;
		if (bCanUseChestbeam != nullptr)
			*bCanUseChestbeam = params.bCanUseChestbeam;
		if (ChestBeamEnergyPercent != nullptr)
			*ChestBeamEnergyPercent = params.ChestBeamEnergyPercent;
		if (ChestBeamState != nullptr)
			*ChestBeamState = params.ChestBeamState;
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (FuelItem != nullptr)
			*FuelItem = params.FuelItem;
		if (EnergyPercent != nullptr)
			*EnergyPercent = params.EnergyPercent;
		if (CurrentMode != nullptr)
			*CurrentMode = params.CurrentMode;
		if (bIsPreparingJump != nullptr)
			*bIsPreparingJump = params.bIsPreparingJump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExosuitHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExosuitHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExosuitHUD_Interface.ExosuitHUD_Interface_C");
		return ptr;
	}

}


