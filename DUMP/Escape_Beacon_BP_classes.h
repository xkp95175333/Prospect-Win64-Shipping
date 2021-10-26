// BlueprintGeneratedClass Escape_Beacon_BP.Escape_Beacon_BP_C
// Size: 0x294 (Inherited: 0x240)
struct AEscape_Beacon_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UParticleSystemComponent* BloomParticle; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct UStaticMeshComponent* BeaconMesh; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float BeaconFlash_TL_EmissiveLerp_F4825EA24AE53EDB88DAFFB041D78275; // 0x268(0x04)
	enum class ETimelineDirection BeaconFlash_TL__Direction_F4825EA24AE53EDB88DAFFB041D78275; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* BeaconFlash-TL; // 0x270(0x08)
	int32_t MeshVariation; // 0x278(0x04)
	struct FLinearColor NewColour; // 0x27c(0x10)
	bool IsFlashing; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	float FlashPlayrate; // 0x290(0x04)

	void UserConstructionScript(); // Function Escape_Beacon_BP.Escape_Beacon_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BeaconFlash-TL__FinishedFunc(); // Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void BeaconFlash-TL__UpdateFunc(); // Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void OnBeaconUpdate(struct FLinearColor LightColour, bool IsFlashing, float FlashPlayrate); // Function Escape_Beacon_BP.Escape_Beacon_BP_C.OnBeaconUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Escape_Beacon_BP(int32_t EntryPoint); // Function Escape_Beacon_BP.Escape_Beacon_BP_C.ExecuteUbergraph_Escape_Beacon_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

