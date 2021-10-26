// BlueprintGeneratedClass YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C
// Size: 0x194 (Inherited: 0xb0)
struct UYPlayerRenderTargetVfxMovementComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FVector lastTrailPos; // 0xb8(0x0c)
	struct FVector ParentPosition; // 0xc4(0x0c)
	float DeltaTime; // 0xd0(0x04)
	float Size; // 0xd4(0x04)
	bool isLocalPlayerPawn; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float OpacityPerStepSize; // 0xdc(0x04)
	float OpacityPerSecondWhenStanding; // 0xe0(0x04)
	float frequencyScaling; // 0xe4(0x04)
	bool isPlayerPawn; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UYHealthComponent* healthComponent; // 0xf0(0x08)
	struct UYUserSettings* userSettings; // 0xf8(0x08)
	bool isGrassEnabled; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector ParentPositionLastTick; // 0x104(0x0c)
	struct FVector ParentPositionLast2Ticks; // 0x110(0x0c)
	enum class EMovementMode lastMovementState; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct AYPlayerCharacter* Player; // 0x120(0x08)
	struct TArray<struct FVector> parentPositions; // 0x128(0x10)
	int32_t currentParentPositionIndex; // 0x138(0x04)
	int32_t rememberParentPositions; // 0x13c(0x04)
	struct TArray<struct FVector> trailPositions; // 0x140(0x10)
	int32_t currentTrailPositionIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<bool> Landing; // 0x158(0x10)
	struct TArray<float> movementDelta; // 0x168(0x10)
	struct FVector LastLandingPosition; // 0x178(0x0c)
	float LastUpdate; // 0x184(0x04)
	struct FVector CurrentParentPosition; // 0x188(0x0c)

	void getAllTrailPositionsWithinRange(float Range, struct TArray<int32_t> Indices, struct TArray<float> Distances); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getAllTrailPositionsWithinRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void getFallingPercentageOverLastFrames(float FallingPercentage); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getFallingPercentageOverLastFrames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void closestTrailPosition(struct FVector ClosestPoint, float Distance, int32_t Index); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.closestTrailPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTrailPositions(bool Landing); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateTrailPositions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetLastFramePosition(struct FVector LastFramePosition); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetLastFramePosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetFarthestParentMovement(float Distance, struct FVector FarthestPosition, float FrameTime); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetFarthestParentMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateParentPositions(); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateParentPositions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IsDead(bool IsDead); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.IsDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnSettingsApplied(); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.OnSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Update(float DeltaTime); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerRenderTargetVfxMovementComponent_BP(int32_t EntryPoint); // Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxMovementComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

