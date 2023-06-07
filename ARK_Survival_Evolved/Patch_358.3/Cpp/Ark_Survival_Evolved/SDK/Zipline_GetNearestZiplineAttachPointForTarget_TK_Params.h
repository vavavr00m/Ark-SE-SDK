#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
	 */
	struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params
	{
	public:
		struct FVector                                             GroundLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AttachLocation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
	 */
	struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK
	 */
	struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
