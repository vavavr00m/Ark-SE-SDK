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
	 * 		Name   -> Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_SimpleRifleBullet_C::ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet");
		
		UPrimalItemAmmo_SimpleRifleBullet_C_ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_SimpleRifleBullet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_SimpleRifleBullet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C");
		return ptr;
	}

}


