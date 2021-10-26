// BlueprintGeneratedClass Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C
// Size: 0x248 (Inherited: 0x1b0)
struct UOnboarding_03_MatchPickUpAndEscape_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct FName SceneToInteract; // 0x1b8(0x08)
	struct TArray<struct FTransform> EscapeTerminalTransforms; // 0x1c0(0x10)
	struct TArray<enum class EYContractStatus> ContractStatusToCheck; // 0x1d0(0x10)
	bool hintIndicatorCreated; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct FYContractRow> Contract Config Data; // 0x1e8(0x10)
	struct TArray<struct FTransform> ContractActorTransforms; // 0x1f8(0x10)
	struct FDataTableRowHandle launchTerminalSceneRowHandle; // 0x208(0x10)
	struct FDataTableRowHandle icaNPCRowName; // 0x218(0x10)
	struct FDataTableRowHandle korolevNPCRowName; // 0x228(0x10)
	struct FDataTableRowHandle osirisNPCRowName; // 0x238(0x10)

	void Is Any Contract Completed(bool contractCompleted); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Is Any Contract Completed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnContractsProgressUpdated(struct FYContractsProgress contractsProgress); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsProgressUpdated // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetHintDataOnAuthorithy(struct FName ActiveMarkerId, struct TArray<struct FTransform> Transforms); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetHintDataOnAuthorithy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetCurrentContractData(struct TArray<struct FYContractRow> CurrentContractData); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetCurrentContractData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IsContractItemInSafePocket(bool Output_Get); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsContractItemInSafePocket // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetNewMission(struct FString missionId, int32_t progress); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetNewMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Get Faction Of Completed Contract(struct TArray<struct FName> ContractFactionName); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction Of Completed Contract // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindOnContractStatusChanged(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BindOnContractStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CompleteStep(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CompleteStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Bind and Check if Contract Is Completed(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Bind and Check if Contract Is Completed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Check if Contract Has Been Completed(struct FString contractId, struct TArray<int32_t> currentProgress, bool isCompleted); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Check if Contract Has Been Completed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Get Faction NPC TransformOfActiveContracts(struct TArray<struct FTransform> ActorTransform, bool foundActor); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction NPC TransformOfActiveContracts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Get Launch Terminal Transform(struct FTransform ActorTransform, bool foundActor); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Launch Terminal Transform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_EscapeTerminalTransforms(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnRep_EscapeTerminalTransforms // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetEscapeTerminalTransforms(struct TArray<struct FTransform> EscapeTerminalTransforms, bool Output_Get); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetEscapeTerminalTransforms // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Step1Completed(enum class EYMissionResultType Result); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step2Completed(enum class EYMissionResultType Result); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchFinished(enum class EYPlayerMatchFinishedResult Result); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnMatchFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step3Completed(enum class EYMissionResultType Result); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step3Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindSceneAdded // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CreateHintFaction(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CreateHintFaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindAndCheckIfContractIsCompleted(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindAndCheckIfContractIsCompleted // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindOnContractStatusChanged(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindOnContractStatusChanged // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnContractStatusChanged(struct FYActiveContractUIData activeContractUIData); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractStatusChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientSetMission(struct FString missionId, int32_t progress); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientSetMission // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientCheckContractStatusToSkipNextStep(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientCheckContractStatusToSkipNextStep // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnContractChangedMoveFtueProgress(struct FYActiveContractUIData activeContractUIData); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractChangedMoveFtueProgress // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerStartStep4(); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep4 // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape(int32_t EntryPoint); // Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

