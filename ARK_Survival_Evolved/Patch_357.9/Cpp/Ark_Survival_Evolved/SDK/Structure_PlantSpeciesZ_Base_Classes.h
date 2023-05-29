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
	 * BlueprintGeneratedClass Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C
	 * Size -> 0x0175 (FullSize[0x0C5D] - InheritedSize[0x0AE8])
	 */
	class AStructure_PlantSpeciesZ_Base_C : public AStructureBaseBP_C
	{
	public:
		class UPlantHarvestComponent_C*                            PlantHarvestComponent;                                   // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     PlantLoopingSoundComp;                                   // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       emitterIsActive;                                         // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QFVV[0x3];                                   // 0x0AF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      emitterRange;                                            // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      chargeEmittedPerSecond;                                  // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XT3B[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeEmitter_C*                               chargeManagerBuff;                                       // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              chargeManagerBuffClass;                                  // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          plantLoopingSound;                                       // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0B20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9H3K[0x7];                                   // 0x0B21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_GetClassDefaultObject_ReturnValue;              // 0x0B28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UChargeFunctions_FakeLibrary_C*                      K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;      // 0x0B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DKV9[0x7];                                   // 0x0B39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_GetClassDefaultObject_ReturnValue2;             // 0x0B40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UChargeFunctions_FakeLibrary_C*                      K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C2;     // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType8;                        // 0x0B51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bBValue2;                             // 0x0B52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType7;                        // 0x0B53(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_fValue2;                              // 0x0B54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType6;                        // 0x0B58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XPPY[0x3];                                   // 0x0B59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_fValue;                               // 0x0B5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType8;                              // 0x0B60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue2;                                   // 0x0B61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType7;                              // 0x0B62(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y42Q[0x1];                                   // 0x0B63(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue2;                                    // 0x0B64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType5;                        // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bBValue;                              // 0x0B69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType6;                              // 0x0B6A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue;                                    // 0x0B6B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType5;                              // 0x0B6C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3YPS[0x3];                                   // 0x0B6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue;                                     // 0x0B70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType4;                        // 0x0B74(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YHOV[0x3];                                   // 0x0B75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_CustomEvent_dValue2;                              // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType3;                        // 0x0B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GBD2[0x7];                                   // 0x0B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_CustomEvent_dValue;                               // 0x0B88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType4;                              // 0x0B90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UC9G[0x7];                                   // 0x0B91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue2;                                    // 0x0B98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType3;                              // 0x0BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZIU[0x7];                                   // 0x0BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue;                                     // 0x0BA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType9;                              // 0x0BB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_multicast;                                  // 0x0BB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37KB[0x2];                                   // 0x0BB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue3;                                    // 0x0BB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     K2Node_Event_dValue3;                                    // 0x0BB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue3;                                   // 0x0BC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_triggerEvent;                               // 0x0BC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_multicastEvent;                             // 0x0BC2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3UIZ[0x1];                                   // 0x0BC3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue3;                                    // 0x0BC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0BC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0BC9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType2;                              // 0x0BCA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGMQ[0x1];                                   // 0x0BCB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue2;                                    // 0x0BCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType;                               // 0x0BD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UUOR[0x3];                                   // 0x0BD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue;                                     // 0x0BD4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType2;                        // 0x0BD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T1AZ[0x3];                                   // 0x0BD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_ivalue2;                              // 0x0BDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType;                         // 0x0BE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O8W2[0x3];                                   // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_iValue;                               // 0x0BE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C;               // 0x0BE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0BF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T89D[0x7];                                   // 0x0BF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C2;              // 0x0BF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0C00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_575S[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C3;              // 0x0C08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x0C10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36M1[0x7];                                   // 0x0C11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C4;              // 0x0C18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x0C20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1CGP[0x7];                                   // 0x0C21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C5;              // 0x0C28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast7_CastSuccess;                         // 0x0C30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0C31(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType10;                             // 0x0C32(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue4;                                   // 0x0C33(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_fValue4;                                    // 0x0C34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     K2Node_Event_dValue4;                                    // 0x0C38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_iVariable;                                  // 0x0C40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType11;                             // 0x0C44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue5;                                   // 0x0C45(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PCOQ[0x2];                                   // 0x0C46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue5;                                    // 0x0C48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJXX[0x4];                                   // 0x0C4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue5;                                    // 0x0C50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_iValue4;                                    // 0x0C58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0C5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void GetNumBatteries(int32_t* numBatteries);
		void BPTriggerStasisEvent();
		void ReceiveDestroyed();
		void InitializeState();
		void DestroyChargeBuff();
		void CreateChargeManager();
		void UserConstructionScript();
		void ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable);
		void SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue);
		void CheckForBatteriesAndUpdate_Multicast();
		void InterfaceCheckforBatteriesandUpdateMulticast();
		void ChargeVariableEvent_Boolean(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEvent_Float(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEvent_Float_Multicast(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEvent_Boolean_Multicast(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEvent_Double(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEvent_Double_Multicast(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue);
		void ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue);
		void ChargeVariableEvent_Int(E_ChargeVariableNames variableType, int32_t ivalue);
		void ChargeVariableEvent_Int_Multicast(E_ChargeVariableNames variableType, int32_t ivalue);
		void ReceiveBeginPlay();
		void BPUnstasis();
		void CreateChargeManager_Multicast();
		void InitializeState_Multicast();
		void DestroyChargeBuff_Multicast();
		void ExecuteUbergraph_Structure_PlantSpeciesZ_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
