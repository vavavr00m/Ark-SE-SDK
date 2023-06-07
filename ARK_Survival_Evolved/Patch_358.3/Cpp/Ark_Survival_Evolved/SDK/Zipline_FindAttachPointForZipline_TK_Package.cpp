﻿/**
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
	 * 		Name   -> Function Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_FindAttachPointForZipline_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C.ReceiveExecute");
		
		UZipline_FindAttachPointForZipline_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C.ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZipline_FindAttachPointForZipline_TK_C::ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C.ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK");
		
		UZipline_FindAttachPointForZipline_TK_C_ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZipline_FindAttachPointForZipline_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZipline_FindAttachPointForZipline_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C");
		return ptr;
	}

}


