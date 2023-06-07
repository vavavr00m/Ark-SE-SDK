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
	 * 		Name   -> Function DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C.ExecuteUbergraph_DinoEntry_DesertTitanFlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoEntry_DesertTitanFlock_C::ExecuteUbergraph_DinoEntry_DesertTitanFlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C.ExecuteUbergraph_DinoEntry_DesertTitanFlock");
		
		UDinoEntry_DesertTitanFlock_C_ExecuteUbergraph_DinoEntry_DesertTitanFlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoEntry_DesertTitanFlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoEntry_DesertTitanFlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C");
		return ptr;
	}

}


