// BlueprintGeneratedClass InteractionAnimComponent_BP.InteractionAnimComponent_BP_C
// Size: 0xd0 (Inherited: 0xb0)
struct UInteractionAnimComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USkeletalMeshComponent* FirstPersonSkeletalMeshComponent; // 0xb8(0x08)
	struct AStaticMeshActor* SpawnedPickupMeshVisualActor; // 0xc0(0x08)
	struct UAnimMontage* PickUpAnimationMontage; // 0xc8(0x08)

	void SpawnPickUpMesh(struct UStaticMesh* StaticMesh); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SpawnPickUpMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02(struct FName NotifyName); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02(struct FName NotifyName); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02(struct FName NotifyName); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02(struct FName NotifyName); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02(struct FName NotifyName); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlaySpecialPickupAnimation(struct UStaticMesh* StaticMesh, enum class EYItemRarityType itemRarity); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.PlaySpecialPickupAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void TryDestroyPickUpItem(); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryDestroyPickUpItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_InteractionAnimComponent_BP(int32_t EntryPoint); // Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ExecuteUbergraph_InteractionAnimComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

