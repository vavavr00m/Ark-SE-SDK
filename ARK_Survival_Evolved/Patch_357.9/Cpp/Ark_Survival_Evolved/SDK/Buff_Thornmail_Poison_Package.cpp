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
	 * 		Name   -> Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSinceLastDoT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Thornmail_Poison_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage");
		
		ABuff_Thornmail_Poison_C_CalculateDoTDamage_Params params {};
		params.TimeSinceLastDoT = TimeSinceLastDoT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Thornmail_Poison_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript");
		
		ABuff_Thornmail_Poison_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Thornmail_Poison_C::ExecuteUbergraph_Buff_Thornmail_Poison(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison");
		
		ABuff_Thornmail_Poison_C_ExecuteUbergraph_Buff_Thornmail_Poison_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Thornmail_Poison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Thornmail_Poison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Thornmail_Poison.Buff_Thornmail_Poison_C");
		return ptr;
	}

}


