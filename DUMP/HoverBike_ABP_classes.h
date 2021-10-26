// AnimBlueprintGeneratedClass HoverBike_ABP.HoverBike_ABP_C
// Size: 0x11a8 (Inherited: 0x2c0)
struct UHoverBike_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2c8(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x310(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x338(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x450(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x470(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x490(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x598(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x618(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x648(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x668(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x688(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x790(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x810(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x840(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8c0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x8f0(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x9d8(0x30)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xa08(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xad0(0x80)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0xb50(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc38(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xc68(0xe8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xd50(0xa0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xdf0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xeb8(0x80)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xf38(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1020(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1050(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1100(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1148(0x30)
	float Direction; // 0x1178(0x04)
	float Speed; // 0x117c(0x04)
	struct FRotator DeltaWorldRotation; // 0x1180(0x0c)
	float TurnSpeedYaw; // 0x118c(0x04)
	float MoveForwardInputFloat; // 0x1190(0x04)
	bool TRUE; // 0x1194(0x01)
	bool doBoost; // 0x1195(0x01)
	char pad_1196[0x2]; // 0x1196(0x02)
	struct AYVehicle* owningVehicle; // 0x1198(0x08)
	struct UYCharacterVehicleComponent* OwningCharVehicleComp; // 0x11a0(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function HoverBike_ABP.HoverBike_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_0AFFBC4347A686C0209186B75FE59398(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_0AFFBC4347A686C0209186B75FE59398 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_10E2DDEE43AA364060C32D9405C62142(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_10E2DDEE43AA364060C32D9405C62142 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendListByBool_273C94A1490A59A102300483E40ADCC2(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendListByBool_273C94A1490A59A102300483E40ADCC2 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_E52D468248094ABEBE04F8B749E47A58(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_E52D468248094ABEBE04F8B749E47A58 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_3A1BF109423CAA642A8EACB158970822(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_3A1BF109423CAA642A8EACB158970822 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_13FE99164D33F5BF1BE42B9E50BA1101(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_13FE99164D33F5BF1BE42B9E50BA1101 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_158B5EAB48145D19E78EDD9A7587E89E(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_158B5EAB48145D19E78EDD9A7587E89E // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_AED9A0544DB6797D402586B05E12CFB3(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_AED9A0544DB6797D402586B05E12CFB3 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_2134384E4132611EB0C6BD80CE24F394(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_2134384E4132611EB0C6BD80CE24F394 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_82ABB3CD400CE45BB7018AA8BC7564A1(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_82ABB3CD400CE45BB7018AA8BC7564A1 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_299CC9B74D69C1A6961BC0AB6532C2DB(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_299CC9B74D69C1A6961BC0AB6532C2DB // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC191BA84B4AAA6E78DE7A9D2CAC00FE(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC191BA84B4AAA6E78DE7A9D2CAC00FE // (BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function HoverBike_ABP.HoverBike_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC933C954D6F5C715BB164B01ED94C0E(); // Function HoverBike_ABP.HoverBike_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC933C954D6F5C715BB164B01ED94C0E // (BlueprintEvent) // @ game+0x1e02480
	void onVehicleSpawn(); // Function HoverBike_ABP.HoverBike_ABP_C.onVehicleSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnVehicleDespawn(bool interupted); // Function HoverBike_ABP.HoverBike_ABP_C.OnVehicleDespawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void dohardLanding(); // Function HoverBike_ABP.HoverBike_ABP_C.dohardLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnVehicleStateChanged_Event(enum class EYVehicleStateType newVehicleState); // Function HoverBike_ABP.HoverBike_ABP_C.OnVehicleStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBoostStateChanged_Event(bool newState); // Function HoverBike_ABP.HoverBike_ABP_C.OnBoostStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_HoverBike_ABP(int32_t EntryPoint); // Function HoverBike_ABP.HoverBike_ABP_C.ExecuteUbergraph_HoverBike_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

