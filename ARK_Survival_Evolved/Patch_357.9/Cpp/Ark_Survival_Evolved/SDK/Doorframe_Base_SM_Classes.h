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
	 * BlueprintGeneratedClass Doorframe_Base_SM.Doorframe_Base_SM_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class ADoorframe_Base_SM_C : public AWall_Base_Small_SM_C
	{
	public:
		class USphereComponent*                                    Sphere2;                                                 // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    Sphere1;                                                 // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Doorframe_Base_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
