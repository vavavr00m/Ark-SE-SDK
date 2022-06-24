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
	 * 		Name   -> Function WorldModifiersContainer_BP.WorldModifiersContainer_BP_C.ExecuteUbergraph_WorldModifiersContainer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldModifiersContainer_BP_C::ExecuteUbergraph_WorldModifiersContainer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WorldModifiersContainer_BP.WorldModifiersContainer_BP_C.ExecuteUbergraph_WorldModifiersContainer_BP");
		
		UWorldModifiersContainer_BP_C_ExecuteUbergraph_WorldModifiersContainer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWorldModifiersContainer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldModifiersContainer_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WorldModifiersContainer_BP.WorldModifiersContainer_BP_C");
		return ptr;
	}

}


