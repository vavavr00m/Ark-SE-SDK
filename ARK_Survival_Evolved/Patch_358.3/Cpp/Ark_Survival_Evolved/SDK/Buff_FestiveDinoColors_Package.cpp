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
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        A                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FLinearColor>                        B                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Equal                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::AreColorArraysEqual(TArray<struct FLinearColor>* A, TArray<struct FLinearColor>* B, bool* Equal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual");
		
		ABuff_FestiveDinoColors_C_AreColorArraysEqual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
		if (B != nullptr)
			*B = params.B;
		if (Equal != nullptr)
			*Equal = params.Equal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator");
		
		ABuff_FestiveDinoColors_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        DinoColors                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FLinearColor>                        OverrideColors                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_FestiveDinoColors_C::BPDinoRefreshColorization(TArray<struct FLinearColor>* DinoColors, TArray<struct FLinearColor>* OverrideColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization");
		
		ABuff_FestiveDinoColors_C_BPDinoRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DinoColors != nullptr)
			*DinoColors = params.DinoColors;
		if (OverrideColors != nullptr)
			*OverrideColors = params.OverrideColors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FestiveDinoColors_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript");
		
		ABuff_FestiveDinoColors_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            ItemQuality                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::MultiUpdateColors(TArray<struct FLinearColor>* Colors, int32_t ItemQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors");
		
		ABuff_FestiveDinoColors_C_MultiUpdateColors_Params params {};
		params.ItemQuality = ItemQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        ItemColors                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            ItemQuality                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::UpdateColorsFromItem(TArray<struct FLinearColor>* ItemColors, int32_t ItemQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem");
		
		ABuff_FestiveDinoColors_C_UpdateColorsFromItem_Params params {};
		params.ItemQuality = ItemQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemColors != nullptr)
			*ItemColors = params.ItemColors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            CandyQuality                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::MultiUpdateAfterLoadSave(TArray<struct FLinearColor>* Colors, int32_t CandyQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave");
		
		ABuff_FestiveDinoColors_C_MultiUpdateAfterLoadSave_Params params {};
		params.CandyQuality = CandyQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FestiveDinoColors_C::DelayedPostLoadUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate");
		
		ABuff_FestiveDinoColors_C_DelayedPostLoadUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FestiveDinoColors_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay");
		
		ABuff_FestiveDinoColors_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FestiveDinoColors_C::ExecuteUbergraph_Buff_FestiveDinoColors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors");
		
		ABuff_FestiveDinoColors_C_ExecuteUbergraph_Buff_FestiveDinoColors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FestiveDinoColors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FestiveDinoColors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FestiveDinoColors.Buff_FestiveDinoColors_C");
		return ptr;
	}

}


