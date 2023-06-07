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
	 * 		Name   -> Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_Large_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.UserConstructionScript");
		
		AStructure_TaxidermyBase_Large_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.ExecuteUbergraph_Structure_TaxidermyBase_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_Large_C::ExecuteUbergraph_Structure_TaxidermyBase_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C.ExecuteUbergraph_Structure_TaxidermyBase_Large");
		
		AStructure_TaxidermyBase_Large_C_ExecuteUbergraph_Structure_TaxidermyBase_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_TaxidermyBase_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_TaxidermyBase_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase_Large.Structure_TaxidermyBase_Large_C");
		return ptr;
	}

}


