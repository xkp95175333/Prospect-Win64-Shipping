// BlueprintGeneratedClass AICharExplosionComponent_BP.AICharExplosionComponent_BP_C
// Size: 0x118 (Inherited: 0xb0)
struct UAICharExplosionComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FDataTableRowHandle ExplosionImpactHandle; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnAboutToExplode; // 0xc8(0x10)
	struct UMaterialInterface* DecalMaterialBase; // 0xd8(0x08)
	struct UMaterialInstanceDynamic* decalMID; // 0xe0(0x08)
	struct FDataTableRowHandle PreExplodeAudio; // 0xe8(0x10)
	struct AActor* ExplosionCauser; // 0xf8(0x08)
	bool spawnDecal; // 0x100(0x01)
	bool spawnAIonDeath; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FDataTableRowHandle Damage Info Apply Row Handle; // 0x108(0x10)

	void Trigger Explosion Impact(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.Trigger Explosion Impact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDeath_Event_1(struct UYCharacterDeathComponent* deathComponent); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.BP_OnDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySpawnDecal(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.TrySpawnDecal // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FromAnimNotifier_OnPreExplode(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_OnPreExplode // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void AssignToTakeDamageEvent(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToTakeDamageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPreTakeDamage(struct FYDealtDamageData Data); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnPreTakeDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AssignToOnDeathEvent(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToOnDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FromAnimNotifier_TriggerExplosion(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_TriggerExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AICharExplosionComponent_BP(int32_t EntryPoint); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ExecuteUbergraph_AICharExplosionComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnAboutToExplode__DelegateSignature(); // Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnAboutToExplode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

