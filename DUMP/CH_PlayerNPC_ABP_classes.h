// AnimBlueprintGeneratedClass CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C
// Size: 0x4c9 (Inherited: 0x2c0)
struct UCH_PlayerNPC_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2c8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x378(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x478(0x30)
	enum class EYCustomizationBodyType bodyType; // 0x4a8(0x01)
	enum class EYCustomizationCategory PreviewBodyPart; // 0x4a9(0x01)
	char pad_4AA[0x2]; // 0x4aa(0x02)
	struct FName archetypeId; // 0x4ac(0x08)
	bool IsPreviewedPlayerInEOM; // 0x4b4(0x01)
	enum class EYEquipedWeaponPoseType EquippedWeaponPose; // 0x4b5(0x01)
	enum class EYCameraIntentionType CameraState; // 0x4b6(0x01)
	enum class AnimArchetypeEnum Archetype; // 0x4b7(0x01)
	struct UAnimSequence* EmoteSequence; // 0x4b8(0x08)
	struct UAnimSequence* AnimationSequence; // 0x4c0(0x08)
	enum class NPC_States ActiveNPCState; // 0x4c8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void onArchetypeChanged(struct FName ArchetypeIDName); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.onArchetypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchOver(bool OnMatchOver); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.OnMatchOver // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void IntentionCameraTypeChange(enum class EYCameraIntentionType intention); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.IntentionCameraTypeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_CH_PlayerNPC_ABP(int32_t EntryPoint); // Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.ExecuteUbergraph_CH_PlayerNPC_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

