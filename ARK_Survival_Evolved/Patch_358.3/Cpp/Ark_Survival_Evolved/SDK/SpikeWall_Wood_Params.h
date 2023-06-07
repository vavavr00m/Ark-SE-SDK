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
	 * Function SpikeWall_Wood.SpikeWall_Wood_C.UserConstructionScript
	 */
	struct ASpikeWall_Wood_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpikeWall_Wood.SpikeWall_Wood_C.DamageTick
	 */
	struct ASpikeWall_Wood_C_DamageTick_Params
	{	};

	/**
	 * Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HX1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpikeWall_Wood.SpikeWall_Wood_C.ExecuteUbergraph_SpikeWall_Wood
	 */
	struct ASpikeWall_Wood_C_ExecuteUbergraph_SpikeWall_Wood_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
