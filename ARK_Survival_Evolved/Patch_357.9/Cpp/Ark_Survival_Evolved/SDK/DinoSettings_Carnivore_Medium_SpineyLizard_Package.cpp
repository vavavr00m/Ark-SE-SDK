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
	 * 		Name   -> Function DinoSettings_Carnivore_Medium_SpineyLizard.DinoSettings_Carnivore_Medium_SpineyLizard_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_SpineyLizard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Carnivore_Medium_SpineyLizard_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_SpineyLizard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_SpineyLizard.DinoSettings_Carnivore_Medium_SpineyLizard_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_SpineyLizard");
		
		UDinoSettings_Carnivore_Medium_SpineyLizard_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_SpineyLizard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Carnivore_Medium_SpineyLizard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Carnivore_Medium_SpineyLizard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Medium_SpineyLizard.DinoSettings_Carnivore_Medium_SpineyLizard_C");
		return ptr;
	}

}


