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
	 * Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelAudioOverride
	 */
	struct UPrimalItemSkin_TorchScorched_C_BPGetFuelAudioOverride_Params
	{
	public:
		class APrimalStructure*                                    ForStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelParticleSystemOverride
	 */
	struct UPrimalItemSkin_TorchScorched_C_BPGetFuelParticleSystemOverride_Params
	{
	public:
		class APrimalStructure*                                    ForStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UParticleSystem*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.ExecuteUbergraph_PrimalItemSkin_TorchScorched
	 */
	struct UPrimalItemSkin_TorchScorched_C_ExecuteUbergraph_PrimalItemSkin_TorchScorched_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
