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
	 * 		Name   -> Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoOrderEmitter_FollowTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.UserConstructionScript");
		
		ADinoOrderEmitter_FollowTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.ExecuteUbergraph_DinoOrderEmitter_FollowTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoOrderEmitter_FollowTarget_C::ExecuteUbergraph_DinoOrderEmitter_FollowTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.ExecuteUbergraph_DinoOrderEmitter_FollowTarget");
		
		ADinoOrderEmitter_FollowTarget_C_ExecuteUbergraph_DinoOrderEmitter_FollowTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADinoOrderEmitter_FollowTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADinoOrderEmitter_FollowTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C");
		return ptr;
	}

}


