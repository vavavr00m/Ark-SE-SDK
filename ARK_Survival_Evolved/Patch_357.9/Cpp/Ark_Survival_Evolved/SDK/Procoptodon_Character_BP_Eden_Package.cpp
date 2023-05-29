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
	 * 		Name   -> Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_Eden_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.UserConstructionScript");
		
		AProcoptodon_Character_BP_Eden_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.ExecuteUbergraph_Procoptodon_Character_BP_Eden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_Eden_C::ExecuteUbergraph_Procoptodon_Character_BP_Eden(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.ExecuteUbergraph_Procoptodon_Character_BP_Eden");
		
		AProcoptodon_Character_BP_Eden_C_ExecuteUbergraph_Procoptodon_Character_BP_Eden_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProcoptodon_Character_BP_Eden_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProcoptodon_Character_BP_Eden_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C");
		return ptr;
	}

}


