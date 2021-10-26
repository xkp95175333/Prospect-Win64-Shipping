// BlueprintGeneratedClass AnimNotify_PlayDTSound.AnimNotify_PlayDTSound_C
// Size: 0x64 (Inherited: 0x38)
struct UAnimNotify_PlayDTSound_C : UAnimNotify {
	struct FString Attach Name; // 0x38(0x10)
	bool Follow; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FDataTableRowHandle Event DT Row; // 0x50(0x10)
	int32_t Reload Event Idx; // 0x60(0x04)

	struct FString GetNotifyName(); // Function AnimNotify_PlayDTSound.AnimNotify_PlayDTSound_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayDTSound.AnimNotify_PlayDTSound_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
};

