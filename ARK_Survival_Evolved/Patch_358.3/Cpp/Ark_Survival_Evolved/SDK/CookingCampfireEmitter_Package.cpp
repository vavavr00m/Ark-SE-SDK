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
	 * 		Name   -> Function CookingCampfireEmitter.CookingCampfireEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACookingCampfireEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CookingCampfireEmitter.CookingCampfireEmitter_C.UserConstructionScript");
		
		ACookingCampfireEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CookingCampfireEmitter.CookingCampfireEmitter_C.ExecuteUbergraph_CookingCampfireEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACookingCampfireEmitter_C::ExecuteUbergraph_CookingCampfireEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CookingCampfireEmitter.CookingCampfireEmitter_C.ExecuteUbergraph_CookingCampfireEmitter");
		
		ACookingCampfireEmitter_C_ExecuteUbergraph_CookingCampfireEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACookingCampfireEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACookingCampfireEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CookingCampfireEmitter.CookingCampfireEmitter_C");
		return ptr;
	}

}


