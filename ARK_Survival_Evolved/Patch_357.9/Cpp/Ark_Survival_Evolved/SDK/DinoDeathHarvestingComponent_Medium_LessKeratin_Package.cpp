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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Medium_LessKeratin.DinoDeathHarvestingComponent_Medium_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Medium_LessKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_LessKeratin.DinoDeathHarvestingComponent_Medium_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin");
		
		UDinoDeathHarvestingComponent_Medium_LessKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Medium_LessKeratin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Medium_LessKeratin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_LessKeratin.DinoDeathHarvestingComponent_Medium_LessKeratin_C");
		return ptr;
	}

}


