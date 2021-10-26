// BlueprintGeneratedClass AL_Location_Escape_BP.AL_Location_Escape_BP_C
// Size: 0x578 (Inherited: 0x4a8)
struct AAL_Location_Escape_BP_C : AAL_Generic_BP_C {
	struct UCameraComponent* PreviewCamera; // 0x4a8(0x08)
	struct USceneComponent* CamScene; // 0x4b0(0x08)
	struct UArrowComponent* Arrow1; // 0x4b8(0x08)
	struct UStaticMeshComponent* PreviewMesh; // 0x4c0(0x08)
	struct UStaticMeshComponent* CallRangeVisualizer_Sphere; // 0x4c8(0x08)
	struct UStaticMeshComponent* CallRangeVisualizer_Cylinder; // 0x4d0(0x08)
	struct UStaticMeshComponent* large_antenna; // 0x4d8(0x08)
	struct ALevelSequenceActor* ArrivalSequenceActor; // 0x4e0(0x08)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FTransform ShipLandingLocation; // 0x4f0(0x30)
	bool showRangePreview; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TArray<struct TSoftObjectPtr<struct AEscape_Beacon_BP_C>> BeaconActors; // 0x528(0x10)
	bool showFlightPathPreview; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FTransform EvacCamTransform; // 0x540(0x30)
	bool isTutorialEvac; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float MaxBeaconDistanceRadius; // 0x574(0x04)

	void DebugShowBeaconsConnected(); // Function AL_Location_Escape_BP.AL_Location_Escape_BP_C.DebugShowBeaconsConnected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindBeaconActors(); // Function AL_Location_Escape_BP.AL_Location_Escape_BP_C.FindBeaconActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UserConstructionScript(); // Function AL_Location_Escape_BP.AL_Location_Escape_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

