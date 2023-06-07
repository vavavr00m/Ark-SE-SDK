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
	 * 		Name   -> Function WeapMachinedShotgun.WeapMachinedShotgun_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMachinedShotgun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun.WeapMachinedShotgun_C.UserConstructionScript");
		
		AWeapMachinedShotgun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapMachinedShotgun.WeapMachinedShotgun_C.ExecuteUbergraph_WeapMachinedShotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMachinedShotgun_C::ExecuteUbergraph_WeapMachinedShotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun.WeapMachinedShotgun_C.ExecuteUbergraph_WeapMachinedShotgun");
		
		AWeapMachinedShotgun_C_ExecuteUbergraph_WeapMachinedShotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapMachinedShotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMachinedShotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedShotgun.WeapMachinedShotgun_C");
		return ptr;
	}

}


