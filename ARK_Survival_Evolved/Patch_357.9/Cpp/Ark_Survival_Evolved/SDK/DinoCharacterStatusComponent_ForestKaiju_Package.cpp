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
	 * 		Name   -> Function DinoCharacterStatusComponent_ForestKaiju.DinoCharacterStatusComponent_ForestKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_ForestKaiju_C::ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_ForestKaiju.DinoCharacterStatusComponent_ForestKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju");
		
		UDinoCharacterStatusComponent_ForestKaiju_C_ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_ForestKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_ForestKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_ForestKaiju.DinoCharacterStatusComponent_ForestKaiju_C");
		return ptr;
	}

}


