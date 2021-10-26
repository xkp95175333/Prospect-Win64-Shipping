// BlueprintGeneratedClass Onboarding_02_Stash.Onboarding_02_Stash_C
// Size: 0x1f9 (Inherited: 0x1b0)
struct UOnboarding_02_Stash_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct TArray<enum class EYPlayerSetType> SlotsToCheck; // 0x1b8(0x10)
	enum class EYItemType itemTypeToCheck; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	struct FName SceneToInteract; // 0x1cc(0x08)
	bool stepActive; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	struct FDataTableRowHandle loadSceneRowHandle; // 0x1d8(0x10)
	struct FDataTableRowHandle quickMenuRowHandle; // 0x1e8(0x10)
	bool checkForTools; // 0x1f8(0x01)

	void BindOnStashOpened(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.BindOnStashOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CompleteStep(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.CompleteStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step3Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step3Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSetChanged(struct UYStateInventoryComponent* stateInventoryComponent); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step5Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step5Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step2Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step2Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindOnSetChanged(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindOnSetChanged // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindSceneAdded // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step1Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step1Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStashOpened(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStashOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnStepBind(struct FYRuntimeInitializationContext Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStepBind // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step4Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step4Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step6Completed(enum class EYMissionResultType Result); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step6Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_02_Stash(int32_t EntryPoint); // Function Onboarding_02_Stash.Onboarding_02_Stash_C.ExecuteUbergraph_Onboarding_02_Stash // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

