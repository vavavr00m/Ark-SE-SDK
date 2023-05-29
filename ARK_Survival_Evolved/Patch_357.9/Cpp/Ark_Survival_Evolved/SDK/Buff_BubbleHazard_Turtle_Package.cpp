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
	 * 		Name   -> Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BubbleHazard_Turtle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.UserConstructionScript");
		
		ABuff_BubbleHazard_Turtle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.ExecuteUbergraph_Buff_BubbleHazard_Turtle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BubbleHazard_Turtle_C::ExecuteUbergraph_Buff_BubbleHazard_Turtle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.ExecuteUbergraph_Buff_BubbleHazard_Turtle");
		
		ABuff_BubbleHazard_Turtle_C_ExecuteUbergraph_Buff_BubbleHazard_Turtle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BubbleHazard_Turtle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BubbleHazard_Turtle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C");
		return ptr;
	}

}


