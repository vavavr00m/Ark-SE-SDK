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
	 * BlueprintGeneratedClass Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C
	 * Size -> 0x00BE (FullSize[0x247E] - InheritedSize[0x23C0])
	 */
	class AWyvern_Character_BP_ZombieBase_C : public AWyvern_Character_BP_Base_C
	{
	public:
		struct FVector                                             NewFlyingOffset;                                         // 0x23C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BRUU[0x4];                                   // 0x23CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      EventTags;                                               // 0x23D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x23E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x23E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LXOG[0x3];                                   // 0x23E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x23E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3OVY[0x4];                                   // 0x23EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue;                    // 0x23F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                K2Node_Event_Key;                                        // 0x23F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UJsonObject*                                         K2Node_Event_JsonData;                                   // 0x2400(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWyvernAnimBlueprint_C*                              K2Node_DynamicCast_AsWyvernAnimBlueprint_C;              // 0x2408(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2410(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x2411(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_73CQ[0x6];                                   // 0x2412(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CallFunc_GetStringArrayField_OutValue;                   // 0x2418(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_GetStringArrayField_ReturnValue;                // 0x2428(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchName_CmpSuccess;                            // 0x2429(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KL46[0x6];                                   // 0x242A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_GetAllActorsWithInterface_OutActors;            // 0x2430(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x2440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Array_Contains_ItemToFind_RefProperty;          // 0x2448(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_Array_Contains_ReturnValue;                     // 0x2458(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVTQ[0x7];                                   // 0x2459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsModCommunication_Interface_C[0x10]; // 0x2460(0x0010) UNKNOWN PROPERTY: InterfaceProperty Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.K2Node_DynamicCast_AsModCommunication_Interface_C
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x2470(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7V3V[0x3];                                   // 0x2471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2474(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2478(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x247C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x247D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void RequestModData(const class FName& Key, class UJsonObject** JsonData);
		void RequestModDataProcessing(const class FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SendModData(const class FName& Key, class UJsonObject* JsonData);
		void ExecuteUbergraph_Wyvern_Character_BP_ZombieBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
