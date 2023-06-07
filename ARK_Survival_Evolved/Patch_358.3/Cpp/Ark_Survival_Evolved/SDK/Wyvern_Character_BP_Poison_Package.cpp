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
	 * 		Name   -> Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_Character_BP_Poison_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.UserConstructionScript");
		
		AWyvern_Character_BP_Poison_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.ExecuteUbergraph_Wyvern_Character_BP_Poison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_Character_BP_Poison_C::ExecuteUbergraph_Wyvern_Character_BP_Poison(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.ExecuteUbergraph_Wyvern_Character_BP_Poison");
		
		AWyvern_Character_BP_Poison_C_ExecuteUbergraph_Wyvern_Character_BP_Poison_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvern_Character_BP_Poison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvern_Character_BP_Poison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C");
		return ptr;
	}

}


