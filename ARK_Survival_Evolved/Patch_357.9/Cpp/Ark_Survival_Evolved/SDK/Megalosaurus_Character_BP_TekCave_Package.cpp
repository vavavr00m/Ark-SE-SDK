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
	 * 		Name   -> Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_TekCave_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.UserConstructionScript");
		
		AMegalosaurus_Character_BP_TekCave_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.ExecuteUbergraph_Megalosaurus_Character_BP_TekCave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_TekCave_C::ExecuteUbergraph_Megalosaurus_Character_BP_TekCave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.ExecuteUbergraph_Megalosaurus_Character_BP_TekCave");
		
		AMegalosaurus_Character_BP_TekCave_C_ExecuteUbergraph_Megalosaurus_Character_BP_TekCave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegalosaurus_Character_BP_TekCave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegalosaurus_Character_BP_TekCave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C");
		return ptr;
	}

}


