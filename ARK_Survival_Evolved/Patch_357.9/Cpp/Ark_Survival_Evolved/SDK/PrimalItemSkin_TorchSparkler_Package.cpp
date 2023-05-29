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
	 * 		Name   -> Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelAudioOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USoundBase* UPrimalItemSkin_TorchSparkler_C::BPGetFuelAudioOverride(class APrimalStructure* ForStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelAudioOverride");
		
		UPrimalItemSkin_TorchSparkler_C_BPGetFuelAudioOverride_Params params {};
		params.ForStructure = ForStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelParticleSystemOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UParticleSystem* UPrimalItemSkin_TorchSparkler_C::BPGetFuelParticleSystemOverride(class APrimalStructure* ForStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelParticleSystemOverride");
		
		UPrimalItemSkin_TorchSparkler_C_BPGetFuelParticleSystemOverride_Params params {};
		params.ForStructure = ForStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.ExecuteUbergraph_PrimalItemSkin_TorchSparkler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_TorchSparkler_C::ExecuteUbergraph_PrimalItemSkin_TorchSparkler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.ExecuteUbergraph_PrimalItemSkin_TorchSparkler");
		
		UPrimalItemSkin_TorchSparkler_C_ExecuteUbergraph_PrimalItemSkin_TorchSparkler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_TorchSparkler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_TorchSparkler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C");
		return ptr;
	}

}


