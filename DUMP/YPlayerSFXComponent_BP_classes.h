// BlueprintGeneratedClass YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C
// Size: 0x118 (Inherited: 0xb0)
struct UYPlayerSFXComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UParticleSystemComponent* interaction01_PS; // 0xb8(0x08)
	struct UYPlayerCharacterStateComponent* playerCharacter_StateComp; // 0xc0(0x08)
	struct APRO_PlayerCharacter_C* playerCharacter; // 0xc8(0x08)
	struct UParticleSystemComponent* gearStore01_PS; // 0xd0(0x08)
	struct UParticleSystemComponent* kitHeavy_charge01_PS; // 0xd8(0x08)
	struct UParticleSystemComponent* KitNinja_Dodge_PS; // 0xe0(0x08)
	struct UParticleSystemComponent* KitNinja_Jump_PS; // 0xe8(0x08)
	int32_t ForwardDash_jumpCounter; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FDataTableRowHandle SFX_ChargingAttack; // 0xf8(0x10)
	struct UAudioComponent* ChargingAttackAudioComponent; // 0x108(0x08)
	struct FTimerHandle TimerHandle_StartChargingMeleeAttackSound; // 0x110(0x08)

	void SpawnOrUpdateParticle(bool IsFirstPerson, struct UParticleSystem* TP_Particle, struct UParticleSystem* FP_Particle); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.SpawnOrUpdateParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnEnterSlideState(); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnEnterSlideState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnJumped_Event(int32_t jumpCount); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.BP_OnJumped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnChargingAttack(); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnChargingAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStopChargingAttack(bool interupted); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnStopChargingAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryStartChargingAttackSound(); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.TryStartChargingAttackSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerSFXComponent_BP(int32_t EntryPoint); // Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ExecuteUbergraph_YPlayerSFXComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

