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
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible
	 */
	struct ABogSpider_WebAnchorPoint_C_IsAnchorVisible_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult
	 */
	struct ABogSpider_WebAnchorPoint_C_GetAnchorRadiusMult_Params
	{
	public:
		float                                                      Mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor
	 */
	struct ABogSpider_WebAnchorPoint_C_GetAnchorColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius
	 */
	struct ABogSpider_WebAnchorPoint_C_SetAnchorRadius_Params
	{
	public:
		float                                                      NewRadius;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility
	 */
	struct ABogSpider_WebAnchorPoint_C_SetAnchorVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor
	 */
	struct ABogSpider_WebAnchorPoint_C_SetAnchorColor_Params
	{
	public:
		struct FLinearColor                                        WithColor;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript
	 */
	struct ABogSpider_WebAnchorPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint
	 */
	struct ABogSpider_WebAnchorPoint_C_ExecuteUbergraph_BogSpider_WebAnchorPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
