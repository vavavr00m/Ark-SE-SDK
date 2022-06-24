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
	 * 		Name   -> Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage");
		
		UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_HelpPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HelpPage_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HelpPage.UI_HelpPage_C");
		return ptr;
	}

}


