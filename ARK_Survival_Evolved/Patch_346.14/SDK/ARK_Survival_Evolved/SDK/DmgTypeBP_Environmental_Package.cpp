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
	 * 		Name   -> Function DmgTypeBP_Environmental.DmgTypeBP_Environmental_C.ExecuteUbergraph_DmgTypeBP_Environmental
	 * 		Flags  -> (Exec)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDmgTypeBP_Environmental_C::ExecuteUbergraph_DmgTypeBP_Environmental(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DmgTypeBP_Environmental.DmgTypeBP_Environmental_C.ExecuteUbergraph_DmgTypeBP_Environmental");
		
		UDmgTypeBP_Environmental_C_ExecuteUbergraph_DmgTypeBP_Environmental_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDmgTypeBP_Environmental_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgTypeBP_Environmental_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
		return ptr;
	}

}


