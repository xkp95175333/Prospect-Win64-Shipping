// BlueprintGeneratedClass Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C
// Size: 0x228 (Inherited: 0x1b0)
struct UOnboarding_04_PlayerQuarter_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct FName SceneToInteract; // 0x1b8(0x08)
	struct FDataTableRowHandle techTreeSceneRowHandle; // 0x1c0(0x10)
	struct FDataTableRowHandle generatorsSceneRowHandle; // 0x1d0(0x10)
	struct FName badumId; // 0x1e0(0x08)
	struct FDataTableRowHandle badumSceneRowHandle; // 0x1e8(0x10)
	struct FDataTableRowHandle techTreeNpcRowHandle; // 0x1f8(0x10)
	struct FDataTableRowHandle generatorsNpcRowHandle; // 0x208(0x10)
	struct FDataTableRowHandle techtreeNodeToUnlock; // 0x218(0x10)

	void GetNPCObjectTransformByRowHandle(struct FName NpcRowName, struct FTransform ActorTransform, bool foundActor); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCObjectTransformByRowHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetPlayerQuarterDoorTransform(struct FTransform ActorTransform, bool foundActor); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetPlayerQuarterDoorTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetNPCTransform(struct FName NpcRowName, struct FTransform ActorTransform, bool foundActor); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool CreateHintMarkersWithNPCNames(struct TArray<struct FName> Array, struct FName ActiveMarkerId); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CreateHintMarkersWithNPCNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CompleteStep(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CompleteStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInteraction(struct FYInteractionUpdateData Data); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInteraction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step1Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step1Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step2Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step2Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step3Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step3Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step4Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step4Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step5Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step5Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step6Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSceneAdded // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step7Completed(enum class EYMissionResultType Result); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step7Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TechTreeNodesUpdated(struct UYControllerPlayerQuarterComponent* playerQuarterComponent); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.TechTreeNodesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ClientBindOnTechtreeNodeUpdates(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindOnTechtreeNodeUpdates // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnGeneratorCollected(struct FString generatorId, struct TArray<struct FYInventoryItem> crateItems); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnGeneratorCollected // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindingOnGeneratorCollected(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindingOnGeneratorCollected // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientOnInteraction(); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientOnInteraction // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_04_PlayerQuarter(int32_t EntryPoint); // Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ExecuteUbergraph_Onboarding_04_PlayerQuarter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

