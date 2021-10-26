// BlueprintGeneratedClass NPC_Object_BP.NPC_Object_BP_C
// Size: 0x2a0 (Inherited: 0x290)
struct ANPC_Object_BP_C : AYNPCObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UYObjectInteractionComponent* YObjectInteraction; // 0x298(0x08)

	void SendBIStationInteractionEvent(); // Function NPC_Object_BP.NPC_Object_BP_C.SendBIStationInteractionEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryPlayVoiceOver(); // Function NPC_Object_BP.NPC_Object_BP_C.TryPlayVoiceOver // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer, bool perfectInteraction); // Function NPC_Object_BP.NPC_Object_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnSceneRemoved_Event_1(struct FDataTableRowHandle sceneRowHandle); // Function NPC_Object_BP.NPC_Object_BP_C.OnSceneRemoved_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_NPC_Object_BP(int32_t EntryPoint); // Function NPC_Object_BP.NPC_Object_BP_C.ExecuteUbergraph_NPC_Object_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

