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
	 * 		Name   -> Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Fjordhawk_ReturnLoot_C::GetHorizontalDistance(class AActor* Actor1, class AActor* Actor2, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance");
		
		UBTT_Fjordhawk_ReturnLoot_C_GetHorizontalDistance_Params params {};
		params.Actor1 = Actor1;
		params.Actor2 = Actor2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Fjordhawk_ReturnLoot_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute");
		
		UBTT_Fjordhawk_ReturnLoot_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_Fjordhawk_ReturnLoot_C::ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot");
		
		UBTT_Fjordhawk_ReturnLoot_C_ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Fjordhawk_ReturnLoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Fjordhawk_ReturnLoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C");
		return ptr;
	}

}


