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
	 * 		Name   -> Function BP_DoubleDoorframe_Adobe.BP_DoubleDoorframe_Adobe_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DoubleDoorframe_Adobe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Adobe.BP_DoubleDoorframe_Adobe_C.UserConstructionScript");
		
		ABP_DoubleDoorframe_Adobe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_DoubleDoorframe_Adobe.BP_DoubleDoorframe_Adobe_C.ExecuteUbergraph_BP_DoubleDoorframe_Adobe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DoubleDoorframe_Adobe_C::ExecuteUbergraph_BP_DoubleDoorframe_Adobe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Adobe.BP_DoubleDoorframe_Adobe_C.ExecuteUbergraph_BP_DoubleDoorframe_Adobe");
		
		ABP_DoubleDoorframe_Adobe_C_ExecuteUbergraph_BP_DoubleDoorframe_Adobe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DoubleDoorframe_Adobe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DoubleDoorframe_Adobe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoorframe_Adobe.BP_DoubleDoorframe_Adobe_C");
		return ptr;
	}

}


