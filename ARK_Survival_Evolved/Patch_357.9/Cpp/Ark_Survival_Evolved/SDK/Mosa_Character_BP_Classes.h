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
	 * BlueprintGeneratedClass Mosa_Character_BP.Mosa_Character_BP_C
	 * Size -> 0x0051 (FullSize[0x22D9] - InheritedSize[0x2288])
	 */
	class AMosa_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UBoxComponent*                                       PlatformSaddleBuildArea;                                 // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Mosasaur_C*         DinoCharacterStatus_BP_Mosasaur_C1;                      // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x2298(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2299(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LY67[0x2];                                   // 0x229A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x229C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class APrimalBuff*>                                 CallFunc_GetBuffs_TheBuffs;                              // 0x22A0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x22B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x22B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x22B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R5JE[0x7];                                   // 0x22B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_Array_Get_Item;                                 // 0x22C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x22C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2U09[0x7];                                   // 0x22C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_DinoTekHelmet_Base_C*                          K2Node_DynamicCast_AsBuff_DinoTekHelmet_Base_C;          // 0x22D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x22D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float BPModifyFOV(float FOVIn);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		bool BPHandleOnStopTargeting();
		void UserConstructionScript();
		void InpActEvt_AltFire_K2Node_InputActionEvent_194();
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_193();
		void ExecuteUbergraph_Mosa_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
