// BlueprintGeneratedClass YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C
// Size: 0xdc (Inherited: 0xb0)
struct UYPlayerVFXComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UParticleSystemComponent* interaction01_PS; // 0xb8(0x08)
	struct UYPlayerCharacterStateComponent* playerCharacter_StateComp; // 0xc0(0x08)
	struct APRO_PlayerCharacter_C* playerCharacter; // 0xc8(0x08)
	struct UParticleSystemComponent* gearStore01_PS; // 0xd0(0x08)
	int32_t ForwardDash_jumpCounter; // 0xd8(0x04)

	void SpawnOrUpdateParticle(bool IsFirstPerson, struct UParticleSystem* TP_Particle, struct UParticleSystem* FP_Particle); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.SpawnOrUpdateParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void interaction_activateVFX(); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_activateVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void interaction_deactivateVFX(bool interupted); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_deactivateVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void gearStore_activateVFX(); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_activateVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void gearStore_deactivateVFX(bool interupted); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_deactivateVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPlayerVFXComponent_BP(int32_t EntryPoint); // Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ExecuteUbergraph_YPlayerVFXComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

