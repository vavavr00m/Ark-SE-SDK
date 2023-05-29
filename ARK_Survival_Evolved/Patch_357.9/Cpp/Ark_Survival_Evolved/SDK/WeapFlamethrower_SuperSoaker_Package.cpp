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
	 * 		Name   -> Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFlamethrower_SuperSoaker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.UserConstructionScript");
		
		AWeapFlamethrower_SuperSoaker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.ExecuteUbergraph_WeapFlamethrower_SuperSoaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFlamethrower_SuperSoaker_C::ExecuteUbergraph_WeapFlamethrower_SuperSoaker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.ExecuteUbergraph_WeapFlamethrower_SuperSoaker");
		
		AWeapFlamethrower_SuperSoaker_C_ExecuteUbergraph_WeapFlamethrower_SuperSoaker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFlamethrower_SuperSoaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFlamethrower_SuperSoaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C");
		return ptr;
	}

}


