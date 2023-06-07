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
	 * 		Name   -> Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.UserConstructionScript");
		
		ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C::ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino");
		
		ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C_ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C");
		return ptr;
	}

}


