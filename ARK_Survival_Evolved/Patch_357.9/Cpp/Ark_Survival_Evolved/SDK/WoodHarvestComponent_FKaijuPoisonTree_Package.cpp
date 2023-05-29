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
	 * 		Name   -> Function WoodHarvestComponent_FKaijuPoisonTree.WoodHarvestComponent_FKaijuPoisonTree_C.ExecuteUbergraph_WoodHarvestComponent_FKaijuPoisonTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWoodHarvestComponent_FKaijuPoisonTree_C::ExecuteUbergraph_WoodHarvestComponent_FKaijuPoisonTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_FKaijuPoisonTree.WoodHarvestComponent_FKaijuPoisonTree_C.ExecuteUbergraph_WoodHarvestComponent_FKaijuPoisonTree");
		
		UWoodHarvestComponent_FKaijuPoisonTree_C_ExecuteUbergraph_WoodHarvestComponent_FKaijuPoisonTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_FKaijuPoisonTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_FKaijuPoisonTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_FKaijuPoisonTree.WoodHarvestComponent_FKaijuPoisonTree_C");
		return ptr;
	}

}


