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
	 * 		Name   -> Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_LFL_TeleportAttackStun_Cooldown_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.UserConstructionScript");
		
		ABuff_LFL_TeleportAttackStun_Cooldown_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_LFL_TeleportAttackStun_Cooldown_C::ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown");
		
		ABuff_LFL_TeleportAttackStun_Cooldown_C_ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_LFL_TeleportAttackStun_Cooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_LFL_TeleportAttackStun_Cooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C");
		return ptr;
	}

}


