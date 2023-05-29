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
	 * 		Name   -> Function WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterPipe_Stone_Vertical_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C.UserConstructionScript");
		
		AWaterPipe_Stone_Vertical_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C.ExecuteUbergraph_WaterPipe_Stone_Vertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWaterPipe_Stone_Vertical_C::ExecuteUbergraph_WaterPipe_Stone_Vertical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C.ExecuteUbergraph_WaterPipe_Stone_Vertical");
		
		AWaterPipe_Stone_Vertical_C_ExecuteUbergraph_WaterPipe_Stone_Vertical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterPipe_Stone_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterPipe_Stone_Vertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C");
		return ptr;
	}

}


