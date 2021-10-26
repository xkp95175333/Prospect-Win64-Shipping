// BlueprintGeneratedClass PlayerStationComponent_BP.PlayerStationComponent_BP_C
// Size: 0x189 (Inherited: 0xb0)
struct UPlayerStationComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<float> Angles; // 0xb8(0x10)
	struct FDataTableRowHandle Scene_Appearance; // 0xc8(0x10)
	struct FDataTableRowHandle Scene_Loadout; // 0xd8(0x10)
	struct FTimerHandle TimerHandleHidePlayers; // 0xe8(0x08)
	struct TArray<struct AYPlayerCharacter*> Players; // 0xf0(0x10)
	float HideOtherPlayersDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct AActor*> NPCs; // 0x108(0x10)
	struct FDataTableRowHandle Scene_QuickMenu; // 0x118(0x10)
	struct TArray<struct FDataTableRowHandle> StacksToIgnoreHiding; // 0x128(0x10)
	bool ShouldGameplayBeHidden; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UUI_MasterBackButton_WBP_C* MasterBackButton; // 0x140(0x08)
	struct FDataTableRowHandle Scene_Play; // 0x148(0x10)
	struct FDataTableRowHandle Scene_WeaponPurchasing; // 0x158(0x10)
	struct FDataTableRowHandle Scene_WeaponCrafting; // 0x168(0x10)
	struct TArray<struct AOnboardingHintIndicator_C*> FtueHintIndicators; // 0x178(0x10)
	bool ShouldHideFtueMarker; // 0x188(0x01)

	void IsQuickMenuActive(bool IsActive); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.IsQuickMenuActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void RemovePlaySceneFromMenu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RemovePlaySceneFromMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Request Faction Shop Scene(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Faction Shop Scene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Request Crafting Station Scene from Menu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Crafting Station Scene from Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RequestPlaySceneFromMenu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestPlaySceneFromMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool Should Hide Gameplay(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Should Hide Gameplay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void RequestScene(struct FDataTableRowHandle Row Handle, struct FYSceneSetupData Setup Data); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestScene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RequestAppearanceSceneFromMenu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestAppearanceSceneFromMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Request Loadout Scene from Menu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Loadout Scene from Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TestAngle(struct AYPlayerCharacter* PlayerChar, float Angle, struct FVector CameraRelativeLocation, float DistanceReturn, struct FVector EndLocation1); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.TestAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DetermineBestCameraAngle(struct FVector CameraRelativeLocation, float Angle, struct FVector BestEndLocation1); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.DetermineBestCameraAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CloseQuickMenu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.CloseQuickMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct AYPlayerCharacter* GetPlayerCharacter(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetPlayerController(struct AYPlayerController* AsYPlayer Controller); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void EnterQuickMenu(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.EnterQuickMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void HideCharacters(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideCharacters // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void UpdateBannerVisibility(bool bNewHidden); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.UpdateBannerVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnUpdateShouldShowGameplay(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnUpdateShouldShowGameplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStackDataChanged_Event_1(enum class EYInputUIStackType Type); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackDataChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowGameplay(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowGameplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideGameplay(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideGameplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStackTypeChanged(enum class EYInputUIStackType stackType, bool Visible); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideFtueMarker(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideFtueMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowFtueMarker(); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowFtueMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerStationComponent_BP(int32_t EntryPoint); // Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ExecuteUbergraph_PlayerStationComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

