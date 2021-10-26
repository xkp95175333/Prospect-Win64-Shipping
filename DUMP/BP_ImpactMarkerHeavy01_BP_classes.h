// BlueprintGeneratedClass BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C
// Size: 0x280 (Inherited: 0x240)
struct ABP_ImpactMarkerHeavy01_BP_C : AYPlacementActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float decalAnim_anim_opacity_E9D529874D32FD51EFB5B497FD1FC1D0; // 0x250(0x04)
	enum class ETimelineDirection decalAnim__Direction_E9D529874D32FD51EFB5B497FD1FC1D0; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* decalAnim; // 0x258(0x08)
	struct UMaterialInstanceDynamic* decalMID; // 0x260(0x08)
	float markerSize; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UParticleSystemComponent* particle; // 0x270(0x08)
	struct UDecalComponent* Decal; // 0x278(0x08)

	void decalAnim__FinishedFunc(); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void decalAnim__UpdateFunc(); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void BP_PlacementSize(float Radius); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_PlacementSize // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnComponentDeactivated_Event_1(struct UActorComponent* Component); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.OnComponentDeactivated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_IsAvailable(bool isAvailable); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_IsAvailable // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP(int32_t EntryPoint); // Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

