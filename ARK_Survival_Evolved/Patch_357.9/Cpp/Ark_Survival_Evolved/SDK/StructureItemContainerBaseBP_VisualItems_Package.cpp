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
	 * 		Name   -> Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureItemContainerBaseBP_VisualItems_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.UserConstructionScript");
		
		AStructureItemContainerBaseBP_VisualItems_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureItemContainerBaseBP_VisualItems_C::ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems");
		
		AStructureItemContainerBaseBP_VisualItems_C_ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureItemContainerBaseBP_VisualItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureItemContainerBaseBP_VisualItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C");
		return ptr;
	}

}


