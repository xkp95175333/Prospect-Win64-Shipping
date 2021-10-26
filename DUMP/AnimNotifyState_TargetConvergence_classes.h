// BlueprintGeneratedClass AnimNotifyState_TargetConvergence.AnimNotifyState_TargetConvergence_C
// Size: 0x44 (Inherited: 0x30)
struct UAnimNotifyState_TargetConvergence_C : UYAnimNotifyState_TargetConverge {
	float DesiredDistance; // 0x30(0x04)
	float MaxScale; // 0x34(0x04)
	float MinScale; // 0x38(0x04)
	float MaxTargetDistance; // 0x3c(0x04)
	float MaxAngleToTarget; // 0x40(0x04)

	void ReceiveRootMotionExtracted(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FTransform RootMotion, float FrameDeltaTime, float currentTime, float RemainingTime); // Function AnimNotifyState_TargetConvergence.AnimNotifyState_TargetConvergence_C.ReceiveRootMotionExtracted // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_TargetConvergence.AnimNotifyState_TargetConvergence_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_TargetConvergence.AnimNotifyState_TargetConvergence_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
};

