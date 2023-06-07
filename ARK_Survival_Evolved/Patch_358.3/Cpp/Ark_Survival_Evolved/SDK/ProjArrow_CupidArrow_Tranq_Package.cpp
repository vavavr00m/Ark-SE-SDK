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
	 * 		Name   -> Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjArrow_CupidArrow_Tranq_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.OnExplode");
		
		AProjArrow_CupidArrow_Tranq_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjArrow_CupidArrow_Tranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.UserConstructionScript");
		
		AProjArrow_CupidArrow_Tranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.ExecuteUbergraph_ProjArrow_CupidArrow_Tranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjArrow_CupidArrow_Tranq_C::ExecuteUbergraph_ProjArrow_CupidArrow_Tranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C.ExecuteUbergraph_ProjArrow_CupidArrow_Tranq");
		
		AProjArrow_CupidArrow_Tranq_C_ExecuteUbergraph_ProjArrow_CupidArrow_Tranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjArrow_CupidArrow_Tranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjArrow_CupidArrow_Tranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C");
		return ptr;
	}

}


