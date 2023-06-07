/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasSaddle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFPV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideHUDinFPV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LaserLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxLaserLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LaserDowngradeTime                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LaserDowngradeTimerRemaining                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLaserDowngradeTimerActive                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastLaserLevelChangedTime                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SaddleFuelItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FlakCannonAmmoItem                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlightBoost                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FuelPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CannonCooldownPercent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EchoOrChaffCooldownPercent                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSubmerged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphinHUD_Interface_C::GetHudData(bool* HasSaddle, bool* isFPV, bool* HideHUDinFPV, int32_t* LaserLevel, int32_t* MaxLaserLevel, float* LaserDowngradeTime, float* LaserDowngradeTimerRemaining, bool* IsLaserDowngradeTimerActive, double* LastLaserLevelChangedTime, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* EchoOrChaffCooldownPercent, bool* IsSubmerged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C.GetHudData");
		
		USpaceDolphinHUD_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSaddle != nullptr)
			*HasSaddle = params.HasSaddle;
		if (isFPV != nullptr)
			*isFPV = params.isFPV;
		if (HideHUDinFPV != nullptr)
			*HideHUDinFPV = params.HideHUDinFPV;
		if (LaserLevel != nullptr)
			*LaserLevel = params.LaserLevel;
		if (MaxLaserLevel != nullptr)
			*MaxLaserLevel = params.MaxLaserLevel;
		if (LaserDowngradeTime != nullptr)
			*LaserDowngradeTime = params.LaserDowngradeTime;
		if (LaserDowngradeTimerRemaining != nullptr)
			*LaserDowngradeTimerRemaining = params.LaserDowngradeTimerRemaining;
		if (IsLaserDowngradeTimerActive != nullptr)
			*IsLaserDowngradeTimerActive = params.IsLaserDowngradeTimerActive;
		if (LastLaserLevelChangedTime != nullptr)
			*LastLaserLevelChangedTime = params.LastLaserLevelChangedTime;
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
		if (EchoOrChaffCooldownPercent != nullptr)
			*EchoOrChaffCooldownPercent = params.EchoOrChaffCooldownPercent;
		if (IsSubmerged != nullptr)
			*IsSubmerged = params.IsSubmerged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceDolphinHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceDolphinHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C");
		return ptr;
	}

}


