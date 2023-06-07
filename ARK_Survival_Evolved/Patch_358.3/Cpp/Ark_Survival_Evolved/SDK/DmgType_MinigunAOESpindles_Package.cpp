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
	 * 		Name   -> Function DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C.BPAdjustHarvestingDamage_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDmgType_MinigunAOESpindles_C::BPAdjustHarvestingDamage_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C.BPAdjustHarvestingDamage_1");
		
		UDmgType_MinigunAOESpindles_C_BPAdjustHarvestingDamage_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgType_MinigunAOESpindles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_MinigunAOESpindles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C");
		return ptr;
	}

}


