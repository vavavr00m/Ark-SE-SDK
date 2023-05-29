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
	 * 		Name   -> Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekExplosion_ShoulderCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.UserConstructionScript");
		
		ATekExplosion_ShoulderCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.ExecuteUbergraph_TekExplosion_ShoulderCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekExplosion_ShoulderCannon_C::ExecuteUbergraph_TekExplosion_ShoulderCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.ExecuteUbergraph_TekExplosion_ShoulderCannon");
		
		ATekExplosion_ShoulderCannon_C_ExecuteUbergraph_TekExplosion_ShoulderCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekExplosion_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekExplosion_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C");
		return ptr;
	}

}


