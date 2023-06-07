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
	 * 		Name   -> Function DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Herbivore_Small_Moth_C::ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth");
		
		UDinoSettings_Herbivore_Small_Moth_C_ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Herbivore_Small_Moth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Herbivore_Small_Moth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C");
		return ptr;
	}

}


