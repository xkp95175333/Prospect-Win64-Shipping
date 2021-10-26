// BlueprintGeneratedClass PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C
// Size: 0x394 (Inherited: 0x200)
struct UPlayerCarryingComponent_BP_C : UYPlayerCarryingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	float TimestampStartedCarrying; // 0x208(0x04)
	float CurrentDistanceToOptimalLocation; // 0x20c(0x04)
	float DesiredDistance; // 0x210(0x04)
	float TraceRadius; // 0x214(0x04)
	struct FHitResult LastHitResult; // 0x218(0x8c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UCarryableComponent_BP_C* CarryableComponent; // 0x2a8(0x08)
	float MaxAllowedDistanceToOptimalLocation; // 0x2b0(0x04)
	struct FVector CurrentCarryActorLocation; // 0x2b4(0x0c)
	struct FVector DesriedLocation; // 0x2c0(0x0c)
	struct FVector OptimalCarryActorLocation; // 0x2cc(0x0c)
	float GracePeriodPreventDrop; // 0x2d8(0x04)
	struct FVector OffsetDragVector; // 0x2dc(0x0c)
	struct FYGameplayAttributeModifier CarryGPAModifier; // 0x2e8(0x70)
	struct FGuid GuidAppliedGPAModifier; // 0x358(0x10)
	float MaxDragVectorLength; // 0x368(0x04)
	struct FVector DesriedLocation_LastFrame; // 0x36c(0x0c)
	struct FVector DragVelocity; // 0x378(0x0c)
	char pad_384[0x4]; // 0x384(0x04)
	struct UCurveFloat* VelocityDistranceCurve; // 0x388(0x08)
	float DragVelocityBase; // 0x390(0x04)

	void UpdateDrag(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.UpdateDrag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct TArray<struct FYGenericDebuggerShapeEntry> BP_GetCarryingDebugData(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryingDebugData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetDebugInfoFromHitResult(struct FHitResult Hit, struct FString Result); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.GetDebugInfoFromHitResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FString BP_GetDebugDescription(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetDebugDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DetermineLookAtRotation(struct FRotator NewParam); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DetermineLookAtRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYCarryableComponent* BP_GetCarryableComponent(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryableComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryStartCarrying(struct UCarryableComponent_BP_C* InCarryableComponent, bool Result); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryStartCarrying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_CarryableComponent(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnRep_CarryableComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TraceForCarryLocation(struct FVector ResultTraceEnd, struct FVector ResultLocation); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TraceForCarryLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnHealthEmpty(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnHealthEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCarryStateDeactivated(bool interupted); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnCarryStateDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryRequestStopCarry(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryRequestStopCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetFirstPersonMeshVisibility(bool bNewVisibility); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TrySetFirstPersonMeshVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DoDropCheck(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DoDropCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NotifyStoppedCarrying(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStoppedCarrying // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NotifyStartedCarrying(); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStartedCarrying // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerCarryingComponent_BP(int32_t EntryPoint); // Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ExecuteUbergraph_PlayerCarryingComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

