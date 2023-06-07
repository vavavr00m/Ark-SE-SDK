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
	 * BlueprintGeneratedClass Buff_Thornmail_Poison.Buff_Thornmail_Poison_C
	 * Size -> 0x000A (FullSize[0x09A4] - InheritedSize[0x099A])
	 */
	class ABuff_Thornmail_Poison_C : public ABuff_Thornmail_Parent_C
	{
	public:
		bool                                                       usepercentdamage;                                        // 0x099A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMBW[0x1];                                   // 0x099B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      rawdamage;                                               // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      roarboosteddamagemultiplier;                             // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CalculateDoTDamage(float TimeSinceLastDoT, float* Damage);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Thornmail_Poison(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
