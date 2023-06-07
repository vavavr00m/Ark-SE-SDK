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
	 * 		Name   -> Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPPreventWeaponEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UPrimalItem_WeaponTekSword_Mjolnir_C::BPPreventWeaponEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPPreventWeaponEquip");
		
		UPrimalItem_WeaponTekSword_Mjolnir_C_BPPreventWeaponEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPOnLocalUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponTekSword_Mjolnir_C::BPOnLocalUse(class AShooterCharacter* forCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPOnLocalUse");
		
		UPrimalItem_WeaponTekSword_Mjolnir_C_BPOnLocalUse_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponTekSword_Mjolnir_C::ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir");
		
		UPrimalItem_WeaponTekSword_Mjolnir_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponTekSword_Mjolnir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponTekSword_Mjolnir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C");
		return ptr;
	}

}


