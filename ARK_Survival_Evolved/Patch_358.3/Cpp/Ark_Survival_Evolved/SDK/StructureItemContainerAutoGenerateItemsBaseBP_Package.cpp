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
	 * 		Name   -> Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureItemContainerAutoGenerateItemsBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.UserConstructionScript");
		
		AStructureItemContainerAutoGenerateItemsBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureItemContainerAutoGenerateItemsBaseBP_C::ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP");
		
		AStructureItemContainerAutoGenerateItemsBaseBP_C_ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureItemContainerAutoGenerateItemsBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureItemContainerAutoGenerateItemsBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C");
		return ptr;
	}

}


