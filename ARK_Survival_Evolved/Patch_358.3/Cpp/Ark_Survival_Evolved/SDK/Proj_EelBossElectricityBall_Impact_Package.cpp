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
	 * 		Name   -> Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_EelBossElectricityBall_Impact_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.UserConstructionScript");
		
		AProj_EelBossElectricityBall_Impact_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_EelBossElectricityBall_Impact_C::ExecuteUbergraph_Proj_EelBossElectricityBall_Impact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact");
		
		AProj_EelBossElectricityBall_Impact_C_ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_EelBossElectricityBall_Impact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_EelBossElectricityBall_Impact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C");
		return ptr;
	}

}


