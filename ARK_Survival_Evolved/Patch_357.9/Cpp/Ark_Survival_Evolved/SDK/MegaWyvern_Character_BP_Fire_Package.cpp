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
	 * 		Name   -> Function MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegaWyvern_Character_BP_Fire_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C.UserConstructionScript");
		
		AMegaWyvern_Character_BP_Fire_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C.ExecuteUbergraph_MegaWyvern_Character_BP_Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegaWyvern_Character_BP_Fire_C::ExecuteUbergraph_MegaWyvern_Character_BP_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C.ExecuteUbergraph_MegaWyvern_Character_BP_Fire");
		
		AMegaWyvern_Character_BP_Fire_C_ExecuteUbergraph_MegaWyvern_Character_BP_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegaWyvern_Character_BP_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegaWyvern_Character_BP_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C");
		return ptr;
	}

}


