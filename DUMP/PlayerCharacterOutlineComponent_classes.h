// BlueprintGeneratedClass PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C
// Size: 0xe1 (Inherited: 0xb0)
struct UPlayerCharacterOutlineComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FTimerHandle TimerHandle_ShowLastDamagedPawn; // 0xb8(0x08)
	float TimeWhenLastDamagedLocal; // 0xc0(0x04)
	bool ShowRedOutlineDueDamage; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float DurationShowHostileOutline; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AYPlayerState* YPlayerStateOwner; // 0xd0(0x08)
	struct AYPlayerCharacter* YPlayerCharacterOwner; // 0xd8(0x08)
	bool ShowGoldOutline; // 0xe0(0x01)

	void GetDamageOutlineDuration(float Damage Outline Hostile Players Duration); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.GetDamageOutlineDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void DetermineStencilValueForSquad(int32_t StencilValue); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.DetermineStencilValueForSquad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void YOnPlayerStateSet_Event(struct AYPlayerState* PlayerState); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.YOnPlayerStateSet_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateOutline(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.UpdateOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStencilValueOnAllRelevantMeshes(int32_t StencilValue, bool RenderInStencil); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.SetStencilValueOnAllRelevantMeshes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMeshInitializedDelegate_Event_1(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshInitializedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HealthEmptyDelegate_Event_1(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.HealthEmptyDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindingToPlayerState(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindingToPlayerCharacter(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMeshViewStateChanged_Event_1(enum class EYMeshViewState newViewState); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshViewStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDamageTimerFInished(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnDamageTimerFInished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamage_Event_1(struct FYDealtDamageData Data); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnTakeDamage_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TriggerRedOutline(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.TriggerRedOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSquadInfoUpdated_Event_1(struct TArray<struct FYOutpostFriendInfo> squadMemberInfos); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnSquadInfoUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBagMeshChangedEvent_Event_1(); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnBagMeshChangedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerCharacterOutlineComponent(int32_t EntryPoint); // Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ExecuteUbergraph_PlayerCharacterOutlineComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

