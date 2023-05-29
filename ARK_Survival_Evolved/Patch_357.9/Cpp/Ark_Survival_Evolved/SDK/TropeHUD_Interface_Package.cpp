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
	 * 		Name   -> Function TropeHUD_Interface.TropeHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasSaddle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SaddleFuelItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FlakCannonAmmoItem                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlightBoost                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FuelPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CannonCooldownPercent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SpeedPercent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTropeHUD_Interface_C::GetHudData(bool* HasSaddle, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* SpeedPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TropeHUD_Interface.TropeHUD_Interface_C.GetHudData");
		
		UTropeHUD_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSaddle != nullptr)
			*HasSaddle = params.HasSaddle;
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (SaddleFuelItem != nullptr)
			*SaddleFuelItem = params.SaddleFuelItem;
		if (FlakCannonAmmoItem != nullptr)
			*FlakCannonAmmoItem = params.FlakCannonAmmoItem;
		if (IsUsingSuperFlight != nullptr)
			*IsUsingSuperFlight = params.IsUsingSuperFlight;
		if (IsUsingSuperFlightBoost != nullptr)
			*IsUsingSuperFlightBoost = params.IsUsingSuperFlightBoost;
		if (FuelPercent != nullptr)
			*FuelPercent = params.FuelPercent;
		if (CannonCooldownPercent != nullptr)
			*CannonCooldownPercent = params.CannonCooldownPercent;
		if (SpeedPercent != nullptr)
			*SpeedPercent = params.SpeedPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTropeHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTropeHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TropeHUD_Interface.TropeHUD_Interface_C");
		return ptr;
	}

}


