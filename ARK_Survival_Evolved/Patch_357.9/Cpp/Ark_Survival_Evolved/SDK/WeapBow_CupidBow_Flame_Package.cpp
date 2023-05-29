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
	 * 		Name   -> Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapBow_CupidBow_Flame_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.UserConstructionScript");
		
		AWeapBow_CupidBow_Flame_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.ExecuteUbergraph_WeapBow_CupidBow_Flame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapBow_CupidBow_Flame_C::ExecuteUbergraph_WeapBow_CupidBow_Flame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.ExecuteUbergraph_WeapBow_CupidBow_Flame");
		
		AWeapBow_CupidBow_Flame_C_ExecuteUbergraph_WeapBow_CupidBow_Flame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBow_CupidBow_Flame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBow_CupidBow_Flame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C");
		return ptr;
	}

}


