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
	 * 		Name   -> Function ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UElimishaNote_RIG_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C.BlueprintUpdateAnimation");
		
		UElimishaNote_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C.ExecuteUbergraph_ElimishaNote_RIG_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UElimishaNote_RIG_AnimBP_C::ExecuteUbergraph_ElimishaNote_RIG_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C.ExecuteUbergraph_ElimishaNote_RIG_AnimBP");
		
		UElimishaNote_RIG_AnimBP_C_ExecuteUbergraph_ElimishaNote_RIG_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElimishaNote_RIG_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElimishaNote_RIG_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C");
		return ptr;
	}

}


