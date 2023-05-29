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
	 * 		Name   -> Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABossArenaManager_C*                         ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldPreserve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBossArenaActorControlInterface_C::ArenaShouldPreserveAtClose(class ABossArenaManager_C* ArenaManager, bool* ShouldPreserve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBossArenaActorControlInterface.IBossArenaActorControlInterface_C.ArenaShouldPreserveAtClose");
		
		UIBossArenaActorControlInterface_C_ArenaShouldPreserveAtClose_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPreserve != nullptr)
			*ShouldPreserve = params.ShouldPreserve;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBossArenaActorControlInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBossArenaActorControlInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBossArenaActorControlInterface.IBossArenaActorControlInterface_C");
		return ptr;
	}

}


