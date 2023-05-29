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
	 * 		Name   -> Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BogSpiderBioGrappleEscape_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff");
		
		ABuff_BogSpiderBioGrappleEscape_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_BogSpiderBioGrappleEscape_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements");
		
		ABuff_BogSpiderBioGrappleEscape_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BogSpiderBioGrappleEscape_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript");
		
		ABuff_BogSpiderBioGrappleEscape_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BogSpiderBioGrappleEscape_C::ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape");
		
		ABuff_BogSpiderBioGrappleEscape_C_ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BogSpiderBioGrappleEscape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BogSpiderBioGrappleEscape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C");
		return ptr;
	}

}


