// AnimBlueprintGeneratedClass DropPod_ABP.DropPod_ABP_C
// Size: 0x4c8 (Inherited: 0x2c0)
struct UDropPod_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x310(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x320(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x340(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x370(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x478(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x498(0x20)
	float IsCustomizationFloat; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct AYPodActor* podActor; // 0x4c0(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function DropPod_ABP.DropPod_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function DropPod_ABP.DropPod_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnSpawnContextAssigned(struct AYPodActor* podActor); // Function DropPod_ABP.DropPod_ABP_C.OnSpawnContextAssigned // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeCustomization(); // Function DropPod_ABP.DropPod_ABP_C.InitializeCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_DropPod_ABP(int32_t EntryPoint); // Function DropPod_ABP.DropPod_ABP_C.ExecuteUbergraph_DropPod_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

