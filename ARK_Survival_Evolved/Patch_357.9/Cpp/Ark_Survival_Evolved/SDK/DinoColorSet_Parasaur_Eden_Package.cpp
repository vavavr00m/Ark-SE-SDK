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
	 * 		Name   -> Function DinoColorSet_Parasaur_Eden.DinoColorSet_Parasaur_Eden_C.ExecuteUbergraph_DinoColorSet_Parasaur_Eden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoColorSet_Parasaur_Eden_C::ExecuteUbergraph_DinoColorSet_Parasaur_Eden(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoColorSet_Parasaur_Eden.DinoColorSet_Parasaur_Eden_C.ExecuteUbergraph_DinoColorSet_Parasaur_Eden");
		
		UDinoColorSet_Parasaur_Eden_C_ExecuteUbergraph_DinoColorSet_Parasaur_Eden_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoColorSet_Parasaur_Eden_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoColorSet_Parasaur_Eden_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Parasaur_Eden.DinoColorSet_Parasaur_Eden_C");
		return ptr;
	}

}


