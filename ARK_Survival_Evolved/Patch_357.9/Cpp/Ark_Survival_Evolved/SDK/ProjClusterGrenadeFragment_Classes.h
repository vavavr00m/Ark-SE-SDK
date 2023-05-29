﻿#pragma once

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
	 * BlueprintGeneratedClass ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C
	 * Size -> 0x0077 (FullSize[0x06D7] - InheritedSize[0x0660])
	 */
	class AProjClusterGrenadeFragment_C : public AShooterProjectile
	{
	public:
		class UChildActorComponent*                                ChildProjectile;                                         // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     Audio1;                                                  // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class AShooterProjectile*>                          OtherFragments;                                          // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0680(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x0684(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AShooterProjectile*>                          K2Node_Event_FragmentArray;                              // 0x0688(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		float                                                      K2Node_Event_Damage;                                     // 0x0698(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YRU[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                         K2Node_Event_DamageType;                                 // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         K2Node_Event_InstigatedBy;                               // 0x06A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_DamageCauser;                               // 0x06B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureTurret*                              K2Node_DynamicCast_AsPrimalStructureTurret;              // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x06C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0QA[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterProjectile*                                  CallFunc_Array_Get_Item;                                 // 0x06C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x06D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x06D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x06D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x06D6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ExecuteUbergraph_ProjClusterGrenadeFragment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
