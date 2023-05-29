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
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ApplyingSkinOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ToOwnerItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFirstTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ApplyingSkinOntoItem");
		
		UPrimalItemSkin_TekHelmet_V2_C_ApplyingSkinOntoItem_Params params {};
		params.ToOwnerItem = ToOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.RemovedSkinFromItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 FromOwnerItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFirstTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.RemovedSkinFromItem");
		
		UPrimalItemSkin_TekHelmet_V2_C_RemovedSkinFromItem_Params params {};
		params.FromOwnerItem = FromOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.InitBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::InitBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.InitBuff");
		
		UPrimalItemSkin_TekHelmet_V2_C_InitBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintEquipped");
		
		UPrimalItemSkin_TekHelmet_V2_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintOwnerPosssessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 PossessedByController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::BlueprintOwnerPosssessed(class AController* PossessedByController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintOwnerPosssessed");
		
		UPrimalItemSkin_TekHelmet_V2_C_BlueprintOwnerPosssessed_Params params {};
		params.PossessedByController = PossessedByController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintUnequipped");
		
		UPrimalItemSkin_TekHelmet_V2_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TekHelmet_V2_C::ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2");
		
		UPrimalItemSkin_TekHelmet_V2_C_ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TekHelmet_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TekHelmet_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C");
		return ptr;
	}

}


