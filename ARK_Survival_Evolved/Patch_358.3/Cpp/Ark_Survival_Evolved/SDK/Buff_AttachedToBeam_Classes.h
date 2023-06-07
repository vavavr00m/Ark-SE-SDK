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
	 * BlueprintGeneratedClass Buff_AttachedToBeam.Buff_AttachedToBeam_C
	 * Size -> 0x0019 (FullSize[0x0999] - InheritedSize[0x0980])
	 */
	class ABuff_AttachedToBeam_C : public ABuff_Base_C
	{
	public:
		float                                                      AllowedStruggleInterval;                                 // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PTWC[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastStruggleTime;                                        // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentStrugglePercentage;                               // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleFailIncreasePercentage;                          // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0998(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		void UpdatePreventInstigatorAttack(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void DoStruggle();
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void UserConstructionScript();
		void Server_Struggle();
		void ExecuteUbergraph_Buff_AttachedToBeam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
