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
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.IsPlayerNearby
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bNearby                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AJerboa_Character_BP_C::IsPlayerNearby(bool* bNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.IsPlayerNearby");
		
		AJerboa_Character_BP_C_IsPlayerNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNearby != nullptr)
			*bNearby = params.bNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.BPTimerServer");
		
		AJerboa_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.UserConstructionScript");
		
		AJerboa_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Rain
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::PlayWeatherWarning_Rain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Rain");
		
		AJerboa_Character_BP_C_PlayWeatherWarning_Rain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Superheat
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::PlayWeatherWarning_Superheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Superheat");
		
		AJerboa_Character_BP_C_PlayWeatherWarning_Superheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_ElectricalStorm
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::PlayWeatherWarning_ElectricalStorm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_ElectricalStorm");
		
		AJerboa_Character_BP_C_PlayWeatherWarning_ElectricalStorm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Sandstorm
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::PlayWeatherWarning_Sandstorm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Sandstorm");
		
		AJerboa_Character_BP_C_PlayWeatherWarning_Sandstorm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Earthquake
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AJerboa_Character_BP_C::PlayWeatherWarning_Earthquake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Earthquake");
		
		AJerboa_Character_BP_C_PlayWeatherWarning_Earthquake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Jerboa_Character_BP.Jerboa_Character_BP_C.ExecuteUbergraph_Jerboa_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AJerboa_Character_BP_C::ExecuteUbergraph_Jerboa_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.ExecuteUbergraph_Jerboa_Character_BP");
		
		AJerboa_Character_BP_C_ExecuteUbergraph_Jerboa_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJerboa_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJerboa_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Jerboa_Character_BP.Jerboa_Character_BP_C");
		return ptr;
	}

}


