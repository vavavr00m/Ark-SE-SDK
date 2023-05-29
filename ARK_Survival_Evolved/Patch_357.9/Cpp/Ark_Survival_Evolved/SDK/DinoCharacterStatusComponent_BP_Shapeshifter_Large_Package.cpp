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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_Shapeshifter_Large.DinoCharacterStatusComponent_BP_Shapeshifter_Large_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_BP_Shapeshifter_Large_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Shapeshifter_Large.DinoCharacterStatusComponent_BP_Shapeshifter_Large_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Large");
		
		UDinoCharacterStatusComponent_BP_Shapeshifter_Large_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Shapeshifter_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_Shapeshifter_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_Shapeshifter_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Shapeshifter_Large.DinoCharacterStatusComponent_BP_Shapeshifter_Large_C");
		return ptr;
	}

}


