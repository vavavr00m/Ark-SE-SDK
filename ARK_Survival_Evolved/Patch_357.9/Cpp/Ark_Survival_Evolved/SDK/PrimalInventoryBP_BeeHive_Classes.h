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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C
	 * Size -> 0x002C (FullSize[0x05E9] - InheritedSize[0x05BD])
	 */
	class UPrimalInventoryBP_BeeHive_C : public UPrimalInventoryBP_BaseAutoGenerateItems_C
	{
	public:
		unsigned char                                              UnknownData_IZVV[0x3];                                   // 0x05BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_Event_ForPC;                                      // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x05C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x05D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x05D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A15L[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue;                            // 0x05E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPInventoryRefresh();
		void TryToConsumeFlowers(int32_t NumToConsume, int32_t* NumFailedToConsume, int32_t* NumActuallyConsumed);
		void BPAccessedInventory(class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalInventoryBP_BeeHive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
