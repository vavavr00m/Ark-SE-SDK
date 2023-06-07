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
	 * 		Name   -> Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjPhoenixFireBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.UserConstructionScript");
		
		AProjPhoenixFireBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.ExecuteUbergraph_ProjPhoenixFireBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjPhoenixFireBall_C::ExecuteUbergraph_ProjPhoenixFireBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.ExecuteUbergraph_ProjPhoenixFireBall");
		
		AProjPhoenixFireBall_C_ExecuteUbergraph_ProjPhoenixFireBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjPhoenixFireBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjPhoenixFireBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjPhoenixFireBall.ProjPhoenixFireBall_C");
		return ptr;
	}

}


