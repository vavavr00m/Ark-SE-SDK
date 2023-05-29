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
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_SetFadingSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       TheMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_SetFadingStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         TheMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_GetFadingMeshComponent_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut
	 */
	struct ADestroyedMesh_SimpleFadeOut_C_ExecuteUbergraph_DestroyedMesh_SimpleFadeOut_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
