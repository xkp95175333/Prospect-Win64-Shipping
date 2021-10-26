// BlueprintGeneratedClass YTutorialComponent_BP.YTutorialComponent_BP_C
// Size: 0x110 (Inherited: 0xb0)
struct UYTutorialComponent_BP_C : UYPlayerTutorialComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UWBP_Tutorial_Menu_C* TutorialMenu; // 0xb8(0x08)
	struct APRO_PlayerController_C* OwningController; // 0xc0(0x08)
	struct UYWidgetProvider_Missions* WidgetProvider_Missions; // 0xc8(0x08)
	int32_t MissionStepID; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FDataTableRowHandle> contracts; // 0xd8(0x10)
	struct FDataTableRowHandle VOTutorial1; // 0xe8(0x10)
	struct FDataTableRowHandle VOTutorial2; // 0xf8(0x10)
	struct UYTutorialStepsPlayerComponent_BP_C* TutorialStepsComponent; // 0x108(0x08)

	void SetupTutorialContracts(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialContracts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowTutorialEvacHint(struct FTransform Transform); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowTutorialEvacHint // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnShowEndOfMatch(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnShowEndOfMatch // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ShowFTUE_GetIntoShip(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowFTUE_GetIntoShip // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTutorialWidget(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnReadyToStartTutorialIntro_Event_1(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnReadyToStartTutorialIntro_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindToIntroTutorialStart(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.BindToIntroTutorialStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ContinueWithIntro(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.ContinueWithIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTutorialStepComponent(); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialStepComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YTutorialComponent_BP(int32_t EntryPoint); // Function YTutorialComponent_BP.YTutorialComponent_BP_C.ExecuteUbergraph_YTutorialComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

