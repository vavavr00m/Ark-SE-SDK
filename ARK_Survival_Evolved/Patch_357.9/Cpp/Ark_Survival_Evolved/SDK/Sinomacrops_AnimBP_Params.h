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
	 * Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar
	 */
	struct USinomacrops_AnimBP_C_UpdateAnimFromShooterChar_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasBuffFromPawnOwner;                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5KBX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim
	 */
	struct USinomacrops_AnimBP_C_PassengerUpdateAnim_Params
	{
	public:
		class APrimalDinoCharacter*                                CarryingDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP
	 */
	struct USinomacrops_AnimBP_C_ExecuteUbergraph_Sinomacrops_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
