// BlueprintGeneratedClass YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C
// Size: 0x1f8 (Inherited: 0xb0)
struct UYPlayerRenderTargetVfxManagerComponent_BP_C : UYPlayerRenderTargetVfxManagerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct FVector> posArray; // 0xb8(0x10)
	struct TArray<float> sizeArray; // 0xc8(0x10)
	struct TArray<float> opacityArray; // 0xd8(0x10)
	struct FVector currentPlayerPosition; // 0xe8(0x0c)
	struct FVector currentRenderCenterPosition; // 0xf4(0x0c)
	int32_t currentRenderTarget; // 0x100(0x04)
	struct FVector prevRenderCenterPosition; // 0x104(0x0c)
	struct UMaterialInstanceDynamic* MaterialBatched_MID; // 0x110(0x08)
	struct TArray<float> sizeArray_temp; // 0x118(0x10)
	struct TArray<struct FVector> posArray_temp; // 0x128(0x10)
	struct TArray<float> opacityArray_temp; // 0x138(0x10)
	int32_t batchSize; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FString> drawPosition_ParamNameArray; // 0x150(0x10)
	struct TArray<struct FString> drawSize_ParamNameArray; // 0x160(0x10)
	struct TArray<struct FString> drawOpacity_ParamNameArray; // 0x170(0x10)
	struct UMaterialInterface* MaterialBatched; // 0x180(0x08)
	struct FVector currentPos; // 0x188(0x0c)
	float currentSize; // 0x194(0x04)
	float currentOpacity; // 0x198(0x04)
	bool resetCurrentParameter; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32_t CurrentIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct UYUserSettings* userSettings; // 0x1a8(0x08)
	bool isGrassEnabled; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct TArray<struct UYPlayerRenderTargetVfxMovementComponent_BP_C*> requestUpdate; // 0x1b8(0x10)
	struct TArray<struct FEntityDistanceAndMovementComponent> EntityDistanceAndMovementComponent; // 0x1c8(0x10)
	int32_t DebugCounter; // 0x1d8(0x04)
	float 123; // 0x1dc(0x04)
	float 234dist; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct ACharacter* playerCharacter; // 0x1e8(0x08)
	int32_t PosArrayLength; // 0x1f0(0x04)
	int32_t RequestUpdateLength; // 0x1f4(0x04)

	void UpdateCurrent(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateCurrent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRelevantEntities(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateRelevantEntities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InsertEntityDistanceAndMovementComponent(float Distance, struct UYPlayerRenderTargetVfxMovementComponent_BP_C* RenderTargetMovementComponent, int32_t MaximumArrayLength); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.InsertEntityDistanceAndMovementComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetVectorParameters(struct FVector Position, float Size, float Opacity, int32_t CurentIndex); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.SetVectorParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DrawToRendertarget(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.DrawToRendertarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_DrawToPlayerRenderTargetVfxManager(struct FVector Position, float Size, float Opacity); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.BP_DrawToPlayerRenderTargetVfxManager // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnSettingsApplied(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.OnSettingsApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void requestRenderTargetUpdate(struct UYPlayerRenderTargetVfxMovementComponent_BP_C* NewParam); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.requestRenderTargetUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RemoveRequest(struct UYPlayerRenderTargetVfxMovementComponent_BP_C* Item); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.RemoveRequest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DebugTest(); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.DebugTest // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerRenderTargetVfxManagerComponent_BP(int32_t EntryPoint); // Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxManagerComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

