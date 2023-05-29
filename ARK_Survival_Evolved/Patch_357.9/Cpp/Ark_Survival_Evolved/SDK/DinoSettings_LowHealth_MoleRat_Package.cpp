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
	 * 		Name   -> Function DinoSettings_LowHealth_MoleRat.DinoSettings_LowHealth_MoleRat_C.ExecuteUbergraph_DinoSettings_LowHealth_MoleRat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_LowHealth_MoleRat_C::ExecuteUbergraph_DinoSettings_LowHealth_MoleRat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_LowHealth_MoleRat.DinoSettings_LowHealth_MoleRat_C.ExecuteUbergraph_DinoSettings_LowHealth_MoleRat");
		
		UDinoSettings_LowHealth_MoleRat_C_ExecuteUbergraph_DinoSettings_LowHealth_MoleRat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_LowHealth_MoleRat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_LowHealth_MoleRat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_LowHealth_MoleRat.DinoSettings_LowHealth_MoleRat_C");
		return ptr;
	}

}


