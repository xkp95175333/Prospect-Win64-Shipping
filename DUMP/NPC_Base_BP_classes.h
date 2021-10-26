// BlueprintGeneratedClass NPC_Base_BP.NPC_Base_BP_C
// Size: 0x792 (Inherited: 0x740)
struct ANPC_Base_BP_C : AYNPCCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x08)
	struct UYMapMarkerComponent* YMapMarker; // 0x748(0x08)
	struct UYObjectInteractionComponent* YObjectInteraction; // 0x750(0x08)
	struct UAudioComponent* Emote_Lobby_HollogramSpawn; // 0x758(0x08)
	struct FName CurrentArchetype; // 0x760(0x08)
	enum class EYCustomizationBodyType bodyType; // 0x768(0x01)
	char pad_769[0x3]; // 0x769(0x03)
	float interactionPointerRotation; // 0x76c(0x04)
	float DisableAnimUpdateDistance; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
	struct APawn* localPlayerChar; // 0x778(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshComponents; // 0x780(0x10)
	bool IsOptimizationEnabled; // 0x790(0x01)
	bool QuestCompleted; // 0x791(0x01)

	void SendBIStationInteractionEvent(); // Function NPC_Base_BP.NPC_Base_BP_C.SendBIStationInteractionEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateAnimDistanceTicking(); // Function NPC_Base_BP.NPC_Base_BP_C.UpdateAnimDistanceTicking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_ShowcaseData(); // Function NPC_Base_BP.NPC_Base_BP_C.OnRep_ShowcaseData // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void onArchetypeChanged(struct FName archetypeId); // Function NPC_Base_BP.NPC_Base_BP_C.onArchetypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnActiveCustomizationDataChanged(struct FYActiveCustomizationData newCustomizationData); // Function NPC_Base_BP.NPC_Base_BP_C.BP_OnActiveCustomizationDataChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer); // Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer, bool perfectInteraction); // Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function NPC_Base_BP.NPC_Base_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function NPC_Base_BP.NPC_Base_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRemoved_Event_1(struct FDataTableRowHandle sceneRowHandle); // Function NPC_Base_BP.NPC_Base_BP_C.OnSceneRemoved_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_NPC_Base_BP(int32_t EntryPoint); // Function NPC_Base_BP.NPC_Base_BP_C.ExecuteUbergraph_NPC_Base_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

