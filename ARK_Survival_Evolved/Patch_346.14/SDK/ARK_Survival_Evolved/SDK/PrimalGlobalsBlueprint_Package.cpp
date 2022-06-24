/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C.ExecuteUbergraph_PrimalGlobalsBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalGlobalsBlueprint_C::ExecuteUbergraph_PrimalGlobalsBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C.ExecuteUbergraph_PrimalGlobalsBlueprint");
		
		UPrimalGlobalsBlueprint_C_ExecuteUbergraph_PrimalGlobalsBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPrimalGlobalsBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalGlobalsBlueprint_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C");
		return ptr;
	}

}


