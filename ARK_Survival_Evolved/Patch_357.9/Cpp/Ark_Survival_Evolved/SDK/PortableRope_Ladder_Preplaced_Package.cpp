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
	 * 		Name   -> Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APortableRope_Ladder_Preplaced_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries");
		
		APortableRope_Ladder_Preplaced_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APortableRope_Ladder_Preplaced_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure");
		
		APortableRope_Ladder_Preplaced_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APortableRope_Ladder_Preplaced_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript");
		
		APortableRope_Ladder_Preplaced_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APortableRope_Ladder_Preplaced_C::ExecuteUbergraph_PortableRope_Ladder_Preplaced(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced");
		
		APortableRope_Ladder_Preplaced_C_ExecuteUbergraph_PortableRope_Ladder_Preplaced_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APortableRope_Ladder_Preplaced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APortableRope_Ladder_Preplaced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C");
		return ptr;
	}

}


