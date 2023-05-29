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
	 * 		Name   -> Function DinoSettings_Herbivore_Medium_MoleRat.DinoSettings_Herbivore_Medium_MoleRat_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_MoleRat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Herbivore_Medium_MoleRat_C::ExecuteUbergraph_DinoSettings_Herbivore_Medium_MoleRat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Medium_MoleRat.DinoSettings_Herbivore_Medium_MoleRat_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_MoleRat");
		
		UDinoSettings_Herbivore_Medium_MoleRat_C_ExecuteUbergraph_DinoSettings_Herbivore_Medium_MoleRat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Herbivore_Medium_MoleRat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Herbivore_Medium_MoleRat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Medium_MoleRat.DinoSettings_Herbivore_Medium_MoleRat_C");
		return ptr;
	}

}


