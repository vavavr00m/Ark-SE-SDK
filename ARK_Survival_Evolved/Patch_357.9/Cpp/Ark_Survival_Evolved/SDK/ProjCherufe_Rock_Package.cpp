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
	 * 		Name   -> Function ProjCherufe_Rock.ProjCherufe_Rock_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjCherufe_Rock_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCherufe_Rock.ProjCherufe_Rock_C.UserConstructionScript");
		
		AProjCherufe_Rock_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjCherufe_Rock.ProjCherufe_Rock_C.ExecuteUbergraph_ProjCherufe_Rock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjCherufe_Rock_C::ExecuteUbergraph_ProjCherufe_Rock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCherufe_Rock.ProjCherufe_Rock_C.ExecuteUbergraph_ProjCherufe_Rock");
		
		AProjCherufe_Rock_C_ExecuteUbergraph_ProjCherufe_Rock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjCherufe_Rock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjCherufe_Rock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjCherufe_Rock.ProjCherufe_Rock_C");
		return ptr;
	}

}


