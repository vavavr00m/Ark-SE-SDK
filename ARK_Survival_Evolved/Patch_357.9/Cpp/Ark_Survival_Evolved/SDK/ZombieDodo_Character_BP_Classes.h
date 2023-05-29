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
	 * BlueprintGeneratedClass ZombieDodo_Character_BP.ZombieDodo_Character_BP_C
	 * Size -> 0x00A6 (FullSize[0x2336] - InheritedSize[0x2290])
	 */
	class AZombieDodo_Character_BP_C : public ADodo_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Zomdod_C*           DinoCharacterStatus_BP_Zomdod_C1;                        // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FString>                                      EventTags;                                               // 0x2298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x22A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x22AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_27B5[0x3];                                   // 0x22AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x22B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                K2Node_Event_Key;                                        // 0x22B4(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8KZ[0x4];                                   // 0x22BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UJsonObject*                                         K2Node_Event_JsonData;                                   // 0x22C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x22C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0OHF[0x7];                                   // 0x22C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CallFunc_GetStringArrayField_OutValue;                   // 0x22D0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_GetStringArrayField_ReturnValue;                // 0x22E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchName_CmpSuccess;                            // 0x22E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VTUH[0x6];                                   // 0x22E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_GetAllActorsWithInterface_OutActors;            // 0x22E8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x22F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Array_Contains_ItemToFind_RefProperty;          // 0x2300(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_Array_Contains_ReturnValue;                     // 0x2310(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MV73[0x7];                                   // 0x2311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsModCommunication_Interface_C[0x10]; // 0x2318(0x0010) UNKNOWN PROPERTY: InterfaceProperty ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.K2Node_DynamicCast_AsModCommunication_Interface_C
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2328(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V46B[0x3];                                   // 0x2329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x232C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2330(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2334(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x2335(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void RequestModData(const class FName& Key, class UJsonObject** JsonData);
		void RequestModDataProcessing(const class FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData);
		void UserConstructionScript();
		void SendModData(const class FName& Key, class UJsonObject* JsonData);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ZombieDodo_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
