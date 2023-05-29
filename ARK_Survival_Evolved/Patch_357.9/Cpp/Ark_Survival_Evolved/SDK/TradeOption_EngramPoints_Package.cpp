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
	 * 		Name   -> Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTradeOption_EngramPoints_C::BPAllowedToBePurchased(class AShooterPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased");
		
		UTradeOption_EngramPoints_C_BPAllowedToBePurchased_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTradeOption_EngramPoints_C::BPOverrideTradeAction(class AShooterPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction");
		
		UTradeOption_EngramPoints_C_BPOverrideTradeAction_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UTradeOption_EngramPoints_C::BPGetItemCost(class AShooterPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost");
		
		UTradeOption_EngramPoints_C_BPGetItemCost_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_EngramPoints_C::ExecuteUbergraph_TradeOption_EngramPoints(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints");
		
		UTradeOption_EngramPoints_C_ExecuteUbergraph_TradeOption_EngramPoints_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_EngramPoints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_EngramPoints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_EngramPoints.TradeOption_EngramPoints_C");
		return ptr;
	}

}


