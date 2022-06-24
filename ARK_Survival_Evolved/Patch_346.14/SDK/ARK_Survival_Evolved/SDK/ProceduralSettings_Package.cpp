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
	 * 		Name   -> Function ProceduralSettings.ProceduralSettings_C.ExecuteUbergraph_ProceduralSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProceduralSettings_C::ExecuteUbergraph_ProceduralSettings(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralSettings.ProceduralSettings_C.ExecuteUbergraph_ProceduralSettings");
		
		UProceduralSettings_C_ExecuteUbergraph_ProceduralSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSettings_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProceduralSettings.ProceduralSettings_C");
		return ptr;
	}

}


