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
	 * 		Name   -> Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStoneWaterTapEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.UserConstructionScript");
		
		AStoneWaterTapEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.ExecuteUbergraph_StoneWaterTapEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStoneWaterTapEmitter_C::ExecuteUbergraph_StoneWaterTapEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.ExecuteUbergraph_StoneWaterTapEmitter");
		
		AStoneWaterTapEmitter_C_ExecuteUbergraph_StoneWaterTapEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStoneWaterTapEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStoneWaterTapEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneWaterTapEmitter.StoneWaterTapEmitter_C");
		return ptr;
	}

}


