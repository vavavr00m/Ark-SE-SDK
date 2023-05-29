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
	 * BlueprintGeneratedClass Buff_StriderHacking.Buff_StriderHacking_C
	 * Size -> 0x0060 (FullSize[0x0D84] - InheritedSize[0x0D24])
	 */
	class ABuff_StriderHacking_C : public ABuff_StriderHackingParent_C
	{
	public:
		unsigned char                                              UnknownData_I1ZT[0x4];                                   // 0x0D24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              strider;                                                 // 0x0D28(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    successfulbeathits;                                      // 0x0D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    requiredsuccessfulhits;                                  // 0x0D34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             hackingsuccess;                                          // 0x0D38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             onhackhitmiss;                                           // 0x0D48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             onhackhitsuccess;                                        // 0x0D58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UParticleSystem*                                     hackingparticletemplate;                                 // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             initialstriderlocation;                                  // 0x0D70(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasdoneinitialinput;                                     // 0x0D7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OQIO[0x3];                                   // 0x0D7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    successfulbeathits_client;                               // 0x0D80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateBuffTimerserverlogic(bool Success, bool fromplayertrigger);
		void UpdateBuffTimer(bool Success, bool fromplayertrigger);
		void RecievedInput(EPrimalCharacterInputType inputtype, bool fromplayerinput);
		void BeatReachedTheEnd();
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BuffTickServer(float DeltaTime);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPOnInputEvent(EPrimalCharacterInputType inputType);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void UserConstructionScript();
		void dohackingvfx();
		void cancelearly();
		void ExecuteUbergraph_Buff_StriderHacking(int32_t EntryPoint);
		void onhackhitsuccess__DelegateSignature();
		void onhackhitmiss__DelegateSignature();
		void HackingSuccess__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
