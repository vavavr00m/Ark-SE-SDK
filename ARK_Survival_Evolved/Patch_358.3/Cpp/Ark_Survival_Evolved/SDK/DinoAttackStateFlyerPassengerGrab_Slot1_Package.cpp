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
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab_Slot1.DinoAttackStateFlyerPassengerGrab_Slot1_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_Slot1_C::ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab_Slot1.DinoAttackStateFlyerPassengerGrab_Slot1_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1");
		
		UDinoAttackStateFlyerPassengerGrab_Slot1_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateFlyerPassengerGrab_Slot1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateFlyerPassengerGrab_Slot1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab_Slot1.DinoAttackStateFlyerPassengerGrab_Slot1_C");
		return ptr;
	}

}


