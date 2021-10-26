// BlueprintGeneratedClass Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C
// Size: 0x200 (Inherited: 0x1b0)
struct UOnboarding_06_TalkToBadumCraftingStation_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct FDataTableRowHandle badumSceneRowHandle; // 0x1b8(0x10)
	struct FName badumId; // 0x1c8(0x08)
	struct FName SceneToInteract; // 0x1d0(0x08)
	struct FDataTableRowHandle craftingStationSceneRowHandle; // 0x1d8(0x10)
	struct FDataTableRowHandle craftingStationNpcRowHandle; // 0x1e8(0x10)
	struct FName craftingStationId; // 0x1f8(0x08)

	void GetNPCObjectTransformByRowHandle(struct FName NpcRowName, struct FTransform ActorTransform, bool foundActor); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCObjectTransformByRowHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetNPCTransform(struct FName NpcRowName, bool foundActor, struct FTransform ActorTransform); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool CreateHintMarkersWithNPCNames(struct TArray<struct FName> Array, struct FName ActiveMarkerId); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CreateHintMarkersWithNPCNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CompleteStep(); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CompleteStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ClientBindSceneAdded // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step1Completed(enum class EYMissionResultType Result); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.Step1Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation(int32_t EntryPoint); // Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

