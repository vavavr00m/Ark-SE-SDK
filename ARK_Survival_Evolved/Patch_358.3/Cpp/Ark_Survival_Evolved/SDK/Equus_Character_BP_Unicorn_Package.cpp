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
	 * 		Name   -> Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquus_Character_BP_Unicorn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.UserConstructionScript");
		
		AEquus_Character_BP_Unicorn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.ExecuteUbergraph_Equus_Character_BP_Unicorn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEquus_Character_BP_Unicorn_C::ExecuteUbergraph_Equus_Character_BP_Unicorn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.ExecuteUbergraph_Equus_Character_BP_Unicorn");
		
		AEquus_Character_BP_Unicorn_C_ExecuteUbergraph_Equus_Character_BP_Unicorn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquus_Character_BP_Unicorn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquus_Character_BP_Unicorn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C");
		return ptr;
	}

}


