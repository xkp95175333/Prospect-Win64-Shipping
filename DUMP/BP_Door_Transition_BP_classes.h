// BlueprintGeneratedClass BP_Door_Transition_BP.BP_Door_Transition_BP_C
// Size: 0x308 (Inherited: 0x240)
struct ABP_Door_Transition_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UYObjectInteractionComponent* YObjectInteraction; // 0x258(0x08)
	struct APlayerStart* DestinationPoint; // 0x260(0x08)
	struct FString blueprintName; // 0x268(0x10)
	struct FYWidgetActorPlateInitializationData PlateData; // 0x278(0x88)
	bool AssignShardRelevanSelfData; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float DelayUntilLocationTransfer; // 0x304(0x04)

	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer, bool perfectInteraction); // Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BP_Door_Transition_BP(int32_t EntryPoint); // Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ExecuteUbergraph_BP_Door_Transition_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

