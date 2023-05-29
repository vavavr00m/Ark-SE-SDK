#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SponsoredModsUI.SponsoredModsUI_C.Tick
	 */
	struct USponsoredModsUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
	 */
	struct USponsoredModsUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event
	 */
	struct USponsoredModsUI_C_OnClickedObject_Event_Params
	{
	public:
		class UWidget*                                             clickedWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI
	 */
	struct USponsoredModsUI_C_ExecuteUbergraph_SponsoredModsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
