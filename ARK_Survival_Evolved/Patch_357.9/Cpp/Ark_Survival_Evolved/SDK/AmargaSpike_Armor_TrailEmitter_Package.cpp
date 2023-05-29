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
	 * 		Name   -> Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Armor_TrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.UserConstructionScript");
		
		AAmargaSpike_Armor_TrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_Armor_TrailEmitter_C::ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter");
		
		AAmargaSpike_Armor_TrailEmitter_C_ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargaSpike_Armor_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargaSpike_Armor_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C");
		return ptr;
	}

}


