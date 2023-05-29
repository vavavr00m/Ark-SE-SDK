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
	 * 		Name   -> Function DinoSettings_Herbivore_Medium_Turtle.DinoSettings_Herbivore_Medium_Turtle_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Herbivore_Medium_Turtle_C::ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Medium_Turtle.DinoSettings_Herbivore_Medium_Turtle_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle");
		
		UDinoSettings_Herbivore_Medium_Turtle_C_ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Herbivore_Medium_Turtle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Herbivore_Medium_Turtle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Medium_Turtle.DinoSettings_Herbivore_Medium_Turtle_C");
		return ptr;
	}

}


