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
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetBuffSpeedPercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::GetBuffSpeedPercentage(float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetBuffSpeedPercentage");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_GetBuffSpeedPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitIconMaterial
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::BPInitIconMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitIconMaterial");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_BPInitIconMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetDyeItemDescriptiveName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPrimalGameData*                             GameData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      DescriptiveNameBase                                        (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::GetDyeItemDescriptiveName(class UPrimalGameData* GameData, int32_t A, class FString* DescriptiveNameBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetDyeItemDescriptiveName");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_GetDyeItemDescriptiveName_Params params {};
		params.GameData = GameData;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DescriptiveNameBase != nullptr)
			*DescriptiveNameBase = params.DescriptiveNameBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetInvertedWeights
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Weights                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::GetInvertedWeights(TArray<float>* Weights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.GetInvertedWeights");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_GetInvertedWeights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weights != nullptr)
			*Weights = params.Weights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPreUseItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::BPPreUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPreUseItem");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_BPPreUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitItemColors
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    ColorIDs                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::BPInitItemColors(TArray<int32_t>* ColorIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPInitItemColors");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_BPInitItemColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorIDs != nullptr)
			*ColorIDs = params.ColorIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPostAddBuffToGiveOwnerCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            OwnerCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::BPPostAddBuffToGiveOwnerCharacter(class APrimalCharacter* OwnerCharacter, class APrimalBuff* Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPPostAddBuffToGiveOwnerCharacter");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_BPPostAddBuffToGiveOwnerCharacter_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemConsumable_FestiveDinoCandy_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.BPGetItemDescription");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_BPGetItemDescription_Params params {};
		params.InDescription = InDescription;
		params.bGetLongDescription = bGetLongDescription;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_FestiveDinoCandy_C::ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C.ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy");
		
		UPrimalItemConsumable_FestiveDinoCandy_C_ExecuteUbergraph_PrimalItemConsumable_FestiveDinoCandy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_FestiveDinoCandy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_FestiveDinoCandy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_FestiveDinoCandy.PrimalItemConsumable_FestiveDinoCandy_C");
		return ptr;
	}

}


