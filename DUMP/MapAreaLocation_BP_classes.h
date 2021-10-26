// BlueprintGeneratedClass MapAreaLocation_BP.MapAreaLocation_BP_C
// Size: 0x295 (Inherited: 0x250)
struct AMapAreaLocation_BP_C : AYConditionLocationActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct ATriggerVolume*> LinkedTriggers; // 0x260(0x10)
	bool ShowMapMarker; // 0x270(0x01)
	bool AnnounceArea; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct FText AreaName; // 0x278(0x18)
	float TimeShowAreaAnnouncementOnHud; // 0x290(0x04)
	bool IsAlreadyAnnounced; // 0x294(0x01)

	void RemoveFromHUD(); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.RemoveFromHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartAnnounceArea(struct AActor* playerActorContext); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.StartAnnounceArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RetrieveLocationTag(struct FName Tag); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.RetrieveLocationTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdateCharacterLocationTag(struct AActor* playerCharacter, bool IsBeginOverlap); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.UpdateCharacterLocationTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnOverlapUpdate(struct AActor* OverlapActor, bool IsBeginOverlap); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupAreaName(); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupAreaName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FYMapErrorInfo BP_CheckForErrors(); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.BP_CheckForErrors // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnOverlapBegin(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnOverlapEnd(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupMapMarker(); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupMapMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapAreaLocation_BP(int32_t EntryPoint); // Function MapAreaLocation_BP.MapAreaLocation_BP_C.ExecuteUbergraph_MapAreaLocation_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

