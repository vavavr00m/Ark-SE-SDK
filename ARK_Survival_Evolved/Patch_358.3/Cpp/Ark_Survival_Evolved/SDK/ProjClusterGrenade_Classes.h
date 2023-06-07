﻿#pragma once

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
	 * BlueprintGeneratedClass ProjClusterGrenade.ProjClusterGrenade_C
	 * Size -> 0x00B9 (FullSize[0x07A9] - InheritedSize[0x06F0])
	 */
	class AProjClusterGrenade_C : public AProjGrenade_C
	{
	public:
		class UAudioComponent*                                     Audio1_1;                                                // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x06F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x06FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FHitResult                                          K2Node_Event_Result;                                     // 0x0700(0x0088) OutParm, Transient, DuplicateTransient, ReferenceParm
		TArray<class AShooterProjectile*>                          K2Node_Event_FragmentArray;                              // 0x0788(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0798(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D4K6[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterProjectile*                                  CallFunc_Array_Get_Item;                                 // 0x07A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x07A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnExplode(struct FHitResult* Result);
		void BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray);
		void ExecuteUbergraph_ProjClusterGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
