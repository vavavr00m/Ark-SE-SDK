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
	 * 		Name   -> Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.BPNotifyOtherBuffActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 OtherBuff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RestingDino_LionfishLion_C::BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.BPNotifyOtherBuffActivated");
		
		ABuff_RestingDino_LionfishLion_C_BPNotifyOtherBuffActivated_Params params {};
		params.OtherBuff = OtherBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RestingDino_LionfishLion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.UserConstructionScript");
		
		ABuff_RestingDino_LionfishLion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.ExecuteUbergraph_Buff_RestingDino_LionfishLion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RestingDino_LionfishLion_C::ExecuteUbergraph_Buff_RestingDino_LionfishLion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.ExecuteUbergraph_Buff_RestingDino_LionfishLion");
		
		ABuff_RestingDino_LionfishLion_C_ExecuteUbergraph_Buff_RestingDino_LionfishLion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.awoken by other buff__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RestingDino_LionfishLion_C::awokenbyotherbuff__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.awoken by other buff__DelegateSignature");
		
		ABuff_RestingDino_LionfishLion_C_awokenbyotherbuff__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RestingDino_LionfishLion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RestingDino_LionfishLion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C");
		return ptr;
	}

}


