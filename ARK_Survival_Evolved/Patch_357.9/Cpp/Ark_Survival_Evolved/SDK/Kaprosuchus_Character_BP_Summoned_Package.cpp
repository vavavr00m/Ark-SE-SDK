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
	 * 		Name   -> Function Kaprosuchus_Character_BP_Summoned.Kaprosuchus_Character_BP_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AKaprosuchus_Character_BP_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP_Summoned.Kaprosuchus_Character_BP_Summoned_C.UserConstructionScript");
		
		AKaprosuchus_Character_BP_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Kaprosuchus_Character_BP_Summoned.Kaprosuchus_Character_BP_Summoned_C.ExecuteUbergraph_Kaprosuchus_Character_BP_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKaprosuchus_Character_BP_Summoned_C::ExecuteUbergraph_Kaprosuchus_Character_BP_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP_Summoned.Kaprosuchus_Character_BP_Summoned_C.ExecuteUbergraph_Kaprosuchus_Character_BP_Summoned");
		
		AKaprosuchus_Character_BP_Summoned_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKaprosuchus_Character_BP_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKaprosuchus_Character_BP_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Kaprosuchus_Character_BP_Summoned.Kaprosuchus_Character_BP_Summoned_C");
		return ptr;
	}

}


