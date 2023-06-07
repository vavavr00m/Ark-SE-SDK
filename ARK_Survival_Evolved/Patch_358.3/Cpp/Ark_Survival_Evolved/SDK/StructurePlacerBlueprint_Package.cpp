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
	 * 		Name   -> Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructurePlacerBlueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.UserConstructionScript");
		
		AStructurePlacerBlueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.ExecuteUbergraph_StructurePlacerBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructurePlacerBlueprint_C::ExecuteUbergraph_StructurePlacerBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.ExecuteUbergraph_StructurePlacerBlueprint");
		
		AStructurePlacerBlueprint_C_ExecuteUbergraph_StructurePlacerBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructurePlacerBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructurePlacerBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C");
		return ptr;
	}

}


