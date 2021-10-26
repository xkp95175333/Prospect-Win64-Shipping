// BlueprintGeneratedClass Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C
// Size: 0x210 (Inherited: 0x1b0)
struct UOnboarding_01_TalkToBadum_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct FName SceneToInteract; // 0x1b8(0x08)
	struct TArray<struct FName> ContractNPCS; // 0x1c0(0x10)
	struct TArray<enum class EYContractStatus> ContractStatusToCheck; // 0x1d0(0x10)
	struct FDataTableRowHandle missionSceneRowHandle; // 0x1e0(0x10)
	struct FDataTableRowHandle contractSceneRowHandle; // 0x1f0(0x10)
	struct FName badumId; // 0x200(0x08)
	struct FName contractsId; // 0x208(0x08)

	bool CreateHintMarkersWithNPCNames(struct TArray<struct FName> Names, struct FName ID); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.CreateHintMarkersWithNPCNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Backend Response To A Request To Change A Contract Status(bool isFail, bool anActiveContractHasBeenCancelled); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Backend Response To A Request To Change A Contract Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Successfull Contract Status Change(struct FYActiveContractUIData activeContractUIData); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Successfull Contract Status Change // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Bind on Contract Backend Responses(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Bind on Contract Backend Responses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Complete Step(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Complete Step // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Get NPCTransform(struct FName NpcRowName, struct FTransform ActorTransform, bool foundActor); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Get NPCTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnStep2Completed(enum class EYMissionResultType Result); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep2Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerStepCompleted(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerStepCompleted // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneAdded // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStep1Completed(enum class EYMissionResultType Result); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep1Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindOnContactStatusChanged(); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindOnContactStatusChanged // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_01_TalkToBadum(int32_t EntryPoint); // Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ExecuteUbergraph_Onboarding_01_TalkToBadum // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

