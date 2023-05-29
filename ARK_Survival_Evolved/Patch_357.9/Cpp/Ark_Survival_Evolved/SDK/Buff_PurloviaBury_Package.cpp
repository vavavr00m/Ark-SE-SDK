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
	 * 		Name   -> Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anotherBuffClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_PurloviaBury_C::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff");
		
		ABuff_PurloviaBury_C_BPPreventAddingOtherBuff_Params params {};
		params.anotherBuffClass = anotherBuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_PurloviaBury_C::PreventActorTargeting(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting");
		
		ABuff_PurloviaBury_C_PreventActorTargeting_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_PurloviaBury_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript");
		
		ABuff_PurloviaBury_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_PurloviaBury_C::ExecuteUbergraph_Buff_PurloviaBury(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury");
		
		ABuff_PurloviaBury_C_ExecuteUbergraph_Buff_PurloviaBury_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_PurloviaBury_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_PurloviaBury_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PurloviaBury.Buff_PurloviaBury_C");
		return ptr;
	}

}


