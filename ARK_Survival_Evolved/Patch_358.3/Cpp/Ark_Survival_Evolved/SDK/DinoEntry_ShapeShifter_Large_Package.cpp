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
	 * 		Name   -> Function DinoEntry_ShapeShifter_Large.DinoEntry_ShapeShifter_Large_C.ExecuteUbergraph_DinoEntry_ShapeShifter_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoEntry_ShapeShifter_Large_C::ExecuteUbergraph_DinoEntry_ShapeShifter_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoEntry_ShapeShifter_Large.DinoEntry_ShapeShifter_Large_C.ExecuteUbergraph_DinoEntry_ShapeShifter_Large");
		
		UDinoEntry_ShapeShifter_Large_C_ExecuteUbergraph_DinoEntry_ShapeShifter_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoEntry_ShapeShifter_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoEntry_ShapeShifter_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_ShapeShifter_Large.DinoEntry_ShapeShifter_Large_C");
		return ptr;
	}

}


