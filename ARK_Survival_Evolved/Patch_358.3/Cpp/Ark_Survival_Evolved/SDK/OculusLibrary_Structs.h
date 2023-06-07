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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OculusLibrary.OculusFunctionLibrary.HmdUserProfileField
	 * Size -> 0x0020
	 */
	struct FHmdUserProfileField
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
		class FString                                              FieldValue;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct OculusLibrary.OculusFunctionLibrary.HmdUserProfile
	 * Size -> 0x0048
	 */
	struct FHmdUserProfile
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
		class FString                                              Gender;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor
		float                                                      PlayerHeight;                                            // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EyeHeight;                                               // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IPD;                                                     // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           NeckToEyeDistance;                                       // 0x002C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0A82[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHmdUserProfileField>                        ExtraFields;                                             // 0x0038(0x0010) BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
