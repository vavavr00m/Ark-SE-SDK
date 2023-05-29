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
	 * 		Name   -> Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ABuff_MammothPassenger_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle");
		
		ABuff_MammothPassenger_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MammothPassenger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript");
		
		ABuff_MammothPassenger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MammothPassenger_C::ExecuteUbergraph_Buff_MammothPassenger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger");
		
		ABuff_MammothPassenger_C_ExecuteUbergraph_Buff_MammothPassenger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MammothPassenger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MammothPassenger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MammothPassenger.Buff_MammothPassenger_C");
		return ptr;
	}

}


