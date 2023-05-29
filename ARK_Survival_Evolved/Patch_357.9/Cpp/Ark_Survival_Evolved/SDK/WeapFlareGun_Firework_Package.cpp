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
	 * 		Name   -> Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFlareGun_Firework_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.UserConstructionScript");
		
		AWeapFlareGun_Firework_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.ExecuteUbergraph_WeapFlareGun_Firework
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFlareGun_Firework_C::ExecuteUbergraph_WeapFlareGun_Firework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.ExecuteUbergraph_WeapFlareGun_Firework");
		
		AWeapFlareGun_Firework_C_ExecuteUbergraph_WeapFlareGun_Firework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFlareGun_Firework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFlareGun_Firework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlareGun_Firework.WeapFlareGun_Firework_C");
		return ptr;
	}

}


