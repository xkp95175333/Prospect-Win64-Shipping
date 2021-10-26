// BlueprintGeneratedClass BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C
// Size: 0x188 (Inherited: 0xa0)
struct UBTDecorator_SetSenseTuning_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FYAISenseTuningRow SavedSenseTuning; // 0xa8(0xd0)
	struct FDataTableRowHandle SenseTurningRow; // 0x178(0x10)

	bool PerformConditionCheck(struct AActor* ownerActor); // Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionStartAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionFinishAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTDecorator_SetSenseTuning(int32_t EntryPoint); // Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ExecuteUbergraph_BTDecorator_SetSenseTuning // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

