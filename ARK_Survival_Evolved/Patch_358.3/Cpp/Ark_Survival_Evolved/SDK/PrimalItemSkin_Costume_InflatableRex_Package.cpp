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
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ToOwnerItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFirstTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem");
		
		UPrimalItemSkin_Costume_InflatableRex_C_ApplyingSkinOntoItem_Params params {};
		params.ToOwnerItem = ToOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 FromOwnerItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFirstTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem");
		
		UPrimalItemSkin_Costume_InflatableRex_C_RemovedSkinFromItem_Params params {};
		params.FromOwnerItem = FromOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped");
		
		UPrimalItemSkin_Costume_InflatableRex_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped");
		
		UPrimalItemSkin_Costume_InflatableRex_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::AddBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff");
		
		UPrimalItemSkin_Costume_InflatableRex_C_AddBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::RemoveBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff");
		
		UPrimalItemSkin_Costume_InflatableRex_C_RemoveBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_Costume_InflatableRex_C::ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex");
		
		UPrimalItemSkin_Costume_InflatableRex_C_ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_Costume_InflatableRex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_Costume_InflatableRex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C");
		return ptr;
	}

}


