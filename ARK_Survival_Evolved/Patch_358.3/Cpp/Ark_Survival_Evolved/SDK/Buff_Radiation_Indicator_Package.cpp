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
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 OtherBuff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::BPNotifyOtherBuffDeactivated(class APrimalBuff* OtherBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated");
		
		ABuff_Radiation_Indicator_C_BPNotifyOtherBuffDeactivated_Params params {};
		params.OtherBuff = OtherBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 OtherBuff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated");
		
		ABuff_Radiation_Indicator_C_BPNotifyOtherBuffActivated_Params params {};
		params.OtherBuff = OtherBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator");
		
		ABuff_Radiation_Indicator_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HideIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MuteSound                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::SetRadiationIndicatorHidden(bool HideIcon, bool MuteSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden");
		
		ABuff_Radiation_Indicator_C_SetRadiationIndicatorHidden_Params params {};
		params.HideIcon = HideIcon;
		params.MuteSound = MuteSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer");
		
		ABuff_Radiation_Indicator_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AStorageBox_TekShield_C*                     TekShield                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInsideShield                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::IsInstigatorNearTekForcefield(class AStorageBox_TekShield_C* TekShield, bool* IsInsideShield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield");
		
		ABuff_Radiation_Indicator_C_IsInstigatorNearTekForcefield_Params params {};
		params.TekShield = TekShield;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInsideShield != nullptr)
			*IsInsideShield = params.IsInsideShield;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient");
		
		ABuff_Radiation_Indicator_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Radiation_Indicator_C::BPResetBuffStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart");
		
		ABuff_Radiation_Indicator_C_BPResetBuffStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Radiation_Indicator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript");
		
		ABuff_Radiation_Indicator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Radiation_Indicator_C::ExecuteUbergraph_Buff_Radiation_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator");
		
		ABuff_Radiation_Indicator_C_ExecuteUbergraph_Buff_Radiation_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Radiation_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Radiation_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Radiation_Indicator.Buff_Radiation_Indicator_C");
		return ptr;
	}

}


