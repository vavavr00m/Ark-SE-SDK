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
	 * 		Name   -> Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjWyvPoisonBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.UserConstructionScript");
		
		AProjWyvPoisonBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.ExecuteUbergraph_ProjWyvPoisonBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjWyvPoisonBall_C::ExecuteUbergraph_ProjWyvPoisonBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.ExecuteUbergraph_ProjWyvPoisonBall");
		
		AProjWyvPoisonBall_C_ExecuteUbergraph_ProjWyvPoisonBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjWyvPoisonBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjWyvPoisonBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjWyvPoisonBall.ProjWyvPoisonBall_C");
		return ptr;
	}

}


