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
	 * 		Name   -> Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvProjEmber_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.UserConstructionScript");
		
		ACrystalWyvProjEmber_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.ExecuteUbergraph_CrystalWyvProjEmber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvProjEmber_C::ExecuteUbergraph_CrystalWyvProjEmber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.ExecuteUbergraph_CrystalWyvProjEmber");
		
		ACrystalWyvProjEmber_C_ExecuteUbergraph_CrystalWyvProjEmber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvProjEmber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvProjEmber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvProjEmber.CrystalWyvProjEmber_C");
		return ptr;
	}

}


