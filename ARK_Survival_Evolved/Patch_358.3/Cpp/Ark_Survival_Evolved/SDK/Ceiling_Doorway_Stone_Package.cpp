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
	 * 		Name   -> Function Ceiling_Doorway_Stone.Ceiling_Doorway_Stone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACeiling_Doorway_Stone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Stone.Ceiling_Doorway_Stone_C.UserConstructionScript");
		
		ACeiling_Doorway_Stone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Ceiling_Doorway_Stone.Ceiling_Doorway_Stone_C.ExecuteUbergraph_Ceiling_Doorway_Stone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACeiling_Doorway_Stone_C::ExecuteUbergraph_Ceiling_Doorway_Stone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Stone.Ceiling_Doorway_Stone_C.ExecuteUbergraph_Ceiling_Doorway_Stone");
		
		ACeiling_Doorway_Stone_C_ExecuteUbergraph_Ceiling_Doorway_Stone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACeiling_Doorway_Stone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeiling_Doorway_Stone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Doorway_Stone.Ceiling_Doorway_Stone_C");
		return ptr;
	}

}


