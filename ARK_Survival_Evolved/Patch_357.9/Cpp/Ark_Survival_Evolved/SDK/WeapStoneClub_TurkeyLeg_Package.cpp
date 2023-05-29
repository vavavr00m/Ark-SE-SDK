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
	 * 		Name   -> Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapStoneClub_TurkeyLeg_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.UserConstructionScript");
		
		AWeapStoneClub_TurkeyLeg_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.ExecuteUbergraph_WeapStoneClub_TurkeyLeg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapStoneClub_TurkeyLeg_C::ExecuteUbergraph_WeapStoneClub_TurkeyLeg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.ExecuteUbergraph_WeapStoneClub_TurkeyLeg");
		
		AWeapStoneClub_TurkeyLeg_C_ExecuteUbergraph_WeapStoneClub_TurkeyLeg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapStoneClub_TurkeyLeg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapStoneClub_TurkeyLeg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C");
		return ptr;
	}

}


