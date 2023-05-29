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
	 * 		Name   -> Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_HackingSuccess_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.UserConstructionScript");
		
		ABuff_Strider_BodyVFX_HackingSuccess_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Strider_BodyVFX_HackingSuccess_C::ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess");
		
		ABuff_Strider_BodyVFX_HackingSuccess_C_ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Strider_BodyVFX_HackingSuccess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Strider_BodyVFX_HackingSuccess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C");
		return ptr;
	}

}


