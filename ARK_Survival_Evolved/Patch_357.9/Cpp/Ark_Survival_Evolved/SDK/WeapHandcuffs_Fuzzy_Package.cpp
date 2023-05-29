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
	 * 		Name   -> Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapHandcuffs_Fuzzy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.UserConstructionScript");
		
		AWeapHandcuffs_Fuzzy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.ExecuteUbergraph_WeapHandcuffs_Fuzzy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapHandcuffs_Fuzzy_C::ExecuteUbergraph_WeapHandcuffs_Fuzzy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.ExecuteUbergraph_WeapHandcuffs_Fuzzy");
		
		AWeapHandcuffs_Fuzzy_C_ExecuteUbergraph_WeapHandcuffs_Fuzzy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapHandcuffs_Fuzzy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapHandcuffs_Fuzzy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C");
		return ptr;
	}

}


