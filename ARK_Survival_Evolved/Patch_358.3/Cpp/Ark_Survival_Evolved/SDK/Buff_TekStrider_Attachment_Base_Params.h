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
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc
	 */
	struct ABuff_TekStrider_Attachment_Base_C_getsocketloc_Params
	{
	public:
		struct FVector                                             fallbackloc;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                socketname;                                              // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Q7W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Character;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldgetsocketloc;                                       // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear
	 */
	struct ABuff_TekStrider_Attachment_Base_C_isheadclear_Params
	{
	public:
		class FName                                                extrasocket;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromanimbp;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       headisclear;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldfindsocket;                                         // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations
	 */
	struct ABuff_TekStrider_Attachment_Base_C_tracecheckforblockersbetweenlocations_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ignorefoliage;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q421[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0020(0x0088)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFWA[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer
	 */
	struct ABuff_TekStrider_Attachment_Base_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider
	 */
	struct ABuff_TekStrider_Attachment_Base_C_clearrider_Params
	{
	public:
		class AShooterCharacter*                                   prevrider;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider
	 */
	struct ABuff_TekStrider_Attachment_Base_C_setrider_Params
	{	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped
	 */
	struct ABuff_TekStrider_Attachment_Base_C_TriggerDoubletapped_Params
	{	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased
	 */
	struct ABuff_TekStrider_Attachment_Base_C_TriggerReleased_Params
	{	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated
	 */
	struct ABuff_TekStrider_Attachment_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Attachment_Base_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger
	 */
	struct ABuff_TekStrider_Attachment_Base_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Attachment_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base
	 */
	struct ABuff_TekStrider_Attachment_Base_C_ExecuteUbergraph_Buff_TekStrider_Attachment_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
