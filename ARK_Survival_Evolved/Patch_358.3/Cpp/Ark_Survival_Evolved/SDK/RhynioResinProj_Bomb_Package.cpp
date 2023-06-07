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
	 * 		Name   -> Function RhynioResinProj_Bomb.RhynioResinProj_Bomb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynioResinProj_Bomb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Bomb.RhynioResinProj_Bomb_C.UserConstructionScript");
		
		ARhynioResinProj_Bomb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RhynioResinProj_Bomb.RhynioResinProj_Bomb_C.ExecuteUbergraph_RhynioResinProj_Bomb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynioResinProj_Bomb_C::ExecuteUbergraph_RhynioResinProj_Bomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Bomb.RhynioResinProj_Bomb_C.ExecuteUbergraph_RhynioResinProj_Bomb");
		
		ARhynioResinProj_Bomb_C_ExecuteUbergraph_RhynioResinProj_Bomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARhynioResinProj_Bomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARhynioResinProj_Bomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RhynioResinProj_Bomb.RhynioResinProj_Bomb_C");
		return ptr;
	}

}


