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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C
	 * Size -> 0x000A (FullSize[0x098A] - InheritedSize[0x0980])
	 */
	class ABuff_FenrirDirewolfBoost_C : public APrimalBuff
	{
	public:
		class UParticleSystemComponent*                            EyeParticles;                                            // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0988(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0989(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		void UpdateParticleColor();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_FenrirDirewolfBoost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
