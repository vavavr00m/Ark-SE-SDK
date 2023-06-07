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
	 * 		Name   -> Function BTD_Fjordhawk_ReturnToPlayer.BTD_Fjordhawk_ReturnToPlayer_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_Fjordhawk_ReturnToPlayer_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_Fjordhawk_ReturnToPlayer.BTD_Fjordhawk_ReturnToPlayer_C.ReceiveConditionCheck");
		
		UBTD_Fjordhawk_ReturnToPlayer_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BTD_Fjordhawk_ReturnToPlayer.BTD_Fjordhawk_ReturnToPlayer_C.ExecuteUbergraph_BTD_Fjordhawk_ReturnToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_Fjordhawk_ReturnToPlayer_C::ExecuteUbergraph_BTD_Fjordhawk_ReturnToPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_Fjordhawk_ReturnToPlayer.BTD_Fjordhawk_ReturnToPlayer_C.ExecuteUbergraph_BTD_Fjordhawk_ReturnToPlayer");
		
		UBTD_Fjordhawk_ReturnToPlayer_C_ExecuteUbergraph_BTD_Fjordhawk_ReturnToPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTD_Fjordhawk_ReturnToPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTD_Fjordhawk_ReturnToPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTD_Fjordhawk_ReturnToPlayer.BTD_Fjordhawk_ReturnToPlayer_C");
		return ptr;
	}

}


