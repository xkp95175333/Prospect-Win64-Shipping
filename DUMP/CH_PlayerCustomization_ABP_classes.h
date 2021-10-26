// AnimBlueprintGeneratedClass CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C
// Size: 0x1278 (Inherited: 0x2c0)
struct UCH_PlayerCustomization_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x2f8(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x3a8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x458(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4a0(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4e8(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x588(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x690(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x6b0(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x730(0x48)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x778(0x20)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x798(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x848(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x8c8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x988(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa08(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb60(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xb88(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xbb0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xc30(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xcb0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xd30(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xdb0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xe30(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xeb0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xf30(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xfb0(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1060(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x10e0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1160(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x11e0(0x80)
	enum class EYCustomizationBodyType bodyType; // 0x1260(0x01)
	enum class EYCustomizationCategory PreviewBodyPart; // 0x1261(0x01)
	char pad_1262[0x2]; // 0x1262(0x02)
	struct FName archetypeId; // 0x1264(0x08)
	bool IsPreviewedPlayerInEOM; // 0x126c(0x01)
	enum class EYEquipedWeaponPoseType EquippedWeaponPose; // 0x126d(0x01)
	enum class EYCameraIntentionType CameraState; // 0x126e(0x01)
	enum class AnimArchetypeEnum Archetype; // 0x126f(0x01)
	struct UAnimSequence* EmoteSequence; // 0x1270(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void onArchetypeChanged(struct FName ArchetypeIDName); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.onArchetypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchOver(bool OnMatchOver); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.OnMatchOver // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void IntentionCameraTypeChange(enum class EYCameraIntentionType intention); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.IntentionCameraTypeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnQuickMenuEntered(struct FName ArchetypeIDName); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.OnQuickMenuEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_CH_PlayerCustomization_ABP(int32_t EntryPoint); // Function CH_PlayerCustomization_ABP.CH_PlayerCustomization_ABP_C.ExecuteUbergraph_CH_PlayerCustomization_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

