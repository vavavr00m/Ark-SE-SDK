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
	 * 		Name   -> Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFjordhawk_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UFjordhawk_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFjordhawk_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint");
		
		UFjordhawk_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFjordhawk_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFjordhawk_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C");
		return ptr;
	}

}


