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
	 * 		Name   -> Function FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVBambooGrenadeWeaponAnimBP_Base_C::ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base");
		
		UFPVBambooGrenadeWeaponAnimBP_Base_C_ExecuteUbergraph_FPVBambooGrenadeWeaponAnimBP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVBambooGrenadeWeaponAnimBP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVBambooGrenadeWeaponAnimBP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVBambooGrenadeWeaponAnimBP_Base.FPVBambooGrenadeWeaponAnimBP_Base_C");
		return ptr;
	}

}


