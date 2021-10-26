// BlueprintGeneratedClass Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C
// Size: 0x200 (Inherited: 0x1b0)
struct UOnboarding_05_CraftingStation_C : UMS_Line_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b0(0x08)
	struct FDataTableRowHandle badumSceneRowHandle; // 0x1b8(0x10)
	struct FName badumId; // 0x1c8(0x08)
	struct FName SceneToInteract; // 0x1d0(0x08)
	struct FDataTableRowHandle craftingStationSceneRowHandle; // 0x1d8(0x10)
	struct FDataTableRowHandle craftingStationNpcRowHandle; // 0x1e8(0x10)
	struct FName craftingStationId; // 0x1f8(0x08)

	void GetNPCObjectTransformByRowHandle(struct FName NpcRowName, struct FTransform ActorTransform, bool foundActor); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCObjectTransformByRowHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetNPCTransform(struct FName NpcRowName, bool foundActor, struct FTransform ActorTransform); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool CreateHintMarkersWithNPCNames(struct TArray<struct FName> Array, struct FName ActiveMarkerId); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CreateHintMarkersWithNPCNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CompleteStep(); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CompleteStep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_StartMetaQuest(); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.BP_StartMetaQuest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRequested(struct FDataTableRowHandle sceneRowHandle); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerCompleteStep(); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ServerCompleteStep // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClientBindSceneAdded(); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindSceneAdded // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Onboarding_05_CraftingStation(int32_t EntryPoint); // Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ExecuteUbergraph_Onboarding_05_CraftingStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

