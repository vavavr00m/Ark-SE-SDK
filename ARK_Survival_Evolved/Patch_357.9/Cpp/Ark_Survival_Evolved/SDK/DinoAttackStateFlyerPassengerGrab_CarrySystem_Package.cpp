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
	 * 		Name   -> Function DinoAttackStateFlyerPassengerGrab_CarrySystem.DinoAttackStateFlyerPassengerGrab_CarrySystem_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_CarrySystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateFlyerPassengerGrab_CarrySystem_C::ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_CarrySystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab_CarrySystem.DinoAttackStateFlyerPassengerGrab_CarrySystem_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_CarrySystem");
		
		UDinoAttackStateFlyerPassengerGrab_CarrySystem_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_CarrySystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateFlyerPassengerGrab_CarrySystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateFlyerPassengerGrab_CarrySystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab_CarrySystem.DinoAttackStateFlyerPassengerGrab_CarrySystem_C");
		return ptr;
	}

}


