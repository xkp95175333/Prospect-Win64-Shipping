// BlueprintGeneratedClass AnimNotifyState_RotationControl.AnimNotifyState_RotationControl_C
// Size: 0x35 (Inherited: 0x30)
struct UAnimNotifyState_RotationControl_C : UAnimNotifyState {
	float RotationRateYawOverride; // 0x30(0x04)
	bool AllowRotation; // 0x34(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_RotationControl.AnimNotifyState_RotationControl_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_RotationControl.AnimNotifyState_RotationControl_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
};

