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
	 * 		Name   -> Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponElectronicBinoculars_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.UserConstructionScript");
		
		AWeaponElectronicBinoculars_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.ExecuteUbergraph_WeaponElectronicBinoculars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponElectronicBinoculars_C::ExecuteUbergraph_WeaponElectronicBinoculars(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.ExecuteUbergraph_WeaponElectronicBinoculars");
		
		AWeaponElectronicBinoculars_C_ExecuteUbergraph_WeaponElectronicBinoculars_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeaponElectronicBinoculars_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponElectronicBinoculars_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponElectronicBinoculars.WeaponElectronicBinoculars_C");
		return ptr;
	}

}


