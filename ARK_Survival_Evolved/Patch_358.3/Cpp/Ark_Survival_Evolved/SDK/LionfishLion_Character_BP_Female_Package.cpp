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
	 * 		Name   -> Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_Female_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.UserConstructionScript");
		
		ALionfishLion_Character_BP_Female_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.ExecuteUbergraph_LionfishLion_Character_BP_Female
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_Female_C::ExecuteUbergraph_LionfishLion_Character_BP_Female(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.ExecuteUbergraph_LionfishLion_Character_BP_Female");
		
		ALionfishLion_Character_BP_Female_C_ExecuteUbergraph_LionfishLion_Character_BP_Female_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALionfishLion_Character_BP_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALionfishLion_Character_BP_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C");
		return ptr;
	}

}


