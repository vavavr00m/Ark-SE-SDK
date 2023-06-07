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
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.SpawnApexVFX
	 */
	struct ABuff_RhynioNewborn_C_SpawnApexVFX_Params
	{	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.GetHostDinoBloodColor
	 */
	struct ABuff_RhynioNewborn_C_GetHostDinoBloodColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.BuffTickClient
	 */
	struct ABuff_RhynioNewborn_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.PlaySpawnAnim
	 */
	struct ABuff_RhynioNewborn_C_PlaySpawnAnim_Params
	{	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.UpdateCollision
	 */
	struct ABuff_RhynioNewborn_C_UpdateCollision_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2G4Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.LaunchBaby
	 */
	struct ABuff_RhynioNewborn_C_LaunchBaby_Params
	{	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.BPSetupForInstigator
	 */
	struct ABuff_RhynioNewborn_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.BuffTickServer
	 */
	struct ABuff_RhynioNewborn_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZN72[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.BPDeactivated
	 */
	struct ABuff_RhynioNewborn_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.BPActivated
	 */
	struct ABuff_RhynioNewborn_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.PreventActorTargeting
	 */
	struct ABuff_RhynioNewborn_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8XHX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.UserConstructionScript
	 */
	struct ABuff_RhynioNewborn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RhynioNewborn.Buff_RhynioNewborn_C.ExecuteUbergraph_Buff_RhynioNewborn
	 */
	struct ABuff_RhynioNewborn_C_ExecuteUbergraph_Buff_RhynioNewborn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
