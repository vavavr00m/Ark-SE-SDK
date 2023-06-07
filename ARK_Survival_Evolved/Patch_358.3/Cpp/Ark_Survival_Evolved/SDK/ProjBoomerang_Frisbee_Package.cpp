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
	 * 		Name   -> Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjBoomerang_Frisbee_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.UserConstructionScript");
		
		AProjBoomerang_Frisbee_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.ExecuteUbergraph_ProjBoomerang_Frisbee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjBoomerang_Frisbee_C::ExecuteUbergraph_ProjBoomerang_Frisbee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.ExecuteUbergraph_ProjBoomerang_Frisbee");
		
		AProjBoomerang_Frisbee_C_ExecuteUbergraph_ProjBoomerang_Frisbee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjBoomerang_Frisbee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjBoomerang_Frisbee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C");
		return ptr;
	}

}


