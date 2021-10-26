// AnimBlueprintGeneratedClass StationDropPod_ABP.StationDropPod_ABP_C
// Size: 0x400 (Inherited: 0x2c0)
struct UStationDropPod_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2f8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3b8(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function StationDropPod_ABP.StationDropPod_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function StationDropPod_ABP.StationDropPod_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_StationDropPod_ABP(int32_t EntryPoint); // Function StationDropPod_ABP.StationDropPod_ABP_C.ExecuteUbergraph_StationDropPod_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

