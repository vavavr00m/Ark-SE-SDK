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
	 * 		Name   -> Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PreventingTag                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Poop_Dinopithecus_C::BPOnPreventedFiringDisabledWeapon(class AShooterWeapon* weapon, const class FName& PreventingTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon");
		
		ABuff_Poop_Dinopithecus_C_BPOnPreventedFiringDisabledWeapon_Params params {};
		params.weapon = weapon;
		params.PreventingTag = PreventingTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class FName> ABuff_Poop_Dinopithecus_C::BPPreventTekArmorBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs");
		
		ABuff_Poop_Dinopithecus_C_BPPreventTekArmorBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Poop_Dinopithecus_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript");
		
		ABuff_Poop_Dinopithecus_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Poop_Dinopithecus_C::ExecuteUbergraph_Buff_Poop_Dinopithecus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus");
		
		ABuff_Poop_Dinopithecus_C_ExecuteUbergraph_Buff_Poop_Dinopithecus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Poop_Dinopithecus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Poop_Dinopithecus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C");
		return ptr;
	}

}


