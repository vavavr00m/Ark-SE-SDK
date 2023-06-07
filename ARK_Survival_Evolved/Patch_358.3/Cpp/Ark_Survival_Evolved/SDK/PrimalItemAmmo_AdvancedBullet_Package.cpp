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
	 * 		Name   -> Function PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_AdvancedBullet_C::ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet");
		
		UPrimalItemAmmo_AdvancedBullet_C_ExecuteUbergraph_PrimalItemAmmo_AdvancedBullet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_AdvancedBullet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_AdvancedBullet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C");
		return ptr;
	}

}


