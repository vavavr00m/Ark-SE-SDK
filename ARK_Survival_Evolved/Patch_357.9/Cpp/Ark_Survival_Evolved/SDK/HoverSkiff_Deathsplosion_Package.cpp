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
	 * 		Name   -> Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.InitDeathsplosion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATekHoverSkiff_Character_BP_C*               FromSkiff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHoverSkiff_Deathsplosion_C::InitDeathsplosion(class ATekHoverSkiff_Character_BP_C* FromSkiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.InitDeathsplosion");
		
		AHoverSkiff_Deathsplosion_C_InitDeathsplosion_Params params {};
		params.FromSkiff = FromSkiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHoverSkiff_Deathsplosion_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ReceiveDestroyed");
		
		AHoverSkiff_Deathsplosion_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHoverSkiff_Deathsplosion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.UserConstructionScript");
		
		AHoverSkiff_Deathsplosion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ExecuteUbergraph_HoverSkiff_Deathsplosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHoverSkiff_Deathsplosion_C::ExecuteUbergraph_HoverSkiff_Deathsplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ExecuteUbergraph_HoverSkiff_Deathsplosion");
		
		AHoverSkiff_Deathsplosion_C_ExecuteUbergraph_HoverSkiff_Deathsplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHoverSkiff_Deathsplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHoverSkiff_Deathsplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C");
		return ptr;
	}

}


