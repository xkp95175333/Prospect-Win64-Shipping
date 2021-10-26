// Class ConstructionSystemRuntime.ConstructionSystemTool
// Size: 0x30 (Inherited: 0x28)
struct UConstructionSystemTool : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
// Size: 0x168 (Inherited: 0x30)
struct UConstructionSystemBuildTool : UConstructionSystemTool {
	float TraceDistance; // 0x30(0x04)
	float CursorRotationStepAngle; // 0x34(0x04)
	struct UConstructionSystemCursor* Cursor; // 0x38(0x08)
	struct UPrefabricatorAssetInterface* ActivePrefabAsset; // 0x40(0x08)
	char pad_48[0x120]; // 0x48(0x120)

	void SetActivePrefab(struct UPrefabricatorAssetInterface* InActivePrefabAsset); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x1421a50
	void HandleInput_RotateCursorStep(float NumSteps); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep // (Final|Native|Private) // @ game+0x14219d0
	void HandleInput_CursorMovePrev(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev // (Final|Native|Private) // @ game+0x14219b0
	void HandleInput_CursorMoveNext(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext // (Final|Native|Private) // @ game+0x1421990
	void HandleInput_ConstructAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor // (Final|Native|Private) // @ game+0x1421970
};

// Class ConstructionSystemRuntime.ConstructionSystemComponent
// Size: 0x150 (Inherited: 0xb0)
struct UConstructionSystemComponent : UActorComponent {
	struct UMaterialInterface* CursorMaterial; // 0xb0(0x08)
	struct UMaterialInterface* CursorInvalidMaterial; // 0xb8(0x08)
	float TraceStartDistance; // 0xc0(0x04)
	float TraceSweepRadius; // 0xc4(0x04)
	struct AActor* ConstructionCameraActor; // 0xc8(0x08)
	float ConstructionCameraTransitionTime; // 0xd0(0x04)
	float ConstructionCameraTransitionExp; // 0xd4(0x04)
	struct UUserWidget* BuildMenuUI; // 0xd8(0x08)
	struct UConstructionSystemUIAsset* BuildMenuData; // 0xe0(0x08)
	struct UUserWidget* BuildMenuUIInstance; // 0xe8(0x08)
	enum class EConstructionSystemToolType ActiveToolType; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TMap<enum class EConstructionSystemToolType, struct UConstructionSystemTool*> Tools; // 0xf8(0x50)
	char pad_148[0x8]; // 0x148(0x08)

	void ToggleConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x14221b0
	void ShowBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1422190
	void SetActiveTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool // (Final|Native|Public|BlueprintCallable) // @ game+0x1422110
	void HideBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x14220f0
	struct UConstructionSystemTool* GetTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1422060
	enum class EConstructionSystemToolType GetActiveToolType(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1422040
	struct UConstructionSystemTool* GetActiveTool(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1422010
	void EnableConstructionSystem(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1421f90
	void DisableConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1421f70
};

// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
// Size: 0x30 (Inherited: 0x28)
struct UConstructionSystemItemUserData : UAssetUserData {
	int32_t Seed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ConstructionSystemRuntime.ConstructionSystemCursor
// Size: 0x60 (Inherited: 0x28)
struct UConstructionSystemCursor : UObject {
	struct APrefabActor* CursorGhostActor; // 0x28(0x08)
	int32_t CursorSeed; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UMaterialInterface* CursorMaterial; // 0x38(0x08)
	struct UMaterialInterface* CursorInvalidMaterial; // 0x40(0x08)
	struct TArray<struct UPrefabricatorConstructionSnapComponent*> SnapComponents; // 0x48(0x10)
	int32_t ActiveSnapComponentIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
// Size: 0x90 (Inherited: 0x30)
struct UConstructionSystemRemoveTool : UConstructionSystemTool {
	float TraceDistance; // 0x30(0x04)
	struct TWeakObjectPtr<struct APrefabActor> FocusedActor; // 0x34(0x08)
	char pad_3C[0x54]; // 0x3c(0x54)

	void HandleInput_RemoveAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor // (Final|Native|Protected) // @ game+0x14225f0
};

// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UConstructionSystemSaveGame : USaveGame {
	struct FString SaveSlotName; // 0x28(0x10)
	uint32_t UserIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FConstructionSystemSavePlayerInfo PlayerInfo; // 0x40(0x50)
	struct TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems; // 0x90(0x10)
};

// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
// Size: 0x28 (Inherited: 0x28)
struct UConstructionSystemSaveSystem : UBlueprintFunctionLibrary {

	void SaveConstructionSystemLevel(struct UObject* WorldContextObject, struct FString SaveSlotName, int32_t UserIndex, bool bSavePlayerState); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1422f30
	void LoadConstructionSystemLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString SaveSlotName, int32_t UserIndex); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1422d80
	void HandleConstructionSystemLevelLoad(struct UObject* WorldContextObject); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1422d00
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
// Size: 0x480 (Inherited: 0x470)
struct UPrefabricatorConstructionSnapComponent : UBoxComponent {
	enum class EPrefabricatorConstructionSnapType SnapType; // 0x468(0x01)
	struct FPCSnapConstraintFloor FloorConstraint; // 0x469(0x06)
	struct FPCSnapConstraintWall WallConstraint; // 0x46f(0x04)
	bool bAlignToGroundSlope; // 0x473(0x01)
	bool bUseMaxGroundSlopeConstraint; // 0x474(0x01)
	float MaxGroundPlacementSlope; // 0x478(0x04)
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
// Size: 0x248 (Inherited: 0x240)
struct APrefabricatorConstructionSnap : AActor {
	struct UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent; // 0x240(0x08)
};

// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
// Size: 0x28 (Inherited: 0x28)
struct UConstructionSystemBuildUI : UInterface {

	void SetUIAsset(struct UConstructionSystemUIAsset* UIAsset); // Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetConstructionSystem(struct UConstructionSystemComponent* ConstructionSystem); // Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
// Size: 0x58 (Inherited: 0x30)
struct UConstructionSystemUIAsset : UDataAsset {
	struct FText MenuTitle; // 0x30(0x18)
	struct TArray<struct FConstructionSystemUICategory> Categories; // 0x48(0x10)
};

