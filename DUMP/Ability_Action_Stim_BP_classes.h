// BlueprintGeneratedClass Ability_Action_Stim_BP.Ability_Action_Stim_BP_C
// Size: 0x1b8 (Inherited: 0x180)
struct UAbility_Action_Stim_BP_C : UYCharacterAbilityComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FDataTableRowHandle StimSpinupLoopAudioRowHandle; // 0x188(0x10)
	struct UAudioComponent* StimLoopingAudioComponent; // 0x198(0x08)
	float FadeOutAudioLoopSound; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FDataTableRowHandle StimFinishAudioRowHandle; // 0x1a8(0x10)

	void StopLoopSfx(); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.StopLoopSfx // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayLoopSfx(); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayLoopSfx // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAbilityStateChanged_Event_1(enum class EYAbilityState State, enum class EYAbilityState oldState); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.OnAbilityStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PlayFinishedSfx(); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayFinishedSfx // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Ability_Action_Stim_BP(int32_t EntryPoint); // Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ExecuteUbergraph_Ability_Action_Stim_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

