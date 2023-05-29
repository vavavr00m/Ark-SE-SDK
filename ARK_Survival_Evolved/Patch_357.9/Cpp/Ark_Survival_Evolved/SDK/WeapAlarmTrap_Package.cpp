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
	 * 		Name   -> Function WeapAlarmTrap.WeapAlarmTrap_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapAlarmTrap_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAlarmTrap.WeapAlarmTrap_C.UserConstructionScript");
		
		AWeapAlarmTrap_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapAlarmTrap.WeapAlarmTrap_C.ExecuteUbergraph_WeapAlarmTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapAlarmTrap_C::ExecuteUbergraph_WeapAlarmTrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapAlarmTrap.WeapAlarmTrap_C.ExecuteUbergraph_WeapAlarmTrap");
		
		AWeapAlarmTrap_C_ExecuteUbergraph_WeapAlarmTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapAlarmTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapAlarmTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapAlarmTrap.WeapAlarmTrap_C");
		return ptr;
	}

}


