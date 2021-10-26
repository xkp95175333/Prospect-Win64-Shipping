// BlueprintGeneratedClass AnimNotifyState_AIMeleeAttack.AnimNotifyState_AIMeleeAttack_C
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_AIMeleeAttack_C : UAnimNotifyState {
	struct FString contextInfo; // 0x30(0x10)
	struct FName AttackLocation_BoneName; // 0x40(0x08)
	struct FDataTableRowHandle WeaponTransport; // 0x48(0x10)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AIMeleeAttack.AnimNotifyState_AIMeleeAttack_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AIMeleeAttack.AnimNotifyState_AIMeleeAttack_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
};

