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
	 * 		Name   -> Function BeeHive_Placement_Emitter.BeeHive_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_Placement_Emitter.BeeHive_Placement_Emitter_C.UserConstructionScript");
		
		ABeeHive_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_Placement_Emitter.BeeHive_Placement_Emitter_C.ExecuteUbergraph_BeeHive_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABeeHive_Placement_Emitter_C::ExecuteUbergraph_BeeHive_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_Placement_Emitter.BeeHive_Placement_Emitter_C.ExecuteUbergraph_BeeHive_Placement_Emitter");
		
		ABeeHive_Placement_Emitter_C_ExecuteUbergraph_BeeHive_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABeeHive_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABeeHive_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BeeHive_Placement_Emitter.BeeHive_Placement_Emitter_C");
		return ptr;
	}

}


