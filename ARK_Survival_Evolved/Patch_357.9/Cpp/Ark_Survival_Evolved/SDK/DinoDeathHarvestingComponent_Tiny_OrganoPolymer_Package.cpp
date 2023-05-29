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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Tiny_OrganoPolymer.DinoDeathHarvestingComponent_Tiny_OrganoPolymer_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_OrganoPolymer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Tiny_OrganoPolymer_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_OrganoPolymer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_OrganoPolymer.DinoDeathHarvestingComponent_Tiny_OrganoPolymer_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_OrganoPolymer");
		
		UDinoDeathHarvestingComponent_Tiny_OrganoPolymer_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_OrganoPolymer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Tiny_OrganoPolymer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Tiny_OrganoPolymer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_OrganoPolymer.DinoDeathHarvestingComponent_Tiny_OrganoPolymer_C");
		return ptr;
	}

}


