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
	 * 		Name   -> Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelAudioOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USoundBase* UPrimalItemSkin_TorchScorched_C::BPGetFuelAudioOverride(class APrimalStructure* ForStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelAudioOverride");
		
		UPrimalItemSkin_TorchScorched_C_BPGetFuelAudioOverride_Params params {};
		params.ForStructure = ForStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelParticleSystemOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UParticleSystem* UPrimalItemSkin_TorchScorched_C::BPGetFuelParticleSystemOverride(class APrimalStructure* ForStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelParticleSystemOverride");
		
		UPrimalItemSkin_TorchScorched_C_BPGetFuelParticleSystemOverride_Params params {};
		params.ForStructure = ForStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.ExecuteUbergraph_PrimalItemSkin_TorchScorched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TorchScorched_C::ExecuteUbergraph_PrimalItemSkin_TorchScorched(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.ExecuteUbergraph_PrimalItemSkin_TorchScorched");
		
		UPrimalItemSkin_TorchScorched_C_ExecuteUbergraph_PrimalItemSkin_TorchScorched_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TorchScorched_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TorchScorched_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C");
		return ptr;
	}

}


