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
	 * 		Name   -> Function DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C.ExecuteUbergraph_DinoAttackStateXenoSpikesWide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateXenoSpikesWide_C::ExecuteUbergraph_DinoAttackStateXenoSpikesWide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C.ExecuteUbergraph_DinoAttackStateXenoSpikesWide");
		
		UDinoAttackStateXenoSpikesWide_C_ExecuteUbergraph_DinoAttackStateXenoSpikesWide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateXenoSpikesWide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateXenoSpikesWide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C");
		return ptr;
	}

}


