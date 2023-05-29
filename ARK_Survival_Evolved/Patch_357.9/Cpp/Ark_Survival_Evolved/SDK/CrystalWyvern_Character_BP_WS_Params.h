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
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX
	 */
	struct ACrystalWyvern_Character_BP_WS_C_SpawnWaterOverlapVFX_Params
	{
	public:
		class AActor*                                              WaterActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript
	 */
	struct ACrystalWyvern_Character_BP_WS_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap
	 */
	struct ACrystalWyvern_Character_BP_WS_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap
	 */
	struct ACrystalWyvern_Character_BP_WS_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime
	 */
	struct ACrystalWyvern_Character_BP_WS_C_Multi_UpdateBuffTime_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS
	 */
	struct ACrystalWyvern_Character_BP_WS_C_ExecuteUbergraph_CrystalWyvern_Character_BP_WS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
