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
	 * 		Name   -> Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Client_BogSpiderWaterWalk_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.UserConstructionScript");
		
		ABuff_Client_BogSpiderWaterWalk_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Client_BogSpiderWaterWalk_C::ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk");
		
		ABuff_Client_BogSpiderWaterWalk_C_ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Client_BogSpiderWaterWalk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Client_BogSpiderWaterWalk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C");
		return ptr;
	}

}


