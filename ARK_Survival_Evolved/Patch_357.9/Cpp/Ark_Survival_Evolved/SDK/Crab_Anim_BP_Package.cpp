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
	 * 		Name   -> Function Crab_Anim_BP.Crab_Anim_BP_C.UpdateGrabIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            OwningChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrab_Anim_BP_C::UpdateGrabIdle(class APrimalCharacter* OwningChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Anim_BP.Crab_Anim_BP_C.UpdateGrabIdle");
		
		UCrab_Anim_BP_C_UpdateGrabIdle_Params params {};
		params.OwningChar = OwningChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Crab_Anim_BP.Crab_Anim_BP_C.ExecuteUbergraph_Crab_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrab_Anim_BP_C::ExecuteUbergraph_Crab_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Anim_BP.Crab_Anim_BP_C.ExecuteUbergraph_Crab_Anim_BP");
		
		UCrab_Anim_BP_C_ExecuteUbergraph_Crab_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrab_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrab_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crab_Anim_BP.Crab_Anim_BP_C");
		return ptr;
	}

}


