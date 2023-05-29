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
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.InterpSantaSpeed
	 */
	struct ASantaRaptor_Blueprint_C_InterpSantaSpeed_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.UserConstructionScript
	 */
	struct ASantaRaptor_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveBeginPlay
	 */
	struct ASantaRaptor_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.RunOpenSequence
	 */
	struct ASantaRaptor_Blueprint_C_RunOpenSequence_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveTick
	 */
	struct ASantaRaptor_Blueprint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoGiftDrop
	 */
	struct ASantaRaptor_Blueprint_C_DoGiftDrop_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.DoSantaHo
	 */
	struct ASantaRaptor_Blueprint_C_DoSantaHo_Params
	{
	public:
		struct FVector                                             AtLoc;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ReceiveDestroyed
	 */
	struct ASantaRaptor_Blueprint_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function SantaRaptor_Blueprint.SantaRaptor_Blueprint_C.ExecuteUbergraph_SantaRaptor_Blueprint
	 */
	struct ASantaRaptor_Blueprint_C_ExecuteUbergraph_SantaRaptor_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
