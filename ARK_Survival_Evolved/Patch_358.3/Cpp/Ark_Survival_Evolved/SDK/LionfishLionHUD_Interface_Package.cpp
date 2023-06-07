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
	 * 		Name   -> Function LionfishLionHUD_Interface.LionfishLionHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AttackComboPercent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxComboFlashingSpeed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastUncloakTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakCooldown                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFemale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCamoActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastRoarBuffTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RoarBuffCooldown                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasMateBoost                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastTimeReleasedTeleport                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TeleportCooldown                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TeleportPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCurrentlyChargingTeleport                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            LatestQuickteleportTarget                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LeapCooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastLeapTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LeapPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULionfishLionHUD_Interface_C::GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLionHUD_Interface.LionfishLionHUD_Interface_C.GetHudData");
		
		ULionfishLionHUD_Interface_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackComboPercent != nullptr)
			*AttackComboPercent = params.AttackComboPercent;
		if (MaxComboFlashingSpeed != nullptr)
			*MaxComboFlashingSpeed = params.MaxComboFlashingSpeed;
		if (LastUncloakTime != nullptr)
			*LastUncloakTime = params.LastUncloakTime;
		if (CloakCooldown != nullptr)
			*CloakCooldown = params.CloakCooldown;
		if (IsFemale != nullptr)
			*IsFemale = params.IsFemale;
		if (IsCamoActive != nullptr)
			*IsCamoActive = params.IsCamoActive;
		if (LastRoarBuffTime != nullptr)
			*LastRoarBuffTime = params.LastRoarBuffTime;
		if (RoarBuffCooldown != nullptr)
			*RoarBuffCooldown = params.RoarBuffCooldown;
		if (HasMateBoost != nullptr)
			*HasMateBoost = params.HasMateBoost;
		if (LastTimeReleasedTeleport != nullptr)
			*LastTimeReleasedTeleport = params.LastTimeReleasedTeleport;
		if (TeleportCooldown != nullptr)
			*TeleportCooldown = params.TeleportCooldown;
		if (TeleportPercent != nullptr)
			*TeleportPercent = params.TeleportPercent;
		if (IsCurrentlyChargingTeleport != nullptr)
			*IsCurrentlyChargingTeleport = params.IsCurrentlyChargingTeleport;
		if (LatestQuickteleportTarget != nullptr)
			*LatestQuickteleportTarget = params.LatestQuickteleportTarget;
		if (LeapCooldown != nullptr)
			*LeapCooldown = params.LeapCooldown;
		if (LastLeapTime != nullptr)
			*LastLeapTime = params.LastLeapTime;
		if (LeapPercent != nullptr)
			*LeapPercent = params.LeapPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULionfishLionHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULionfishLionHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLionHUD_Interface.LionfishLionHUD_Interface_C");
		return ptr;
	}

}


