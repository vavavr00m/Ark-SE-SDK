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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::CheckCorpseDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve");
		
		UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_CheckCorpseDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   invComp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumToGive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::BPCustomHarvestResource(class UPrimalInventoryComponent* invComp, int32_t NumToGive, class UClass* DamageTypeClass, class AActor* ToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource");
		
		UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_BPCustomHarvestResource_Params params {};
		params.invComp = invComp;
		params.NumToGive = NumToGive;
		params.DamageTypeClass = DamageTypeClass;
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern");
		
		UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Large_CrystalWyvern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C");
		return ptr;
	}

}


