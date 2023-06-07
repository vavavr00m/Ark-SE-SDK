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
	 * AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_FlySwimStrafing.DinoBlueprintBase_RootTransform_FlySwimStrafing_C
	 * Size -> 0x2530 (FullSize[0x2870] - InheritedSize[0x0340])
	 */
	class UDinoBlueprintBase_RootTransform_FlySwimStrafing_C : public UAnimInstance
	{
	public:
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_56C6522B401C71528B16D6B47A3E9090; // 0x0340(0x0060)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_CC7D4221434BC1171B88ADB6F17CCEED; // 0x03A0(0x0028)
		unsigned char                                              UnknownData_DB0P[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_A187175949419147D1A80F8D736A2D57; // 0x03D0(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_92D26E8F48F7460111B1DD8D5F2501B3; // 0x0480(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_093FFBB54799F0293216AC8C024F7742;     // 0x04A8(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7B9573624BBD56827AF2CE8E53FF777E;     // 0x04E0(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_CBFE21794C699661C5DF3BB51945156D;     // 0x0518(0x0038)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9B5C12C2419276288F19DEA906F3BBEB; // 0x0550(0x0060)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_A592395648DC5ECA12DE4EB73E4E93A0; // 0x05B0(0x00F8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_BEB56F5943BB6176F5FC4D983BB1203A; // 0x06A8(0x0040)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2B9B851E43220B1989C85484AAC6A226; // 0x06E8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7B1C60BC4F2E21E6DA24A0BF645F250D; // 0x0710(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_FEC1A3E64E023D22258B1E8A75EEFD17; // 0x0738(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A31278B544676E236886B69A98F5B9C8; // 0x0798(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8098167A4B1946418C609DAE921A841B; // 0x07F8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_66143D5B418610CF45C8D781AE722895; // 0x0828(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9D1FB50C4F1DE497DACCA3A0801826B9; // 0x0888(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_BB774DB9474B0DF8286F27986EF95A5C; // 0x08B8(0x0060)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9AC6C1804E8541715984C392FAA0F9B9;     // 0x0918(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F2128131402F850818B6D7AE1322B888;     // 0x0950(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_04BE40BB407F16BEDE3B05B8FADDD669;     // 0x0988(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C595459A429EDC5268EFF5ADAA191B48; // 0x09C0(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_Root_793BCC2D470A98DDE6F81F9208398CCC;     // 0x09F0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2075B1164410DBFDC7EDFA9C7C1138E1; // 0x0A18(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E05B104F4FBE06752CFAF39E1AB4DC5A; // 0x0A48(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_FA112521465174EA568D96B7AB7CFD21; // 0x0AA8(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6B04B83F43801CD90E2A8CB3FAABAB7F; // 0x0B08(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6053B0F54246C7FF45EA6AB2A04F018F; // 0x0B68(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7A129A174023CC045F48BFA02835E57D; // 0x0B98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8C99FAB5401C7F38FF498490E3A5173F; // 0x0BC8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6A0C3B474DEAA444D14009A853518620; // 0x0BF8(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_771E608B4E18925A9B5F449B4C1CA7FD; // 0x0C58(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_AEBE4DE2419BA9592F1423859BB62D23; // 0x0C88(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_718EA53D44F9C1C9ECA7D39BCA862E65; // 0x0CE8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1D428BC042FC1E57F36ABBA7576BA60D; // 0x0D18(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9EAC5BB04568116E8CD13A97E60628C8; // 0x0D48(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_372AA863447ADDFF88C85CB3CDDE9D01; // 0x0DA8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E64C68944B99ADF5F65037BE1BB1D13D; // 0x0DD8(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20EF3C124275EECE72A655BFDDBD40EF; // 0x0E38(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_80F4D2294587735D04EFB191594D8EF4; // 0x0E68(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7842891A407C7C55C28D0589848C139A; // 0x0EC8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_000230794F779DDC46A455B656E12BE9; // 0x0EF8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1D44BC0F40D0FAE9947310A05462D736; // 0x0F28(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E779994C4DE437711EBB68A2899F5F4F; // 0x0F88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0C1F9C6E45F51480286ACD802447E120; // 0x0FB8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2D5AF81F4C38168A02C6E69FA37DC6E2; // 0x0FE8(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_636D79394C5CD477C80ED59223718E6B; // 0x1048(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F8781B0B481851A1C68AE78DE3FDD7DE; // 0x10A8(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2713AD9740332D1CD5262697C77F156E; // 0x10D8(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_EBF098214E2F91ED4703E5B6D2B201E1; // 0x1118(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_136D253247AF51E7B87FF8AF9D0851AB; // 0x1140(0x0060)
		struct FAnimNode_MultiFabrik_Dinos                         AnimGraphNode_MultiFabrik_Dinos_ACEB24D94B7A43FE082D62ACEB3328BB; // 0x11A0(0x0058)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8B3E12394BC76BDA9BDF7288D0FA6226; // 0x11F8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7645DE814F532B1D227D21A70A4E578F; // 0x1220(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5E60C3D449E123EB7CC0AEA7A1B8EB2A; // 0x1248(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_BA201664430CF0D35B814DB61F67C974; // 0x1270(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15E44AB8426850FC4AB4448B2798FC6C; // 0x12D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FEB7AC4F431E4FACDAA599B66439B22B; // 0x1300(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_C8B36DDE4C717056C5FF1783EE5FD1EA; // 0x1330(0x0060)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9DDD005B4A5A54310438E6B2B1EFA5E9; // 0x1390(0x00B0)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_64AE4F9E476DC1BAE78CE09330163F54; // 0x1440(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_71E87892401E3BD88FA359A826A18289; // 0x1490(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_44F695F4408FD70AC4F7E09F1CC90AE5; // 0x14F0(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C49DEC2446ADEEF267EF14B72935CDD4; // 0x1550(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2B3CBCCB4E5A59DA1FAB64BF5324FAA6; // 0x1580(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_0C7ADD0E49770E2341D431A6CCA78B6D; // 0x15B0(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_DDFE620A4ADBA16CAA6D5F86E756F103; // 0x1610(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_33F6CBBB413BC7513ECE4CAC61A68411; // 0x1670(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25C26C4E4498345615E21994FE7DCB55; // 0x16D0(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B3D175BE4C9D653D88EFE7A83E722754; // 0x1730(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4E78AFAB439865B8C74FB6A5D5988D96; // 0x1790(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_120515C3411231AADC6B7C946F63284E; // 0x17C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_704F4FCE483BD422E1B34CBDF1BF25FF; // 0x17F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7E20292B42AAED5EACEBA6972B793C20; // 0x1820(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D681DEF841A1B1B1983D81BC3108FAA3; // 0x1850(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2ED9399A4C79A93ED6ABACA92B3A2CC2; // 0x1880(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2386015741688DDC6E4C38B0A046EFDE; // 0x18E0(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7C67C82C4487017D2DD29191ED686B13; // 0x1940(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7EC4864748D7E758F6A4DAA5E298FD5F; // 0x1970(0x0030)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_F2D9A56842C9BC9ABBCDE4A18BD52141; // 0x19A0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2225BB2547E8BB0A1841A1B9704D11F0; // 0x19F0(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5BD996794C0F6B6860E1F38F4EA6C23D; // 0x1A50(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_F47FED884C00F8ED40B01AA97022892D; // 0x1AB0(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26A452E04AC6EA83E092B18D03363E2B; // 0x1B10(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D4893DB3455E32E367A708B88B71A903; // 0x1B70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D468DB474942A285DFB2FDAB007EF46B; // 0x1BA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_673F9A7E4B02B40C4DD5F2B3366607BC; // 0x1BD0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D9A1AE004B40D2E58CE88CA802C29D6B; // 0x1C00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2864BAEB473220CB2EB4989759F05E08; // 0x1C30(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6D6DF02E473ECC4D557A238304554E67; // 0x1C60(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_C4BD52A747463933E91B7ABCAE5B8875; // 0x1CC0(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9CEB79C747DA7B0A2DC3268B7D1FF943; // 0x1D20(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_D4A39E9148899917A35574A9254D9E10; // 0x1D50(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AEA3447A4AD63414176F7799564C370A; // 0x1DB0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_98BB62B547FF660963E3D9A4C1BD6FA8; // 0x1DE0(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_C90A545A4C5C2A61249F26AE563DBFDF; // 0x1E40(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B1D566854D968DA0859E259787BAF277; // 0x1EA0(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25B6D38B47ECB92C8EDBBCB51899A6B2; // 0x1F00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AAEC99EB41511EBB89226682AC2C52D8; // 0x1F30(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_CF97F4864188DE62DDC17E819797665D; // 0x1F60(0x0060)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_1B44F21B421D0C2C36434D9E8C604F08; // 0x1FC0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8495D8BC4BEF2D88D1CD86A76D186C8B; // 0x2010(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_62D665324E77A890F4FFC09E336C550C; // 0x2040(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B9061D224546E3CECB8B20800B2A2183; // 0x2070(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_999388704E87379BB646F3A24E73F6A6; // 0x20D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5390735F497A0E26CF99AF97A3EEAF63; // 0x2100(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A4B9298B40027CF1A20A269D0161E676; // 0x2130(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_575B9BF5413ABEE9BF730180EEAE5E96; // 0x2190(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_88E7DD8A48312018432250AE7C8E6CA7; // 0x21C0(0x0030)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_BBEB72A147FB4D86A89D8D8D68A285FC; // 0x21F0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_ED3BE5BD4C828C7B27347DBAF08D1C4A; // 0x2240(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0331E95F4DC887892F558D9CC733C3FB; // 0x22A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31A5AD9346919C1899AD38942AA6F444; // 0x22D0(0x0030)
		bool                                                       bIsMoving;                                               // 0x2300(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OH7W[0x3];                                   // 0x2301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x2304(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x2310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimYaw;                                                  // 0x2314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RootLocationOffset;                                      // 0x2318(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAimOffset;                                           // 0x2324(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CIXU[0x3];                                   // 0x2325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAnimRate;                                        // 0x2328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFlying;                                               // 0x232C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C881[0x3];                                   // 0x232D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  RootOffsetTransform;                                     // 0x2330(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinimumMovementSpeed;                                    // 0x2360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingAnimPlayRate;                                     // 0x2364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendInTime;                                      // 0x2368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendOutTime;                                     // 0x236C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendInTime;                                       // 0x2370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendOutTime;                                      // 0x2374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseFalling;                                             // 0x2378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x2379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRV7[0x2];                                   // 0x237A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumMovementSpeedFlying;                              // 0x237C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseTurning;                                             // 0x2380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsTurning;                                              // 0x2381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTurningRight;                                           // 0x2382(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5RD[0x1];                                   // 0x2383(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinTurnRateForTurnAnimation;                             // 0x2384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningEnabledBlendTime;                                 // 0x2388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDisabledBlendTime;                                // 0x238C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDirectionBlendTime;                               // 0x2390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlyingMoveBlendIn;                                       // 0x2394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlyingMoveBlendOut;                                      // 0x2398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementAnimRatePower;                                   // 0x239C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSleepingAnim;                                        // 0x23A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsSleeping;                                             // 0x23A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSkipAnimGraph;                                          // 0x23A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseFlyingOffset;                                        // 0x23A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FlyingOffset;                                            // 0x23A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentFlyingOffset;                                     // 0x23B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LandedOffset;                                            // 0x23BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlinkBlend;                                              // 0x23C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseBlinking;                                            // 0x23CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMounted;                                              // 0x23CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseMounted;                                             // 0x23CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1PCZ[0x1];                                   // 0x23CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimOffsetYawScale;                                       // 0x23D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetPitchScale;                                     // 0x23D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRunning;                                              // 0x23D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRunning;                                             // 0x23D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsStrafingRight;                                        // 0x23DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GUL3[0x1];                                   // 0x23DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrafingMagnitude;                                       // 0x23DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseStrafing;                                            // 0x23E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UWI3[0x3];                                   // 0x23E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrafingEnabledBlendTime;                                // 0x23E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StrafingDisabledBlendTime;                               // 0x23E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSpeed;                                                // 0x23EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLatched;                                               // 0x23F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLatchedDownward;                                       // 0x23F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bElevating;                                              // 0x23F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDelevating;                                             // 0x23F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseElevation;                                           // 0x23F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseBackwardsAnim;                                       // 0x23F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMovingBackwards;                                      // 0x23F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseTurningOnlyWhenMoving;                                // 0x23F7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FlyingOnlyUseHorizontalVelocity;                         // 0x23F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ElevationDontRequireMoving;                              // 0x23F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DW8X[0x2];                                   // 0x23FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlyingBlendInTime;                                       // 0x23FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlyingBlendOutTime;                                      // 0x2400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GroundIdleBlendOutTime;                                  // 0x2404(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GroundIdleBlendInTime;                                   // 0x2408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ElevationBlendInTime;                                    // 0x240C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ElevationBlendOutTime;                                   // 0x2410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnlyStrafeIfNotTurning;                                  // 0x2414(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseAccelerationForDirectionalAnims;                      // 0x2415(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LastStrafeWasRight;                                      // 0x2416(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_COD6[0x1];                                   // 0x2417(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastVelocity;                                            // 0x2418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Acceleration;                                            // 0x2424(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccelerationInterpSpeed;                                 // 0x2430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSwimming;                                            // 0x2434(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSwimming;                                              // 0x2435(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V8KV[0x2];                                   // 0x2436(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumMovementSpeedSwimming;                            // 0x2438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseWaterWalkingAnims;                                   // 0x243C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HD0E[0x3];                                   // 0x243D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LatchedOffset;                                           // 0x2440(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AbsZVelToUseElevation;                                   // 0x244C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisableIK;                                              // 0x2450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCUA[0x3];                                   // 0x2451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LatchedOffsetAlpha;                                      // 0x2454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ElevationMagnitude;                                      // 0x2458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MagnitudeUpdateTime;                                     // 0x245C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCarrying;                                             // 0x2460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasPassengers;                                          // 0x2461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0OBU[0x2];                                   // 0x2462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaterWalkingOffset;                                      // 0x2464(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchOffsetInterpSpeed;                                  // 0x2470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IKBlendTime;                                             // 0x2474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventFlyingOffset;                                    // 0x2478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OVKD[0x7];                                   // 0x2479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastFlyingOffsetCeilingCheckTime;                        // 0x2480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchBlendTime;                                          // 0x2488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue;                               // 0x248C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x2490(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1DLP[0x3];                                   // 0x2491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_ReturnValue2;                              // 0x2494(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select2_CmpSuccess;                               // 0x2498(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DW5K[0x3];                                   // 0x2499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x249C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x24A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x24A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x24A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x24AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x24AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x24AE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x24AF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x24B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x24B1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x24B2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TCOW[0x1];                                   // 0x24B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_ReturnValue3;                              // 0x24B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select3_CmpSuccess;                               // 0x24B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1J08[0x3];                                   // 0x24B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue5;               // 0x24BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue6;               // 0x24C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue4;                              // 0x24C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select4_CmpSuccess;                               // 0x24C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y2R[0x3];                                   // 0x24C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue7;               // 0x24CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue8;               // 0x24D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue5;                              // 0x24D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select5_CmpSuccess;                               // 0x24D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTWT[0x3];                                   // 0x24D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue9;               // 0x24DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x24E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OGFG[0x3];                                   // 0x24E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue10;              // 0x24E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue4;                         // 0x24E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DY72[0x3];                                   // 0x24E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_SelectVector_ReturnValue;                       // 0x24EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x24F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x24FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x2500(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x2508(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2510(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KX8I[0x3];                                   // 0x2511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x2514(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x2520(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x252C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x2538(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x2544(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x2548(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x254C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x2550(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x2554(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZJI[0x3];                                   // 0x2555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x2558(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x255C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PX5Z[0x3];                                   // 0x255D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Abs_ReturnValue2;                               // 0x2560(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue2;             // 0x2564(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetVelocity_ReturnValue2;                       // 0x2570(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue3;                            // 0x257C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CallFunc_K2_GetRootComponent_ReturnValue;                // 0x2588(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CallFunc_GetAttachParent_ReturnValue;                    // 0x2590(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UHierarchicalInstancedStaticMeshComponent*           K2Node_DynamicCast_AsHierarchicalInstancedStaticMeshComponent; // 0x2598(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x25A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x25A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x25A2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x25A3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x25A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x25A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3IO[0x4];                                   // 0x25AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            CallFunc_GetPassengers_ReturnValue;                      // 0x25B0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_GetIsCarrying_IsCarrying;                       // 0x25C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue;                 // 0x25C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T44D[0x2];                                   // 0x25C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetMaxAcceleration_ReturnValue;                 // 0x25C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetMaxSpeed_ReturnValue;                        // 0x25C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8IZC[0x4];                                   // 0x25CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue;                 // 0x25D0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x25E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetVelocity_ReturnValue3;                       // 0x25EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x25F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7TK4[0x3];                                   // 0x25F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue4;                            // 0x25FC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x2608(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMeshGameplayRelevant_ReturnValue;             // 0x2614(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x2615(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIDP[0xA];                                   // 0x2616(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;  // 0x2620(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;         // 0x2650(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsetsTransform_RootLocOffset;           // 0x2654(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsetsTransform_ReturnValue;             // 0x2660(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_ComposeRotators_ReturnValue;                    // 0x266C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x2678(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x267C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x2680(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x2684(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x2688(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue3;                               // 0x268C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x2690(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBH3[0x3];                                   // 0x2691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetDefaultMovementSpeed_ReturnValue;            // 0x2694(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x2698(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x2699(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue3;               // 0x269A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8UL[0x1];                                   // 0x269B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x269C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_Conv_VectorToVector2D_ReturnValue;              // 0x26A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x26A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x26AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x26AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x26AE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x26AF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x26B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x26BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x26C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue;                          // 0x26CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue2;                         // 0x26D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x26E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x26E5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7AJ7[0x2];                                   // 0x26E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x26E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x26EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QO6A[0x3];                                   // 0x26ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue2;              // 0x26F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue11;              // 0x26F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x26F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x26FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue12;              // 0x2700(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x2704(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue13;              // 0x2708(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue3;                    // 0x270C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue3;              // 0x2710(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x2714(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue6;                        // 0x2715(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue7;                        // 0x2716(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x2717(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue5;                         // 0x2718(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue8;                        // 0x2719(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8P0T[0x2];                                   // 0x271A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_ReturnValue6;                              // 0x271C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select6_CmpSuccess;                               // 0x2720(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x2721(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x2722(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q81X[0x1];                                   // 0x2723(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue4;                 // 0x2724(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;        // 0x2728(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue4;              // 0x272C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_SelectRotator_ReturnValue;                      // 0x2730(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetRightVector_ReturnValue;                     // 0x273C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue5;                            // 0x2748(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue3;                       // 0x2754(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue9;                        // 0x2758(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ANY4[0x3];                                   // 0x2759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_SelectVector_ReturnValue2;                      // 0x275C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue3;                      // 0x2768(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue2;                             // 0x2774(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue3;                             // 0x2778(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue6;                // 0x277C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N652[0x3];                                   // 0x277D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x2780(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue5;                 // 0x2784(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue7;                // 0x2788(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KD6C[0x3];                                   // 0x2789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue6;                            // 0x278C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue7;                            // 0x2798(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x27A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue3;                  // 0x27A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x27AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x27AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue10;                       // 0x27AE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue8;                // 0x27AF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue4;                               // 0x27B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue6;                         // 0x27B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KECK[0x3];                                   // 0x27B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue14;              // 0x27B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_VectorVector_ReturnValue;           // 0x27BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue11;                       // 0x27BD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q8EE[0x2];                                   // 0x27BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x27C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x27CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue3;                         // 0x27D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue4;                         // 0x27E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x27F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x27F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue;                 // 0x2800(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue3;                   // 0x2804(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue12;                       // 0x2805(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue9;                // 0x2806(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue10;               // 0x2807(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue13;                       // 0x2808(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x2809(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z6SA[0x2];                                   // 0x280A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue5;              // 0x280C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue6;              // 0x2810(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x2814(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue14;                       // 0x2815(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_727Y[0x2];                                   // 0x2816(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x2818(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue7;                         // 0x281C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3MH[0x3];                                   // 0x281D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue4;                       // 0x2820(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x2824(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x2828(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue2;                         // 0x282C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue3;                         // 0x2830(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue8;                       // 0x2834(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue15;                       // 0x2835(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue9;                       // 0x2836(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue8;                         // 0x2837(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue16;                       // 0x2838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YXJS[0x3];                                   // 0x2839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue5;                       // 0x283C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_Constant_ReturnValue;                 // 0x2840(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue10;                      // 0x2844(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue17;                       // 0x2845(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AVUH[0x2];                                   // 0x2846(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2848(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue2;             // 0x2850(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue2;                // 0x2858(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue11;               // 0x285C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_95JN[0x3];                                   // 0x285D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2860(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void FlyingOffsetCeilingCheck(class APrimalDinoCharacter* Dino);
		void GetIsCarrying(class APrimalDinoCharacter* Dino, bool* IsCarrying);
		void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7692();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_ModifyBone_1068();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7691();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_RotationOffsetBlendSpace_468();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7690();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7689();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9389();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7688();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7687();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7686();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7685();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7684();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7683();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9382();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7682();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7681();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7680();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7679();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7678();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9374();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7677();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7676();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9373();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7675();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7674();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9372();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9371();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7673();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_ModifyBone_1067();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_TwoWayBlend_156();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7672();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7671();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9370();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9369();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7670();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7669();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7668();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7667();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7666();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9365();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9364();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7665();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7664();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9363();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9362();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_TwoWayBlend_155();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7663();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7662();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7661();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7660();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9357();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7659();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7658();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9356();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7657();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7656();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7655();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7654();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9354();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9353();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7653();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_TwoWayBlend_154();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9352();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9351();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7652();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9350();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9349();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7651();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9348();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9347();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_TwoWayBlend_153();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_BlendListByBool_7650();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9346();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing_AnimGraphNode_SequencePlayer_9345();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimStrafing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
