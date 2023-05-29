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
	 * 		Name   -> Function LionfishLion_AnimBlueprint_Swimmable.LionfishLion_AnimBlueprint_Swimmable_C.ExecuteUbergraph_LionfishLion_AnimBlueprint_Swimmable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULionfishLion_AnimBlueprint_Swimmable_C::ExecuteUbergraph_LionfishLion_AnimBlueprint_Swimmable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_AnimBlueprint_Swimmable.LionfishLion_AnimBlueprint_Swimmable_C.ExecuteUbergraph_LionfishLion_AnimBlueprint_Swimmable");
		
		ULionfishLion_AnimBlueprint_Swimmable_C_ExecuteUbergraph_LionfishLion_AnimBlueprint_Swimmable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULionfishLion_AnimBlueprint_Swimmable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULionfishLion_AnimBlueprint_Swimmable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass LionfishLion_AnimBlueprint_Swimmable.LionfishLion_AnimBlueprint_Swimmable_C");
		return ptr;
	}

}


