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
	 * 		Name   -> Function ProjSpear_Carrot.ProjSpear_Carrot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpear_Carrot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpear_Carrot.ProjSpear_Carrot_C.UserConstructionScript");
		
		AProjSpear_Carrot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjSpear_Carrot.ProjSpear_Carrot_C.ExecuteUbergraph_ProjSpear_Carrot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpear_Carrot_C::ExecuteUbergraph_ProjSpear_Carrot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpear_Carrot.ProjSpear_Carrot_C.ExecuteUbergraph_ProjSpear_Carrot");
		
		AProjSpear_Carrot_C_ExecuteUbergraph_ProjSpear_Carrot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjSpear_Carrot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjSpear_Carrot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpear_Carrot.ProjSpear_Carrot_C");
		return ptr;
	}

}


