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
	 * 		Name   -> Function PrimalItemStructure_Flag_Fjordur.PrimalItemStructure_Flag_Fjordur_C.ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_Flag_Fjordur_C::ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_Fjordur.PrimalItemStructure_Flag_Fjordur_C.ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur");
		
		UPrimalItemStructure_Flag_Fjordur_C_ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_Flag_Fjordur_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_Flag_Fjordur_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Flag_Fjordur.PrimalItemStructure_Flag_Fjordur_C");
		return ptr;
	}

}


