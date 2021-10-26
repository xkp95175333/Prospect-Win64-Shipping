// Enum Prospect.EYTurretState
enum class EYTurretState : uint8 {
	Deploying,
	Active,
	Destroyed,
	EYTurretState_MAX,
};

// Enum Prospect.EYAbilityState
enum class EYAbilityState : uint8 {
	Invalid,
	Ready,
	SpinningUp,
	Activating,
	Active,
	Finished,
	Cooldown,
	EYAbilityState_MAX,
};

// Enum Prospect.EYItemRarityType
enum class EYItemRarityType : uint8 {
	Invalid,
	Common,
	Uncommon,
	Rare,
	Epic,
	Legendary,
	MAX,
};

// Enum Prospect.EYActivityType
enum class EYActivityType : uint8 {
	None,
	Area,
	AI_Guardians,
	AI_Spawning,
	BigDrill,
	BossHunt,
	DataRetrieval,
	Delivery,
	Deposit,
	Escape,
	Hunt,
	Mineral_AlienCrystals,
	Mineral_BasicOres,
	Mineral_HeavyMetals,
	Mineral_Radioactive,
	Mineral_Veltecite,
	MonsterNest,
	PowerUp,
	StormSurge,
	Tracking,
	Train,
	Meteor,
	Uplink,
	LootContainers,
	LootPoints,
	All,
	MAX,
};

// Enum Prospect.EYMeshViewState
enum class EYMeshViewState : uint8 {
	NoneAssigned,
	FirstPerson,
	ThirdPerson,
	EYMeshViewState_MAX,
};

// Enum Prospect.EYClimbingStateInternal
enum class EYClimbingStateInternal : uint8 {
	None,
	MovingUp,
	MovingForward,
	MovingDown,
	EYClimbingStateInternal_MAX,
};

// Enum Prospect.EYMoveType
enum class EYMoveType : uint8 {
	None,
	Climb,
	Vault,
	EYMoveType_MAX,
};

// Enum Prospect.EYObstacleType
enum class EYObstacleType : uint8 {
	None,
	WaistHigh,
	ShoulderHigh,
	AboveHead,
	Max,
};

// Enum Prospect.EYInputUIStackType
enum class EYInputUIStackType : uint8 {
	Invalid,
	None,
	Scene,
	GearStore,
	SocialInteraction,
	InputWidget,
	Chat,
	EYInputUIStackType_MAX,
};

// Enum Prospect.EYInputActionName
enum class EYInputActionName : uint8 {
	Turn,
	LookUp,
	SwitchWeapon1,
	SwitchWeapon2,
	SwitchWeapon3,
	SwitchWeapon4,
	SwitchWeapon5,
	SwitchWeapon6,
	SwitchWeapon7,
	SwitchWeapon8,
	SwitchWeapon9,
	NextWeapon,
	PrevWeapon,
	Fire,
	Targeting,
	Reload,
	ActivateAbility1,
	ActivateAbility2,
	Interact,
	Team,
	MatchInventory,
	ToggleMap,
	Chat,
	SpectateNext,
	SpectatePrev,
	SpectateZoomIn,
	SpectateZoomOut,
	SpectateCamera,
	Debug_ToggleMasterDebugWidget,
	Social,
	Social_GoThere,
	Social_Enemies,
	DamageRecap,
	Challenge,
	ToggleLobbyHUD,
	Emote,
	Banner,
	QuickBuy1,
	QuickBuy2,
	QuickBuy3,
	QuickBuy4,
	Debug_BugIt,
	PushToTalk,
	ToggleStationMap,
	QuickMenu,
	ActivateConsumable,
	ToolWheel,
	ConsumableWheel,
	Melee,
	HideHud,
	OpenAttachmentScreen,
	AnyKey,
	LookUpController,
	TurnController,
	None,
	EYInputActionName_MAX,
};

// Enum Prospect.EYPlayerSetType
enum class EYPlayerSetType : uint8 {
	None,
	Kit,
	Pistol,
	WeaponOne,
	WeaponTwo,
	WeaponMax,
	Shield,
	BagItem,
	StashItem,
	SafeItem,
	CorpseContainer,
	Bag,
	Helmet,
	MeleeWeapon,
	MAX,
};

// Enum Prospect.EYFriendOnlineStatus
enum class EYFriendOnlineStatus : uint8 {
	None,
	PlayingThisGame,
	Online,
	PlayingOtherGame,
	EYFriendOnlineStatus_MAX,
};

// Enum Prospect.EYMatchState
enum class EYMatchState : uint8 {
	EnteringMap,
	WaitingToStart,
	PreMatch,
	LaunchingMatch,
	SeamlessTravel,
	MatchIntro,
	MatchInProgress,
	MatchEnding,
	MatchOver,
	DisconnectedPlayers,
	LeavingMap,
	None,
	EYMatchState_MAX,
};

// Enum Prospect.EYPlayerMatchState
enum class EYPlayerMatchState : uint8 {
	MatchLevelsLoaded,
	ReadiedUp,
	InMatch,
	FinishedMatch,
	InEndOfMatch,
	EYPlayerMatchState_MAX,
};

// Enum Prospect.EYNotificationPlacement
enum class EYNotificationPlacement : uint8 {
	Center,
	RightMiddle,
	RightTop,
	LeftMiddle,
	EYNotificationPlacement_MAX,
};

// Enum Prospect.EYNotificationType
enum class EYNotificationType : uint8 {
	Invalid,
	SimpleText,
	ImportantText,
	ImmidateText,
	EYNotificationType_MAX,
};

// Enum Prospect.EYAIState
enum class EYAIState : uint8 {
	None,
	Idle,
	Investigate,
	Combat,
	Reseting,
	Dead,
	Suspicious,
	Resting,
	Test,
	EYAIState_MAX,
};

// Enum Prospect.EYEnemyType
enum class EYEnemyType : uint8 {
	None,
	DebugAutomationTest,
	DirtBeast_Melee,
	DirtBeast_RangedShort,
	DirtBeast_RangedMedium,
	DirtBeast_RangedLong,
	DirtBeast_MeleeHeavy,
	DirtBeast_RangedHeavy,
	DirtBeast_FlyingHeavy,
	DirtBeast_Boss,
	Orobot_Melee,
	Orobot_RangedShort,
	Orobot_RangedMedium,
	Orobot_Walker,
	Orobot_Platform,
	Plunderbot_RangedShort,
	Plunderbot_RangedMedium,
	Plunderbot_RangedLong,
	GlowBeetle_Blast,
	GlowBeetle_Acid,
	GlowBeetle_Summon,
	Strider,
	Rattler,
	Weremole,
	Crusher,
	EYEnemyType_MAX,
};

// Enum Prospect.EYSpawnRequestStatus
enum class EYSpawnRequestStatus : uint8 {
	RequiresCharacter,
	RequiresController,
	RequiresBehavior,
	Completed,
	Failed,
	EYSpawnRequestStatus_MAX,
};

// Enum Prospect.EYDamageApplication
enum class EYDamageApplication : uint8 {
	Damage,
	Heal,
	HealAndDamage,
	EYDamageApplication_MAX,
};

// Enum Prospect.EYGameplayContextType
enum class EYGameplayContextType : uint8 {
	Unknown,
	Weapon,
	Ability,
	Melee,
	Storm,
	Vehicle,
	Armor,
	All,
	EYGameplayContextType_MAX,
};

// Enum Prospect.EYStateChangeType
enum class EYStateChangeType : uint8 {
	None,
	Deactivated,
	Activated,
	Both,
	EYStateChangeType_MAX,
};

// Enum Prospect.EYLeanTarget
enum class EYLeanTarget : uint8 {
	Middle,
	Left,
	Right,
	EYLeanTarget_MAX,
};

// Enum Prospect.EYAnnouncementType
enum class EYAnnouncementType : uint8 {
	Play2D,
	SpawnAtLocation,
	SpawnAttached,
	EYAnnouncementType_MAX,
};

// Enum Prospect.EYVoRowType
enum class EYVoRowType : uint8 {
	Regular,
	FactionOverride,
	PlayerBodyTypeOverride,
	EYVoRowType_MAX,
};

// Enum Prospect.EYCharacterVanityResetRequest
enum class EYCharacterVanityResetRequest : uint8 {
	Invalid,
	Category,
	Customization,
	EYCharacterVanityResetRequest_MAX,
};

// Enum Prospect.EYCharacterCustomizationColorType
enum class EYCharacterCustomizationColorType : uint8 {
	Red,
	Blue,
	Green,
	Black,
	Silver,
	Gold,
	Purple,
	Pink,
	Cyan,
	Bronze,
	PrototypeColor_01,
	PrototypeColor_02,
	PrototypeColor_03,
	PrototypeColor_04,
	PrototypeColor_05,
	PrototypeColor_06,
	Invalid,
	EYCharacterCustomizationColorType_MAX,
};

// Enum Prospect.EYEquipedWeaponPoseType
enum class EYEquipedWeaponPoseType : uint8 {
	Invalid,
	PistolPose,
	RiflePose,
	ScannerPose,
	ConsumableSelfApplicationPose,
	ConsumableThrowablePose,
	ConsumableDeployablePose,
	CustomNonUsedPose_01,
	HeavyPose,
	CustomNonUsedPose_03,
	CustomNonUsedPose_04,
	CustomNonUsedPose_05,
	CustomNonUsedPose_06,
	CustomNonUsedPose_07,
	CustomNonUsedPose_08,
	CustomNonUsedPose_09,
	CustomNonUsedPose_11,
	CustomNonUsedPose_12,
	CustomNonUsedPose_13,
	CustomNonUsedPose_14,
	CustomNonUsedPose_15,
	CustomNonUsedPose_16,
	CustomNonUsedPose_17,
	CustomNonUsedPose_18,
	EYEquipedWeaponPoseType_MAX,
};

// Enum Prospect.EYContractStatus
enum class EYContractStatus : uint8 {
	Invalid,
	Inactive,
	Active,
	Completed,
	RewardsClaimed,
	Cancelled,
	MAX,
};

// Enum Prospect.EYDeadDropDepositResult
enum class EYDeadDropDepositResult : uint8 {
	UnknownError,
	Success,
	WrongItems,
	WrongDeadDropLocation,
	NoDeadDropContract,
	MAX,
};

// Enum Prospect.EYMapMarkerState
enum class EYMapMarkerState : uint8 {
	INACTIVE,
	ACTIVE,
	POSTLOBBY,
	DESTROYED,
	HIDDEN,
	REMOVED,
	ACTIVE_ANIMATED,
	MAX,
};

// Enum Prospect.EYContainerType
enum class EYContainerType : uint8 {
	CustomItem,
	StandardItem,
	Offer,
	EYContainerType_MAX,
};

// Enum Prospect.EYWheelType
enum class EYWheelType : uint8 {
	None,
	Comm,
	Emote,
	Banner,
	Social,
	Tool,
	Consumable,
	EYWheelType_MAX,
};

// Enum Prospect.EYLootSourceType
enum class EYLootSourceType : uint8 {
	None,
	Generic,
	MapLoot,
	Removed,
	AILootDrop,
	PlayerItem,
	PlayerItemDroppedOnDeath,
	EYLootSourceType_MAX,
};

// Enum Prospect.EYDBNOTeleportState
enum class EYDBNOTeleportState : uint8 {
	None,
	Teleporting,
	TeleportCompleted,
	EYDBNOTeleportState_MAX,
};

// Enum Prospect.EYLandingType
enum class EYLandingType : uint8 {
	Soft,
	Medium,
	Hard,
	EYLandingType_MAX,
};

// Enum Prospect.EYCachedSpawnLocationType
enum class EYCachedSpawnLocationType : uint8 {
	Invalid,
	InMatch,
	EYCachedSpawnLocationType_MAX,
};

// Enum Prospect.EYServicePingTypes
enum class EYServicePingTypes : uint8 {
	Station,
	Matchmaking,
	EYServicePingTypes_MAX,
};

// Enum Prospect.EYGPAModifierType
enum class EYGPAModifierType : uint8 {
	Additive,
	Multiplicitive_PreAdd,
	Division_PreAdd,
	Multiplicitive_PostAdd,
	Division_PostAdd,
	Override,
	EYGPAModifierType_MAX,
};

// Enum Prospect.EYGameplayAttribute
enum class EYGameplayAttribute : uint8 {
	None,
	AbilityCooldownTime,
	AIAmountAttackPhaseCount,
	AIAmountOfShots,
	AIRefireTime,
	AIStabilityDamageReceived,
	BombardmentDamage,
	ChainReactionActive,
	ChainReactionDamagePercentReduction,
	ChainReactionRadius,
	CurrentHealth,
	CurrentShield,
	DamageEnemyMultiplier,
	DamageEnemyWeakAreaMultiplier,
	DamageOverTimeEnabled,
	DamagePlayerMultiplier,
	DamageRadius,
	DamageScalingDealt,
	DamageScalingDealtAgainstAI,
	DamageScalingDealtAgainstPlayers,
	DamageScalingReceived,
	DamageScalingReceivedFromAI,
	DamageScalingReceivedFromPlayers,
	DamageSelf,
	DamageSelfInvincibility,
	FallingDamageReduction,
	FallingVelocityReduction,
	GravityScaling,
	HardLandingDistance,
	HealingWardPower,
	HealthDegenerationRate,
	HealthPlateSightAngle,
	HealthRegenerationDelay,
	HealthRegenerationRate,
	InteractionInteruptTime,
	HelmetNV,
	HelmetThermal,
	KineticShieldHealth,
	MaxHealth,
	MaxShield,
	MaxSlideSpeed,
	MaxSpeed,
	MaxSprintSpeed,
	OverallMovementSpeed,
	Piercing,
	ProjectileAcceleration,
	ProjectileAccelerationDelay,
	ProjectileAccelerationMovementSpeed,
	ProjectileArmingTime,
	ProjectileGravityScale,
	ProjectileInitialSpeed,
	ProjectileLifeSpan,
	ProjectileMaxSpeed,
	RadialFalloffMultiplier,
	RadialStartFalloffRange,
	SpinupDuration,
	SprintWhileReloading,
	StaminaConsumptionPerWeaponFire,
	SuperJumpCooldown,
	SuperJumpSpeed,
	TargetingFOVSpeed,
	TargetingTime,
	TargetingTimeFOV,
	VehicleBoostCooldown,
	VehicleBoostDuration,
	VehicleHealth,
	VehicleMovementSpeed,
	WeakAreaDamageScaling,
	WeaponAmmoOnSwitch,
	WeaponAmmoConsumptionOnShot,
	WeaponAmountOfShots,
	WeaponBurstCount,
	WeaponBurstInterval,
	WeaponClipSize,
	WeaponCrouchingRecoil,
	WeaponDamageDirect,
	WeaponDamageFalloffMultiplier,
	WeaponDamageRadial,
	WeaponDamageRange,
	WeaponDotDamage,
	WeaponDotDuration,
	WeaponDotInterval,
	WeaponEquipTime,
	WeaponHideFullScreenWidget,
	WeaponIsLooping,
	WeaponMaxTraceRange,
	WeaponPenetration,
	WeaponRecoilCompenstationAmountX,
	WeaponRecoilCompenstationAmountY,
	WeaponRecoilCompenstationSpeedX,
	WeaponRecoilCompenstationSpeedY,
	WeaponRecoilCompenstationStartTime,
	WeaponRecoilHorizontal,
	WeaponRecoilVertical,
	WeaponRecoilIncreaseRate,
	WeaponRefireAnimationRateScaleMultiplier,
	WeaponRefireTime,
	WeaponReloadTime,
	WeaponScaleOffset,
	WeaponSpreadDecreaseRate,
	WeaponSpreadIncreaseRate,
	WeaponSpreadMax,
	WeaponSpreadUnaimed,
	WeaponSprintBufferTime,
	WeaponTargetingFOV,
	WeaponTargetingRecoil,
	WeaponTargetingSpreadMultiplier,
	WeaponTargetingMaxSpreadMultiplier,
	WeaponTargetingSpreadIncreaseMultiplier,
	WeaponUnequipTime,
	WeaponRadialDamageImpulse,
	WeaponRadialDamageSelfImpulseMultiplier,
	WeaponIsSilenced,
	WorldTargetingFOV,
	ScopeThermal,
	ScopeNV,
	XPIncrease,
	StaminaConsumptionRate,
	MaxStamina,
	GPA_HAS_BEEN_REMOVED,
	EYGameplayAttribute_MAX,
};

// Enum Prospect.EYKeybindingInputDeviceType
enum class EYKeybindingInputDeviceType : uint8 {
	None,
	Keyboard,
	GamepadGeneric,
	PS4,
	XB1,
	PS5,
	XBS,
	EYKeybindingInputDeviceType_MAX,
};

// Enum Prospect.EYInputBindingCategory
enum class EYInputBindingCategory : uint8 {
	MatchGeneral,
	MatchSpectate,
	MatchGearStore,
	Station,
	General,
	MAX,
};

// Enum Prospect.EYWeaponTransportType
enum class EYWeaponTransportType : uint8 {
	Invalid,
	Hitscan,
	Projectile,
	Sphere,
	PhysicsActor,
	Capsule,
	EYWeaponTransportType_MAX,
};

// Enum Prospect.EYInteractionUpdateType
enum class EYInteractionUpdateType : uint8 {
	Start,
	Successful,
	Interrupted,
	MAX,
};

// Enum Prospect.EYInteractionType
enum class EYInteractionType : uint8 {
	None,
	ExtractionActivation,
	Extraction,
	PickUp,
	DBNO_Revive,
	DBNO_Execute,
	AutoPickup,
	Trophy,
	LootCrate,
	StationSocial,
	MAX,
};

// Enum Prospect.EYWeaponSlotType
enum class EYWeaponSlotType : uint8 {
	Starter,
	Primary,
	Invalid,
	EYWeaponSlotType_MAX,
};

// Enum Prospect.EYPerkTarget
enum class EYPerkTarget : uint8 {
	Source,
	Target,
	EYPerkTarget_MAX,
};

// Enum Prospect.EYPerkBool
enum class EYPerkBool : uint8 {
	None,
	LessThan,
	LessThanOrEqualTo,
	EqualTo,
	GreaterThanOrEqualTo,
	GreaterThan,
	EYPerkBool_MAX,
};

// Enum Prospect.EYPerkTrigger
enum class EYPerkTrigger : uint8 {
	GameplayAttribute,
	AlwaysOn,
	OnHit,
	OnKill,
	OnBeingHit,
	OnTargeting,
	OnWeaponSwitch,
	OnSprinting,
	OnFalling,
	OnDealingDamageModification,
	OnHealthChanged,
	OnTargetingAndFalling,
	OnSpinUp,
	OnMeleeLight,
	OnMeleeHeavy,
	EYPerkTrigger_MAX,
};

// Enum Prospect.EYPlayerAwarenessNotificationType
enum class EYPlayerAwarenessNotificationType : uint8 {
	NONE,
	TeamMateDBNO,
	TeamMateTakeDamageByHostilePlayer,
	TeamMateDealDamageToHostilePlayer,
	TeamMateShieldBroken,
	LocalPlayerTargeted,
	MAX,
};

// Enum Prospect.EYWeaponVisualState
enum class EYWeaponVisualState : uint8 {
	Normal,
	PendingTransportRelease,
	EYWeaponVisualState_MAX,
};

// Enum Prospect.EYPlayerMatchFinishedResult
enum class EYPlayerMatchFinishedResult : uint8 {
	None,
	Dead,
	Escaped,
	EYPlayerMatchFinishedResult_MAX,
};

// Enum Prospect.EYStatValueComparison
enum class EYStatValueComparison : uint8 {
	NONE,
	LOWER_IS_BETTER,
	HIGHER_IS_BETTER,
	MAX,
};

// Enum Prospect.EYStatValueDisplayMethod
enum class EYStatValueDisplayMethod : uint8 {
	NONE,
	INT,
	DECIMAL,
	PERCENTAGE,
	MAX,
};

// Enum Prospect.EYFaction
enum class EYFaction : uint8 {
	Invalid,
	ICA,
	Korolev,
	Osiris,
	MAX,
};

// Enum Prospect.EYPlayerGameDataStateType
enum class EYPlayerGameDataStateType : uint8 {
	Normal,
	MAX,
};

// Enum Prospect.EYProgressState
enum class EYProgressState : uint8 {
	Idle,
	Running,
	Finished,
	Stopped,
	Paused,
	Resumed,
	ReverseRunning,
	EYProgressState_MAX,
};

// Enum Prospect.EYChannelContext
enum class EYChannelContext : uint8 {
	None,
	Text,
	Voice,
	All,
	EYChannelContext_MAX,
};

// Enum Prospect.EYGetErrorHandling
enum class EYGetErrorHandling : uint8 {
	LogAndReturnNull,
	ReturnNull,
	EYGetErrorHandling_MAX,
};

// Enum Prospect.EYInventoryListType
enum class EYInventoryListType : uint8 {
	None,
	CurrentEquipped,
	FullList,
	EYInventoryListType_MAX,
};

// Enum Prospect.EYInventoryPlayerTypes
enum class EYInventoryPlayerTypes : uint8 {
	Undefined,
	Stash,
	Set,
	Inventory,
	Info,
	Pickaxe,
	EYInventoryPlayerTypes_MAX,
};

// Enum Prospect.EYCameraIntentionType
enum class EYCameraIntentionType : uint8 {
	None,
	Shop,
	Customization,
	Seasons,
	Launch,
	All,
	EYCameraIntentionType_MAX,
};

// Enum Prospect.EYApperenceCategoriesTypes
enum class EYApperenceCategoriesTypes : uint8 {
	Overview,
	Archetype,
	Banner,
	Emote,
	Vehicle,
	Droppod,
	Spray,
	Pet,
	Invalid,
	EYApperenceCategoriesTypes_MAX,
};

// Enum Prospect.EYCustomizationMode
enum class EYCustomizationMode : uint8 {
	None,
	Weapon,
	PlayerCharacter,
	CharacterExplicitVisualization,
	Banner,
	Emote,
	Item,
	Vehicle,
	Droppod,
	Spray,
	Pet,
	Melee,
	CharacterCustomizationPreview,
	MAX,
};

// Enum Prospect.EYLevelStreamingType
enum class EYLevelStreamingType : uint8 {
	LobbyOnly,
	LobbyCritical,
	BeforeMatch,
	DuringMatch,
	EndOfMatch,
	MAX,
};

// Enum Prospect.EYMapMarkerType
enum class EYMapMarkerType : uint8 {
	NONE,
	PLAYER_MARKER,
	EXTRACTION_STATION,
	HUNT,
	UPLINK,
	MINERALS,
	ESCAPE_POD,
	SETTLEMENT,
	AREA_NAME,
	RESOURCE_FARMING,
	OB_ALPHA,
	OB_BETTA,
	OB_GAMMA,
	MA_ALPHA,
	MA_BETTA,
	MA_GAMMA,
	OB_POWERUP,
	MONSTER_DEN,
	GEAR_STORE_PURCHASE,
	NOISE_SOURCE,
	OB_TROPHY,
	OB_REDTROPHY,
	OB_YELLOWTROPHY,
	OB_GREENTROPHY,
	OB_BLUETROPHY,
	OB_PURPLETROPHY,
	OB_WHITETROPHY,
	OB_BLACKTROPHY,
	OB_CURSEDTROPHY,
	OB_COLLECT,
	OB_BOSSHUNT,
	OB_SUPERPOWERUP,
	OB_DELIVERY,
	OB_DELIVERYSTATION,
	MA_DATARETRIVAL,
	AREABUBBLE,
	PLAYER_START,
	SOCIAL,
	TRACKING,
	MOVEMENT_NOISE,
	OB_DEPOSIT,
	OB_DEPOSITFIELD,
	OB_DEPOSITSTATION,
	SURVEILLANCE_WARD,
	OB_SALVAGE,
	OB_SALVAGE_SUB_ACTOR,
	OB_SABOTAGE,
	OB_STORMSURGE,
	OB_STORMSURGE_SUB_ACTOR,
	OB_BIGDRILL,
	OB_Train,
	DEBUG_ACTITYLOCATION,
	VEHICLE,
	KILLCONTRACT,
	MISSION,
	MA_TUTORIALIZATIONACTIVITY,
	OB_DEPOSIT_EASTER,
	OB_DEPOSIT_STATION_EASTER,
	MA_RecallRecharge,
	MA_VPExtraction,
	MAX,
};

// Enum Prospect.EYMissionResultType
enum class EYMissionResultType : uint8 {
	Active,
	Failed,
	StepCompleted,
	MissionCompleted,
	Succeeded,
	EYMissionResultType_MAX,
};

// Enum Prospect.EYReportPlayerType
enum class EYReportPlayerType : uint8 {
	Cheating,
	AFK,
	Toxic,
	Griefing,
	Invalid,
	EYReportPlayerType_MAX,
};

// Enum Prospect.EYCustomerServiceRequestType
enum class EYCustomerServiceRequestType : uint8 {
	BanAppeal,
	CheatReport,
	OpenQuestion,
	TechnicalSupport,
	ReportPlayer,
	Invalid,
	EYCustomerServiceRequestType_MAX,
};

// Enum Prospect.EYPlayerSupportResult
enum class EYPlayerSupportResult : uint8 {
	Succeeded,
	Failed,
	Timeout,
	EYPlayerSupportResult_MAX,
};

// Enum Prospect.EYReportType
enum class EYReportType : uint8 {
	None,
	ReportPlayer,
	CustomerService,
	EYReportType_MAX,
};

// Enum Prospect.EYSessionEventType
enum class EYSessionEventType : uint8 {
	Invalid,
	Warning,
	Finishing,
	MAX,
};

// Enum Prospect.EYGfxQualityPreset
enum class EYGfxQualityPreset : uint8 {
	Low,
	Medium,
	High,
	Epic,
	Custom,
	EYGfxQualityPreset_MAX,
};

// Enum Prospect.EYSquadID
enum class EYSquadID : uint8 {
	SQUAD_2,
	SQUAD_3,
	SQUAD_4,
	SQUAD_5,
	SQUAD_6,
	SQUAD_7,
	SQUAD_8,
	SQUAD_9,
	SQUAD_10,
	SQUAD_11,
	SQUAD_MAX,
};

// Enum Prospect.EYHUDInfoMessageState
enum class EYHUDInfoMessageState : uint8 {
	None,
	Active,
	Resting,
	Disabled,
	MAX,
};

// Enum Prospect.EYHUDInfoPriorityCategory
enum class EYHUDInfoPriorityCategory : uint8 {
	None,
	EvacInteraction,
	Interaction,
	AreaAnnouncement,
	MAX,
};

// Enum Prospect.EYItemActionType
enum class EYItemActionType : uint8 {
	None,
	Equip,
	CloseEquip,
	Unequip,
	Scrap,
	Craft,
	CancelCrafting,
	GoToItemDetails,
	Purchase,
	PurchasePending,
	MAX,
};

// Enum Prospect.EYSeasonCategory
enum class EYSeasonCategory : uint8 {
	SeasonOverview,
	Challenges,
	SeasonChallenges,
	DailyWeeklyChallenges,
	EYSeasonCategory_MAX,
};

// Enum Prospect.EYShopOfferPurchaseDialogState
enum class EYShopOfferPurchaseDialogState : uint8 {
	AskingForConfirmation,
	PurchasePending,
	PurchaseSuccessful,
	PurchaseFailed,
	EYShopOfferPurchaseDialogState_MAX,
};

// Enum Prospect.EYNotificationAction
enum class EYNotificationAction : uint8 {
	None,
	Accept,
	Decline,
	Remove,
	EYNotificationAction_MAX,
};

// Enum Prospect.EYNotificationMessageType
enum class EYNotificationMessageType : uint8 {
	None,
	SquadLeft,
	SquadJoined,
	SquadDisbanded,
	SquadFailed,
	SquadInvite,
	FriendAdded,
	FriendOnline,
	FriendOffline,
	FriendInviteSent,
	FriendInvite,
	GenericSquad,
	GenericFriend,
	GenericNotificationMessage,
	EYNotificationMessageType_MAX,
};

// Enum Prospect.EYNotifcationType
enum class EYNotifcationType : uint8 {
	None,
	Invite,
	Message,
	EYNotifcationType_MAX,
};

// Enum Prospect.EYPlayerSetTypeSimplified
enum class EYPlayerSetTypeSimplified : uint8 {
	Invalid,
	StashItem,
	BagItem,
	ActiveSlot,
	EYPlayerSetTypeSimplified_MAX,
};

// Enum Prospect.EYItemImprovementScreenSlotType
enum class EYItemImprovementScreenSlotType : uint8 {
	Invalid,
	SellScreen,
	StashScreen,
	MAX,
};

// Enum Prospect.EYContractDifficulty
enum class EYContractDifficulty : uint8 {
	Invalid,
	Easy,
	Medium,
	Hard,
	MAX,
};

// Enum Prospect.EYObjectivesProgressProcessing
enum class EYObjectivesProgressProcessing : uint8 {
	Invalid,
	Sequential,
	Parallel,
	MAX,
};

// Enum Prospect.EYKillType
enum class EYKillType : uint8 {
	Invalid,
	Players,
	Creatures,
	All,
	MAX,
};

// Enum Prospect.EYContractObjectiveType
enum class EYContractObjectiveType : uint8 {
	Invalid,
	Kills,
	OwnNumOfItem,
	DeadDrop,
	MAX,
};

// Enum Prospect.EYCustomizationModelType
enum class EYCustomizationModelType : uint8 {
	None,
	Persistent,
	Pending,
	EYCustomizationModelType_MAX,
};

// Enum Prospect.EYCharacterItemColumnType
enum class EYCharacterItemColumnType : uint8 {
	Invalid,
	Item,
	Color,
	Archetype,
	EYCharacterItemColumnType_MAX,
};

// Enum Prospect.EYVehicleStateType
enum class EYVehicleStateType : uint8 {
	Invalid,
	Landing,
	Possesed,
	Idle,
	Destroyed,
	EYVehicleStateType_MAX,
};

// Enum Prospect.EYPlayerStateBlueprint
enum class EYPlayerStateBlueprint : uint8 {
	None,
	Crouching,
	Sprinting,
	Targeting,
	Reloading,
	Firing,
	WeaponSwitch,
	SpiningUp,
	Interacting,
	Death,
	ReloadAnimation,
	NOTUSED4,
	Melee,
	Emote,
	Inventory,
	Slide,
	NOTUSED5,
	NOTUSED6,
	Use,
	NOTUSED7,
	NOTUSED8,
	DBNO,
	Revive,
	ReloadAmmo,
	NOTUSED9,
	HardLanding,
	Prototype,
	Vehicle,
	VehicleLeaving,
	Banner,
	NOTUSED3,
	ChargingAttack,
	Ability,
	NOTUSED1,
	Carrying,
	Climbing,
	Prone,
	SprintDashing,
	NOTUSED2,
	MeleeHeavy,
	MAX,
};

// Enum Prospect.EYFadeDirection
enum class EYFadeDirection : uint8 {
	FadeIn,
	FadeOut,
	EYFadeDirection_MAX,
};

// Enum Prospect.EYDebugActivitySpawnMode
enum class EYDebugActivitySpawnMode : uint8 {
	None,
	DebugSet,
	DebugActivities,
	EYDebugActivitySpawnMode_MAX,
};

// Enum Prospect.EYActivityLocationStatus
enum class EYActivityLocationStatus : uint8 {
	Free,
	SpawnRequestPending,
	Occupied,
	Depleted,
	OnCooldown,
	EYActivityLocationStatus_MAX,
};

// Enum Prospect.EYEnvQueryHightlightMode
enum class EYEnvQueryHightlightMode : uint8 {
	All,
	Best5Pct,
	Best25Pct,
	EYEnvQueryHightlightMode_MAX,
};

// Enum Prospect.EYLinkType
enum class EYLinkType : uint8 {
	Evaluation,
	Area,
	EYLinkType_MAX,
};

// Enum Prospect.EYUIComponentType
enum class EYUIComponentType : uint8 {
	Normal,
	Helper,
	EYUIComponentType_MAX,
};

// Enum Prospect.EYAIAnalyticsTrigger
enum class EYAIAnalyticsTrigger : uint8 {
	Invalid,
	Died,
	Reset,
	KilledPlayer,
	EYAIAnalyticsTrigger_MAX,
};

// Enum Prospect.EYAIAttackStatus
enum class EYAIAttackStatus : uint8 {
	Running,
	Finished,
	Cancelled,
	EYAIAttackStatus_MAX,
};

// Enum Prospect.EYAIBehaviorReaction
enum class EYAIBehaviorReaction : uint8 {
	None,
	Rotate,
	LowFeedback,
	HighFeedback,
	Investigate,
	EYAIBehaviorReaction_MAX,
};

// Enum Prospect.EYAIReactionContext
enum class EYAIReactionContext : uint8 {
	None,
	DamageReaction,
	EYAIReactionContext_MAX,
};

// Enum Prospect.EYAIDetailAggroType
enum class EYAIDetailAggroType : uint8 {
	Distance,
	Token,
	Visibility,
	TimeSinceLastSeen,
	DBNO,
	TargetType,
	TimeAcquiredAsTarget,
	DamageReceived,
	DamageDealt,
	Shared,
	Hearing,
	Max,
};

// Enum Prospect.EYAISenseType
enum class EYAISenseType : uint8 {
	None,
	Hearing,
	Shared,
	Damage,
	Sight,
	EYAISenseType_MAX,
};

// Enum Prospect.EYAIGameModesDebugReference
enum class EYAIGameModesDebugReference : uint8 {
	Solo,
	Duo,
	Squad,
	EYAIGameModesDebugReference_MAX,
};

// Enum Prospect.EYAIFactions
enum class EYAIFactions : uint8 {
	DirtBeasts,
	Droids,
	Neutral,
	Player,
	EYAIFactions_MAX,
};

// Enum Prospect.EYAISpawnContexts
enum class EYAISpawnContexts : uint8 {
	Normal,
	Stormy,
	Thunderous,
	Hunt,
	Weak,
	Alpha,
	Season,
	EYAISpawnContexts_MAX,
};

// Enum Prospect.EYAISquadGenerationTypesToggle
enum class EYAISquadGenerationTypesToggle : uint8 {
	Enabled,
	Disabled,
	Forced,
	EYAISquadGenerationTypesToggle_MAX,
};

// Enum Prospect.EYGenericValues
enum class EYGenericValues : uint8 {
	I,
	II,
	III,
	IV,
	EYGenericValues_MAX,
};

// Enum Prospect.EYNavMeshType
enum class EYNavMeshType : uint8 {
	Normal,
	Hover,
	Large,
	EYNavMeshType_MAX,
};

// Enum Prospect.EYBrightcapDropReason
enum class EYBrightcapDropReason : uint8 {
	player_damage,
	ai_damage,
	fall_damage,
	delivered,
	EYBrightcapDropReason_MAX,
};

// Enum Prospect.EYBrightcapPickupSource
enum class EYBrightcapPickupSource : uint8 {
	spawn,
	player_drop,
	enemy_drop,
	EYBrightcapPickupSource_MAX,
};

// Enum Prospect.EYLootAnalyticsAction
enum class EYLootAnalyticsAction : uint8 {
	Dropped,
	PickedUp,
	Expired,
	EYLootAnalyticsAction_MAX,
};

// Enum Prospect.EYMetricsType
enum class EYMetricsType : uint8 {
	Unknown,
	Editor,
	Client,
	Server,
	EYMetricsType_MAX,
};

// Enum Prospect.EYAutomationTestResult
enum class EYAutomationTestResult : uint8 {
	Failed,
	Succeeded,
	Warning,
	Log,
	EYAutomationTestResult_MAX,
};

// Enum Prospect.EYBackendValidation
enum class EYBackendValidation : uint8 {
	Enabled,
	Disabled,
	EYBackendValidation_MAX,
};

// Enum Prospect.EYEscapeBIHookStep
enum class EYEscapeBIHookStep : uint8 {
	Undefined,
	Created,
	Triggered,
	ShipLanded,
	Escaped,
	CooldownBegin,
	CooldownEnded,
	EYEscapeBIHookStep_MAX,
};

// Enum Prospect.EYPainTrainStatus
enum class EYPainTrainStatus : uint8 {
	Captured,
	Lost,
	Finished,
	EYPainTrainStatus_MAX,
};

// Enum Prospect.EYLogVerbosity
enum class EYLogVerbosity : uint8 {
	NoLogging,
	Fatal,
	Error,
	Warning,
	Display,
	Log,
	Verbose,
	VeryVerbose,
	EYLogVerbosity_MAX,
};

// Enum Prospect.EYLogCategory
enum class EYLogCategory : uint8 {
	None,
	LogYAbilities,
	LogYActivities,
	LogYAI,
	LogYAnalytics,
	LogYAudio,
	LogYAutomation,
	LogYContracts,
	LogYFactions,
	LogYGenerators,
	LogYInitialization,
	LogYInventory,
	LogYMatch,
	LogYPlayer,
	LogYUI,
	LogYMission,
	LogYVehicle,
	EYLogCategory_MAX,
};

// Enum Prospect.EYAnimTaskFinishCondition
enum class EYAnimTaskFinishCondition : uint8 {
	MontageEnds,
	MontageBlendsOut,
	TimeBeforeMontageEnds,
	BlackboardBoolValueChanged,
	EYAnimTaskFinishCondition_MAX,
};

// Enum Prospect.EYCameraDistanceType
enum class EYCameraDistanceType : uint8 {
	None,
	Close,
	Middle,
	Far,
	EYCameraDistanceType_MAX,
};

// Enum Prospect.EYStateCancelationBehavior
enum class EYStateCancelationBehavior : uint8 {
	Nothing,
	FirstPerson,
	ThirdPerson,
	EYStateCancelationBehavior_MAX,
};

// Enum Prospect.EYDeathType
enum class EYDeathType : uint8 {
	Normal,
	PlayerExecutionWhileDBNO,
	Exploding,
	EYDeathType_MAX,
};

// Enum Prospect.EYAssetLoadRetrivalRequestType
enum class EYAssetLoadRetrivalRequestType : uint8 {
	OnlyFirstPerson,
	OnlyThirdPerson,
	All,
	EYAssetLoadRetrivalRequestType_MAX,
};

// Enum Prospect.EYVivoxAudioFadeModel
enum class EYVivoxAudioFadeModel : uint8 {
	None,
	InverseByDistance,
	LinearByDistance,
	ExponentialByDistance,
	EYVivoxAudioFadeModel_MAX,
};

// Enum Prospect.EYMissionStatus
enum class EYMissionStatus : uint8 {
	Started,
	Paused,
	Reset,
	EYMissionStatus_MAX,
};

// Enum Prospect.EYCommWheelEntryTutorialSetting
enum class EYCommWheelEntryTutorialSetting : uint8 {
	Always,
	ShowOnlyInTutorial,
	HideInTutorial,
	EYCommWheelEntryTutorialSetting_MAX,
};

// Enum Prospect.EYLerpBehavior
enum class EYLerpBehavior : uint8 {
	Constant,
	MaxToNone,
	NoneToMax,
	IntervalLerp,
	Blinking,
	EYLerpBehavior_MAX,
};

// Enum Prospect.EYInputBlockingAssociation
enum class EYInputBlockingAssociation : uint8 {
	Interaction,
	DBNO,
	Banner,
	Intro,
	EYInputBlockingAssociation_MAX,
};

// Enum Prospect.EYTravelState
enum class EYTravelState : uint8 {
	None,
	PendingSession,
	ServerValdiation,
	ResourceCleanup,
	Travel,
	EYTravelState_MAX,
};

// Enum Prospect.EYTravelInstanceType
enum class EYTravelInstanceType : uint8 {
	Invalid,
	Match,
	Station,
	EYTravelInstanceType_MAX,
};

// Enum Prospect.EYStringVisualizationType
enum class EYStringVisualizationType : uint8 {
	CHAR_PER_CHAR,
	RANDOM,
	MAX,
};

// Enum Prospect.EYDamageComponentType
enum class EYDamageComponentType : uint8 {
	Normal,
	Player,
	Enemy,
	Invincible,
	Everything,
	EYDamageComponentType_MAX,
};

// Enum Prospect.EYBlueprintCraftingPriceType
enum class EYBlueprintCraftingPriceType : uint8 {
	Material,
	Currency,
	Invalid,
	EYBlueprintCraftingPriceType_MAX,
};

// Enum Prospect.EYCraftingUnavailableReason
enum class EYCraftingUnavailableReason : uint8 {
	None,
	ItemOwned,
	NotEnoughFunds,
	FactionLevelNotReached,
	MissionNotConcluded,
	RequirredItemNotOwned,
	Unknown,
	MAX,
};

// Enum Prospect.EYBlueprintAvailability
enum class EYBlueprintAvailability : uint8 {
	Locked,
	Unlocked,
	Purchasable,
	PurchasePending,
	Obtained,
	Craftable,
	CreatedButNotCraftable,
	CreatedAndCraftable,
	CreatedCraftedCantCraftAgain,
	MAX,
};

// Enum Prospect.EYExperienceType
enum class EYExperienceType : uint8 {
	None,
	SeasonXP,
	MAX,
};

// Enum Prospect.EYExtractionActorState
enum class EYExtractionActorState : uint8 {
	Inactive,
	Activating,
	Active,
	EYExtractionActorState_MAX,
};

// Enum Prospect.EYSlideAnimationState
enum class EYSlideAnimationState : uint8 {
	Into,
	Loop,
	Out,
	EYSlideAnimationState_MAX,
};

// Enum Prospect.EYFeet
enum class EYFeet : uint8 {
	FrontLeft,
	FrontRight,
	BackLeft,
	BackRight,
	EYFeet_MAX,
};

// Enum Prospect.EYTransitionOption
enum class EYTransitionOption : uint8 {
	None,
	ScreenChange,
	MapTravel,
	EYTransitionOption_MAX,
};

// Enum Prospect.EYEndOfMatchView
enum class EYEndOfMatchView : uint8 {
	None,
	EscapeSequence,
	DeathCamera,
	Spectating,
	Results,
	Rewards,
	EYEndOfMatchView_MAX,
};

// Enum Prospect.EYModifierAllowed
enum class EYModifierAllowed : uint8 {
	All,
	OnlyAdditions,
	OnlyMultipliers,
	EYModifierAllowed_MAX,
};

// Enum Prospect.EYGearGroup
enum class EYGearGroup : uint8 {
	None,
	GearSet,
	Loadout,
	MAX,
};

// Enum Prospect.EYPickupType
enum class EYPickupType : uint8 {
	None,
	Currency,
	CurrencyBox,
	CurrencyPlayerDrop,
	Crafting,
	Weapon,
	Ability,
	Ammo,
	HuntItem,
	TrackingItem,
	LootCrate,
	Vehicle,
	Consumable,
	AmmoPlayerDrop,
	Collectible,
	QuestItem,
	Shield,
	Helmet,
	MAX,
};

// Enum Prospect.EYPassiveGeneratorRewardType
enum class EYPassiveGeneratorRewardType : uint8 {
	None,
	Aurum,
	SoftCurrency,
	Ammo,
	Material,
	Crate,
	MAX,
};

// Enum Prospect.EYHideableBushType
enum class EYHideableBushType : uint8 {
	Standard,
	Crouch,
	Prone,
	EYHideableBushType_MAX,
};

// Enum Prospect.EYHitZone
enum class EYHitZone : uint8 {
	None,
	Default,
	Head,
	ArmRight,
	ArmLeft,
	LegRight,
	LegLeft,
	EYHitZone_MAX,
};

// Enum Prospect.EYImpactActorRotation
enum class EYImpactActorRotation : uint8 {
	UpVector_ImpactNormal,
	UpVector_OwnerForwardVector,
	UpVector_MAX,
};

// Enum Prospect.EYInputKeyType
enum class EYInputKeyType : uint8 {
	ActionKey,
	AxisKey,
	EYInputKeyType_MAX,
};

// Enum Prospect.EYStackManagement
enum class EYStackManagement : uint8 {
	Pop,
	Handled,
	Invalid,
	EYStackManagement_MAX,
};

// Enum Prospect.EYInventoryAudioActionPerformed
enum class EYInventoryAudioActionPerformed : uint8 {
	Moved,
	Swapped,
	Dropped,
	EYInventoryAudioActionPerformed_MAX,
};

// Enum Prospect.EYInsuranceStatus
enum class EYInsuranceStatus : uint8 {
	None,
	Pending,
	InsuredByOwner,
	InsuredByAnotherPlayer,
	EYInsuranceStatus_MAX,
};

// Enum Prospect.EYInventoryPlace
enum class EYInventoryPlace : uint8 {
	None,
	Stash,
	ActiveSet,
	Safe,
	EYInventoryPlace_MAX,
};

// Enum Prospect.EYItemChangeContext
enum class EYItemChangeContext : uint8 {
	Normal,
	Cheat,
	EYItemChangeContext_MAX,
};

// Enum Prospect.EYItemStatsCategory
enum class EYItemStatsCategory : uint8 {
	None,
	Weapon,
	Gadget,
	Ability,
	Mod,
	MeleeWeapon,
	EYItemStatsCategory_MAX,
};

// Enum Prospect.EYItemStatsType
enum class EYItemStatsType : uint8 {
	None,
	AttachToOwner,
	Accuracy,
	Ammo,
	Armor,
	BurstInterval,
	Burst,
	BagCapacity,
	Cooldown,
	ChainReactionActive,
	DamageApplication,
	DamageAgainstEnemy,
	DamageAgainstPlayer,
	DamageResistancePlayer,
	DamageResistanceEnemy,
	DamageSelfInvincibility,
	Durability,
	Duration,
	DefaultSpread,
	DPS,
	DirectCloseRange,
	DirectMaximumDistance,
	DirectDamageFalloff,
	Equip,
	Health,
	MaxSpread,
	MaximumDistanceByActivation,
	MaximumDistance,
	MovementSpeedChange,
	NumberApplied,
	PerShotDamage,
	ProjectileSpeed,
	ProjectileLifetime,
	ProjectileGravityScale,
	Piercing,
	Penetration,
	ExplosiveCorpse,
	RadialDamage,
	Radius,
	RadiusDamageEnabled,
	Range,
	RefireTime,
	Reload,
	Recoil,
	RecoilVariance,
	RoundsPerMinute,
	RoundsPerSecond,
	Spinup,
	Speed,
	Stability,
	Shield,
	TargetingSpeed,
	TimeToActivateFromReady,
	TotalDamage,
	WeakAreaDamage,
	WeaponSprintBufferTime,
	WeaponBurstInterval,
	WeaponRecoilCompenstationStartTime,
	WeaponRecoilCompensationAmountX,
	WeaponRecoilCompensationAmountY,
	WeaponRecoilCompensationSpeedX,
	WeaponRecoilCompensationSpeedY,
	WeaponScaleOffset,
	WeaponSpreadIncrease,
	WeaponSpreadDecrease,
	RadialDamageFalloffMultiplier,
	RadialDamageStartFalloffRange,
	VehicleBoostCooldown,
	VehicleBoostSpeed,
	VehicleBoostDuration,
	AccelerationMultiplier,
	EYItemStatsType_MAX,
};

// Enum Prospect.EYItemTooltipType
enum class EYItemTooltipType : uint8 {
	None,
	Weapon,
	Ability,
	Gadget,
	Kit,
	Mod,
	Vanity,
	Material,
	Blueprint,
	Consumable,
	EYItemTooltipType_MAX,
};

// Enum Prospect.EYInputKeybindingType
enum class EYInputKeybindingType : uint8 {
	Primary,
	Secondary,
	Gamepad,
	EYInputKeybindingType_MAX,
};

// Enum Prospect.EYSeasonalEvent
enum class EYSeasonalEvent : uint8 {
	None,
	Easter,
	Halloween,
	Christmas,
	EYSeasonalEvent_MAX,
};

// Enum Prospect.EYLootContainerWidgetType
enum class EYLootContainerWidgetType : uint8 {
	Undefined,
	Bag,
	Corpse,
	DeadDrop,
	EYLootContainerWidgetType_MAX,
};

// Enum Prospect.EYLootVelocityType
enum class EYLootVelocityType : uint8 {
	Regular,
	ViewDirectionDependant,
	EYLootVelocityType_MAX,
};

// Enum Prospect.EYLootContainerTier
enum class EYLootContainerTier : uint8 {
	Low,
	Medium,
	High,
	EYLootContainerTier_MAX,
};

// Enum Prospect.EYMatchMapDifficulty
enum class EYMatchMapDifficulty : uint8 {
	Invalid,
	Unknown,
	VeryEasy,
	Easy,
	Normal,
	Hard,
	VeryHard,
	Extreme,
	MAX,
};

// Enum Prospect.EYMapType
enum class EYMapType : uint8 {
	None,
	Map01,
	Map02,
	Map03,
	Map04,
	MAX,
};

// Enum Prospect.EYMatchmakingRegionOverrideOptions
enum class EYMatchmakingRegionOverrideOptions : uint8 {
	Allow,
	Redirect,
	MAX,
};

// Enum Prospect.EYMatchmakingUsersSplitOptions
enum class EYMatchmakingUsersSplitOptions : uint8 {
	None,
	SplitNewUsers,
	MAX,
};

// Enum Prospect.EYMatchmakingUsersAmountOptions
enum class EYMatchmakingUsersAmountOptions : uint8 {
	None,
	FullestFirst,
	EmptiestFirst,
	MAX,
};

// Enum Prospect.EYMatchmakingMapOptions
enum class EYMatchmakingMapOptions : uint8 {
	None,
	Strict,
	Flexible,
	MAX,
};

// Enum Prospect.EYMineralTier
enum class EYMineralTier : uint8 {
	Low,
	Medium,
	High,
	EYMineralTier_MAX,
};

// Enum Prospect.EYOnboardingQuestType
enum class EYOnboardingQuestType : uint8 {
	None,
	TalkToNPC,
	Kill,
	GoTo,
	Buy,
	Craft,
	Scrap,
	EYOnboardingQuestType_MAX,
};

// Enum Prospect.EYUnlockedTypes
enum class EYUnlockedTypes : uint8 {
	None,
	Attachment,
	Upgrade,
	MAX,
};

// Enum Prospect.EYOverrideShowWeapon
enum class EYOverrideShowWeapon : uint8 {
	DontChangeDefaultWeaponSetting,
	OverrideWithShowWeapon,
	OverrideWithHideWeapon,
	EYOverrideShowWeapon_MAX,
};

// Enum Prospect.EYNPCType
enum class EYNPCType : uint8 {
	Environment,
	Loadout,
	Shop,
	Appearence,
	FortunaPass,
	Play,
	ICA,
	Korolev,
	Osiris,
	EYNPCType_MAX,
};

// Enum Prospect.EYBuffTypes
enum class EYBuffTypes : uint8 {
	NONE,
	CREDIT,
	XP,
	DROPS,
	MAX,
};

// Enum Prospect.EYDebugServerRetrievalType
enum class EYDebugServerRetrievalType : uint8 {
	None,
	Initialization,
	EYDebugServerRetrievalType_MAX,
};

// Enum Prospect.EYDebugEventType
enum class EYDebugEventType : uint8 {
	AudioMixModifiers,
	Announcements,
	InputMode,
	PlayerInitialization,
	EYDebugEventType_MAX,
};

// Enum Prospect.EYPlayerInitializationType
enum class EYPlayerInitializationType : uint8 {
	None,
	InventoryData,
	PlayerActorsInitialized,
	CharacterCustomizationInitialized,
	GlobalVanityLoaded,
	Connected,
	ServerIntialized,
	LevelsLoaded,
	EYPlayerInitializationType_MAX,
};

// Enum Prospect.EYUICursorVisibility
enum class EYUICursorVisibility : uint8 {
	NotVisible,
	Visible,
	EYUICursorVisibility_MAX,
};

// Enum Prospect.EYUIOptionExclusiveOption
enum class EYUIOptionExclusiveOption : uint8 {
	NotExclusive,
	Exclusive,
	EYUIOptionExclusiveOption_MAX,
};

// Enum Prospect.EYPodSpawningTypeContext
enum class EYPodSpawningTypeContext : uint8 {
	NoneAssigned,
	Customization,
	Lobby,
	Intro,
	InGame,
	EYPodSpawningTypeContext_MAX,
};

// Enum Prospect.EYMatchInstanceType
enum class EYMatchInstanceType : uint8 {
	None,
	Room,
	Station,
	EYMatchInstanceType_MAX,
};

// Enum Prospect.EYProspectorLevelRewardType
enum class EYProspectorLevelRewardType : uint8 {
	None,
	Border,
	Icon,
	BorderAndIcon,
	EYProspectorLevelRewardType_MAX,
};

// Enum Prospect.EYClassRepNodeMapping
enum class EYClassRepNodeMapping : uint8 {
	Undefined,
	NotRouted,
	RelevantAllConnections,
	RelevantOwnerConnection,
	RelevantTeamConnection,
	SpatializedOwnerConnection,
	PlayerCharacter,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dormancy,
	EYClassRepNodeMapping_MAX,
};

// Enum Prospect.EYResourceAtomicState
enum class EYResourceAtomicState : uint8 {
	None,
	Pending,
	Completed,
	EYResourceAtomicState_MAX,
};

// Enum Prospect.EYRetentionBonusEntryType
enum class EYRetentionBonusEntryType : uint8 {
	None,
	Item,
	Archetype,
	Virtual,
	EYRetentionBonusEntryType_MAX,
};

// Enum Prospect.EYRewardType
enum class EYRewardType : uint8 {
	None,
	Currency,
	Material,
	Reputation,
	SeasonXP,
	ProspectorLevel,
	Ammo,
	Weapon,
	Consumable,
	Armor,
	Bag,
	MAX,
};

// Enum Prospect.EYSceneState
enum class EYSceneState : uint8 {
	None,
	Normal,
	Detail,
	EYSceneState_MAX,
};

// Enum Prospect.EYActionMuteHistoryResult
enum class EYActionMuteHistoryResult : uint8 {
	Ok,
	Mute,
	SpecificUserMute,
	EYActionMuteHistoryResult_MAX,
};

// Enum Prospect.EYPendingResolveType
enum class EYPendingResolveType : uint8 {
	None,
	Pending,
	Resolved,
	EYPendingResolveType_MAX,
};

// Enum Prospect.EYSocialUICategory
enum class EYSocialUICategory : uint8 {
	FriendInvites,
	SquadInvites,
	Online,
	Offline,
	Blocked,
	SearchResults,
	EYSocialUICategory_MAX,
};

// Enum Prospect.EYUserInviteStatus
enum class EYUserInviteStatus : uint8 {
	Unknown,
	Friends,
	PendingInbound,
	PendingOutbound,
	Blocked,
	EYUserInviteStatus_MAX,
};

// Enum Prospect.EYSortingRequestType
enum class EYSortingRequestType : uint8 {
	None,
	Owned,
	FactionReputation,
	EYSortingRequestType_MAX,
};

// Enum Prospect.EYSplineMovementInitBPType
enum class EYSplineMovementInitBPType : uint8 {
	NONE,
	SplineComponentSet,
	MovementActorSet,
	MAX,
};

// Enum Prospect.EYStatOperator
enum class EYStatOperator : uint8 {
	NONE,
	ADD,
	SUBTRACT,
	MULTIPLY,
	DIVIDE,
	LOWEST,
	HIGHEST,
	MAX,
};

// Enum Prospect.EYTeam
enum class EYTeam : uint8 {
	Compilexfix,
	Player,
	AI,
	PlayerAI,
	NoTeamId,
	EYTeam_MAX,
};

// Enum Prospect.EYTechtreeCategoryType
enum class EYTechtreeCategoryType : uint8 {
	None,
	Korolev,
	Osiris,
	ICA,
	Crafting,
	Mining,
	Inventory,
	Generators,
	Workbench,
	MAX,
};

// Enum Prospect.EYTechTreeNodePerkType
enum class EYTechTreeNodePerkType : uint8 {
	None,
	IncreaseStashSize,
	IncreaseBagSize,
	PassiveKMarkGenHour,
	PassiveAurumGenDay,
	IncreasePassiveKMarkGenCap,
	IncreasePassiveAurumGenCap,
	DailyCrate,
	ReduceCraftingTimePerc,
	MAX,
};

// Enum Prospect.EYTransitionRequest
enum class EYTransitionRequest : uint8 {
	None,
	Reset,
	FindCamera,
	ExplicitViewTarget,
	EYTransitionRequest_MAX,
};

// Enum Prospect.EYDebugAutoEquipSlots
enum class EYDebugAutoEquipSlots : uint8 {
	Kit,
	Weapon,
	AbilityOne,
	AbilityTwo,
	EYDebugAutoEquipSlots_MAX,
};

// Enum Prospect.EYSensitivityMode
enum class EYSensitivityMode : uint8 {
	Regular,
	AimingDownSights,
	Scoped,
	PerScope,
	EYSensitivityMode_MAX,
};

// Enum Prospect.EYWeaponVanityItemDisplayType
enum class EYWeaponVanityItemDisplayType : uint8 {
	Invalid,
	CanBeApplied,
	UsedOnSpecificItem,
	IsLocked,
	EYWeaponVanityItemDisplayType_MAX,
};

// Enum Prospect.EYVehicleSoundType
enum class EYVehicleSoundType : uint8 {
	Movement,
	Boost,
	Idle,
	EYVehicleSoundType_MAX,
};

// Enum Prospect.EYVirtualCursorState
enum class EYVirtualCursorState : uint8 {
	None,
	Idle,
	Hovering,
	EYVirtualCursorState_MAX,
};

// Enum Prospect.EYVivoxChannelState
enum class EYVivoxChannelState : uint8 {
	None,
	Disconnected,
	PendingVivoxDisconnection,
	Logout,
	PendingBackendTokenJoin,
	PendingVivoxExecutionState,
	PendingVivoxChannelJoin,
	Connected,
	EYVivoxChannelState_MAX,
};

// Enum Prospect.EYVolumeBusType
enum class EYVolumeBusType : uint8 {
	Master,
	Music,
	Sfx,
	VO,
	UI,
	HitMarker,
	MAX,
};

// Enum Prospect.EYVoPlayerBodyType
enum class EYVoPlayerBodyType : uint8 {
	Default,
	Male1,
	Female1,
	EYVoPlayerBodyType_MAX,
};

// Enum Prospect.EYScopeType
enum class EYScopeType : uint8 {
	None,
	ADS,
	OnePointFiveTimes,
	TwoTimes,
	FourTimes,
	EightTimes,
	SixteenTimes,
	MAX,
};

// Enum Prospect.EYWeaponAnimationPlayState
enum class EYWeaponAnimationPlayState : uint8 {
	None,
	FirstPerson,
	ThirdPerson,
	Weapon,
	WeaponThirdPerson,
	EYWeaponAnimationPlayState_MAX,
};

// Enum Prospect.EYEquipedAnimationWeaponType
enum class EYEquipedAnimationWeaponType : uint8 {
	Invalid,
	Pistol,
	SMG,
	Rifle,
	Scanner,
	Sniper,
	Shotgun,
	HuntingRifle,
	CustonNotUsedWeapon_03,
	CustonNotUsedWeapon_04,
	CustonNotUsedWeapon_05,
	CustonNotUsedWeapon_06,
	CustonNotUsedWeapon_07,
	CustonNotUsedWeapon_08,
	CustonNotUsedWeapon_09,
	CustonNotUsedWeapon_11,
	CustonNotUsedWeapon_12,
	CustonNotUsedWeapon_13,
	CustonNotUsedWeapon_14,
	CustonNotUsedWeapon_15,
	CustonNotUsedWeapon_16,
	CustonNotUsedWeapon_17,
	CustonNotUsedWeapon_18,
	CustonNotUsedWeapon_19,
	CustonNotUsedWeapon_20,
	CustonNotUsedWeapon_21,
	EYEquipedAnimationWeaponType_MAX,
};

// Enum Prospect.EYWeaponPlayState
enum class EYWeaponPlayState : uint8 {
	Invalid,
	Equip,
	Fire,
	FireMiss,
	Unequip,
	Reload,
	StopFire,
	Spinup,
	Use,
	FireTargeting,
	StopFireTargeting,
	ReloadFirstAmmo,
	ReloadLoop,
	ReloadOut,
	ReloadOutEmpty,
	MeleeLight,
	MeleeLightImpact,
	MeleeHeavy,
	MeleeHeavyImpact,
	MAX,
};

// Enum Prospect.EYTraceShapeType
enum class EYTraceShapeType : uint8 {
	LineTrace,
	Capsule,
	EYTraceShapeType_MAX,
};

// Enum Prospect.EYLimitType
enum class EYLimitType : uint8 {
	Min,
	Max,
};

// Enum Prospect.EYVFX_WeaponType
enum class EYVFX_WeaponType : uint8 {
	None,
	Pistol,
	SMG,
	LMG,
	Assault,
	SemiAuto,
	Shotgun,
	EYVFX_MAX,
};

// Enum Prospect.EYTransportHitType
enum class EYTransportHitType : uint8 {
	All,
	Enemy,
	Friendly,
	None,
	EYTransportHitType_MAX,
};

// Enum Prospect.EYWeaponTransportHitResultType
enum class EYWeaponTransportHitResultType : uint8 {
	NormalBehavior,
	NoImpactRetrace,
	NotifyTransportComponentIgnoreImpact,
	ImpactRetrace,
	EYWeaponTransportHitResultType_MAX,
};

// Enum Prospect.EYWheelInputResponse
enum class EYWheelInputResponse : uint8 {
	Denied,
	Accepted,
	TabAction,
	EYWheelInputResponse_MAX,
};

// Enum Prospect.EYRequeueingState
enum class EYRequeueingState : uint8 {
	NoRequeuing,
	WaitingForPremadeTeammates,
	NotMatchmaking,
	Matchmaking,
	PlayerMatched,
	EYRequeueingState_MAX,
};

// Enum Prospect.EReOrderButtonType
enum class EReOrderButtonType : uint8 {
	Weapon,
	Ability,
	EReOrderButtonType_MAX,
};

// Enum Prospect.EYItemStatsState
enum class EYItemStatsState : uint8 {
	Invalid,
	Basic,
	Detailed,
	EYItemStatsState_MAX,
};

// Enum Prospect.EYItemDetailWidgets
enum class EYItemDetailWidgets : uint8 {
	None,
	InventoryItem,
	BlueprintItem,
	EYItemDetailWidgets_MAX,
};

// Enum Prospect.EYMapLayerIndex
enum class EYMapLayerIndex : uint8 {
	BACKGROUND,
	ACTIVITIES,
	PLAYERS,
	SOCIALACTOR,
	MAX,
};

// Enum Prospect.EYQuickActionClick
enum class EYQuickActionClick : uint8 {
	None,
	MuteChat,
	MuteVoice,
	ReportPlayer,
	AddFriend,
	BlockPlayer,
	EYQuickActionClick_MAX,
};

// Enum Prospect.EYVanityViewDialogOptions
enum class EYVanityViewDialogOptions : uint8 {
	None,
	ConfirmChanges,
	SceneChange,
	EYVanityViewDialogOptions_MAX,
};

// Enum Prospect.EYVanitySelectionState
enum class EYVanitySelectionState : uint8 {
	None,
	Categories,
	Items,
	EYVanitySelectionState_MAX,
};

// Enum Prospect.EYVisibilityBranch
enum class EYVisibilityBranch : uint8 {
	Visible,
	NotVisible,
	EYVisibilityBranch_MAX,
};

// Enum Prospect.EYTimerDisplayType
enum class EYTimerDisplayType : uint8 {
	Custom,
	HoursMinutesSeconds,
	DaysHoursMinutes,
	DaysHoursMinutesSeconds,
	EYTimerDisplayType_MAX,
};

// ScriptStruct Prospect.YDataTableRowBase
// Size: 0x10 (Inherited: 0x08)
struct FYDataTableRowBase : FTableRowBase {
	struct FName m_rowName; // 0x08(0x08)
};

// ScriptStruct Prospect.YHealthDataTableRow
// Size: 0x28 (Inherited: 0x10)
struct FYHealthDataTableRow : FYDataTableRowBase {
	float m_maxHealth; // 0x10(0x04)
	float m_regenerationRate; // 0x14(0x04)
	float m_regenerationDelay; // 0x18(0x04)
	float m_degenerationRate; // 0x1c(0x04)
	float m_damageThresholdToRestartHealthRegenerationDelay; // 0x20(0x04)
	int32_t m_segments; // 0x24(0x04)
};

// ScriptStruct Prospect.YInventoryItem
// Size: 0x98 (Inherited: 0x00)
struct FYInventoryItem {
	struct FString m_customItemID; // 0x00(0x10)
	struct FDataTableRowHandle m_item; // 0x10(0x10)
	enum class EYItemRarityType m_rarityType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t m_amount; // 0x24(0x04)
	int32_t m_durability; // 0x28(0x04)
	float m_weight; // 0x2c(0x04)
	struct FYStoredModData m_mods; // 0x30(0x10)
	struct TArray<struct FDataTableRowHandle> m_vanityEntries; // 0x40(0x10)
	struct FYProspectorBadgeData m_prospectorBadgeData; // 0x50(0x38)
	struct FDataTableRowHandle m_insurance; // 0x88(0x10)
};

// ScriptStruct Prospect.YProspectorBadgeData
// Size: 0x38 (Inherited: 0x00)
struct FYProspectorBadgeData {
	struct FString ownerID; // 0x00(0x10)
	struct FString killedBy; // 0x10(0x10)
	struct FString killedHow; // 0x20(0x10)
	int32_t rank; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YStoredModData
// Size: 0x10 (Inherited: 0x00)
struct FYStoredModData {
	struct TArray<struct FYModEntry> m_allMods; // 0x00(0x10)
};

// ScriptStruct Prospect.YModEntry
// Size: 0x10 (Inherited: 0x00)
struct FYModEntry {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
};

// ScriptStruct Prospect.YAbilityStateInfo
// Size: 0x20 (Inherited: 0x00)
struct FYAbilityStateInfo {
	struct FDataTableRowHandle m_abilityRowHandle; // 0x00(0x10)
	enum class EYAbilityState m_state; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UYCharacterAbilityComponent* m_abilityComponent; // 0x18(0x08)
};

// ScriptStruct Prospect.YMovementModeDataChanged
// Size: 0x08 (Inherited: 0x00)
struct FYMovementModeDataChanged {
	enum class EMovementMode m_newMovementMode; // 0x00(0x01)
	enum class EMovementMode m_oldMovementMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float m_timeSinceMovementModeChanged; // 0x04(0x04)
};

// ScriptStruct Prospect.YLeaveGameEvent
// Size: 0x08 (Inherited: 0x00)
struct FYLeaveGameEvent {
	struct FName m_reason; // 0x00(0x08)
};

// ScriptStruct Prospect.YPlayerInventory
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerInventory {
	int32_t m_permutationIndex; // 0x00(0x04)
	int32_t m_inventoryComponentId; // 0x04(0x04)
	struct TArray<struct FYInventoryItem> m_replicatedItems; // 0x08(0x10)
};

// ScriptStruct Prospect.YOutpostFriendInfo
// Size: 0x80 (Inherited: 0x00)
struct FYOutpostFriendInfo {
	struct FString m_userId; // 0x00(0x10)
	struct FYPlatformEntry m_platformEntry; // 0x10(0x18)
	struct FString m_playerName; // 0x28(0x10)
	enum class EYFriendOnlineStatus m_onlineStatus; // 0x38(0x01)
	enum class EYUserState m_memberState; // 0x39(0x01)
	enum class EYFriendState m_friendState; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	int32_t m_squadSize; // 0x3c(0x04)
	bool m_isInLocalPlayerSquad; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FDataTableRowHandle m_socialProfileRow; // 0x48(0x10)
	struct FYUserMatchmakingSettings m_matchmakingSettings; // 0x58(0x28)
};

// ScriptStruct Prospect.YAISpawnRequest
// Size: 0x68 (Inherited: 0x00)
struct FYAISpawnRequest {
	enum class EYSpawnRequestStatus m_status; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AYAICharacter* m_character; // 0x08(0x08)
	struct AYAISquad* m_squad; // 0x10(0x08)
	struct FVector m_location; // 0x18(0x0c)
	struct FRotator m_rotation; // 0x24(0x0c)
	struct FYSquadAIType m_aiType; // 0x30(0x38)
};

// ScriptStruct Prospect.YSquadAIType
// Size: 0x38 (Inherited: 0x00)
struct FYSquadAIType {
	struct FYAICharacterDefinition m_aiCharacter; // 0x00(0x18)
	struct FGameplayTagContainer m_gameplayTags; // 0x18(0x20)
};

// ScriptStruct Prospect.YAICharacterDefinition
// Size: 0x18 (Inherited: 0x00)
struct FYAICharacterDefinition {
	enum class EYEnemyType m_type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FDataTableRowHandle> m_perks; // 0x08(0x10)
};

// ScriptStruct Prospect.YDealtDamageData
// Size: 0x100 (Inherited: 0x00)
struct FYDealtDamageData {
	struct FVector m_fromDirection; // 0x00(0x0c)
	struct FVector m_hitLocation; // 0x0c(0x0c)
	struct FYDamageOverTimeData m_dotData; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x28(0x28)
	struct UYDamageComponent* m_componentToDamage; // 0x50(0x08)
	struct AActor* m_originalDamageCauser; // 0x58(0x08)
	struct AActor* m_damageCauser; // 0x60(0x08)
	struct AActor* m_damageInstigator; // 0x68(0x08)
	struct FYDamageHelper m_damage; // 0x70(0x0c)
	float m_shieldDamage; // 0x7c(0x04)
	float m_healthDamage; // 0x80(0x04)
	float m_vehicleDamage; // 0x84(0x04)
	float m_overkillDamage; // 0x88(0x04)
	float m_stabilityDamage; // 0x8c(0x04)
	float m_stabilityDamageForDeathRagdoll; // 0x90(0x04)
	float m_impulseDamage; // 0x94(0x04)
	enum class EYDamageApplication m_damageApplication; // 0x98(0x01)
	bool m_isFriendlyFireAllowed; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FGameplayTagContainer m_objectTypesAllowedToDamage; // 0xa0(0x20)
	bool m_preventBeingLethalAndPreventEnteringDBNO; // 0xc0(0x01)
	bool m_hitDBNOPlayer; // 0xc1(0x01)
	bool m_isDamageDot; // 0xc2(0x01)
	bool m_isWeakspotDamage; // 0xc3(0x01)
	float m_damageAreaMultiplier; // 0xc4(0x04)
	float m_penetration; // 0xc8(0x04)
	bool m_isFromRadialDamage; // 0xcc(0x01)
	bool m_shieldReducedToZero; // 0xcd(0x01)
	bool m_diedOfThisDamage; // 0xce(0x01)
	bool m_teleportedBecauseOfThisDamage; // 0xcf(0x01)
	bool m_causedDBNO; // 0xd0(0x01)
	bool m_allowDBNO; // 0xd1(0x01)
	bool m_produceHitFeedback; // 0xd2(0x01)
	bool m_isHealDamage; // 0xd3(0x01)
	bool m_canDamageSelf; // 0xd4(0x01)
	bool m_shouldInterrupInteraction; // 0xd5(0x01)
	bool m_childActorInitiated; // 0xd6(0x01)
	bool m_affectEnemyHitreaction; // 0xd7(0x01)
	bool m_ignoreShield; // 0xd8(0x01)
	bool m_isPropagatedData; // 0xd9(0x01)
	bool m_excludeFromBIData; // 0xda(0x01)
	enum class ENetRole m_roleToReplicate; // 0xdb(0x01)
	struct FGenericTeamId m_damageTeamID; // 0xdc(0x01)
	char m_boneIndexHit; // 0xdd(0x01)
	char pad_DE[0x2]; // 0xde(0x02)
	struct FName m_boneNameHit; // 0xe0(0x08)
	enum class EPhysicalSurface m_surfaceTypeHit; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FGuid m_shotGuid; // 0xec(0x10)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct Prospect.YDamageHelper
// Size: 0x0c (Inherited: 0x00)
struct FYDamageHelper {
	bool m_isLoggingEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_baseDamage; // 0x04(0x04)
	float m_multiplierRawAccumulated; // 0x08(0x04)
};

// ScriptStruct Prospect.YDamageOriginInfo
// Size: 0x28 (Inherited: 0x00)
struct FYDamageOriginInfo {
	struct FDataTableRowHandle m_damageOriginTableRowHandle; // 0x00(0x10)
	struct FDataTableRowHandle m_damageInfoApplyRowHandle; // 0x10(0x10)
	enum class EYGameplayContextType m_damageContext; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YDamageOverTimeData
// Size: 0x0c (Inherited: 0x00)
struct FYDamageOverTimeData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Prospect.YAIStabilityDefinition
// Size: 0x30 (Inherited: 0x00)
struct FYAIStabilityDefinition {
	struct FName m_name; // 0x00(0x08)
	float m_cooldown; // 0x08(0x04)
	float m_stabilityThreshold; // 0x0c(0x04)
	struct UCurveFloat* m_stabilityMultiplierAfterTrigger; // 0x10(0x08)
	float m_stabilityDecreasePerSecond; // 0x18(0x04)
	bool m_isFlinchAnimation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct FDataTableRowHandle> m_perksToApply; // 0x20(0x10)
};

// ScriptStruct Prospect.YStabilityData
// Size: 0x10 (Inherited: 0x00)
struct FYStabilityData {
	float m_currentStabilityValue; // 0x00(0x04)
	float m_lastTimeTriggered; // 0x04(0x04)
	float m_lastTimeValueIncreased; // 0x08(0x04)
	float m_lastTimeValueDecreased; // 0x0c(0x04)
};

// ScriptStruct Prospect.YVOLine
// Size: 0x68 (Inherited: 0x00)
struct FYVOLine {
	struct FText m_subtitle; // 0x00(0x18)
	struct TSoftObjectPtr<struct USoundWave> m_sound; // 0x18(0x28)
	struct TSoftObjectPtr<struct USoundCue> m_soundCue; // 0x40(0x28)
};

// ScriptStruct Prospect.YAnnouncementPlaybackOptions
// Size: 0x30 (Inherited: 0x00)
struct FYAnnouncementPlaybackOptions {
	enum class EYAnnouncementType m_announcementType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector m_locationInWorld; // 0x04(0x0c)
	struct AYPlayerState* m_speakerPlayerState; // 0x10(0x08)
	bool m_isSpokenViaRadio; // 0x18(0x01)
	bool m_useSoundAttenuation; // 0x19(0x01)
	bool m_resolveVORowByContext; // 0x1a(0x01)
	bool m_shouldHideAnnouncementWidget; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDataTableRowHandle m_contextRowHandle; // 0x20(0x10)
};

// ScriptStruct Prospect.YAudioDataTableRow
// Size: 0x18 (Inherited: 0x10)
struct FYAudioDataTableRow : FYDataTableRowBase {
	struct USoundBase* m_prototypeSound; // 0x10(0x08)
};

// ScriptStruct Prospect.YVOAudioDatatableRow
// Size: 0x80 (Inherited: 0x18)
struct FYVOAudioDatatableRow : FYAudioDataTableRow {
	struct FString m_uniqueName; // 0x18(0x10)
	struct FDataTableRowHandle m_category; // 0x28(0x10)
	enum class EYVoRowType m_rowType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString m_notes; // 0x40(0x10)
	bool m_requiresSubtitles; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FYVOVariationsContainer m_voVariationContainer; // 0x58(0x10)
	struct FDataTableRowHandle m_speaker; // 0x68(0x10)
	float m_cooldownDuration; // 0x78(0x04)
	bool m_allowedToQueueSound; // 0x7c(0x01)
	bool m_debugDisable; // 0x7d(0x01)
	bool m_isDeprecatedAndShouldBeRemoved; // 0x7e(0x01)
	char pad_7F[0x1]; // 0x7f(0x01)
};

// ScriptStruct Prospect.YVOVariationsContainer
// Size: 0x10 (Inherited: 0x00)
struct FYVOVariationsContainer {
	struct TArray<struct FYVOLine> m_voVariations; // 0x00(0x10)
};

// ScriptStruct Prospect.YAnnouncementPlayEntryData
// Size: 0x48 (Inherited: 0x00)
struct FYAnnouncementPlayEntryData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	float m_timestampAnnounceRequested; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYAnnouncementPlaybackOptions m_playbackOptions; // 0x18(0x30)
};

// ScriptStruct Prospect.YActiveCustomizationData
// Size: 0x20 (Inherited: 0x00)
struct FYActiveCustomizationData {
	struct FName m_archetypeID; // 0x00(0x08)
	int32_t m_slotIndex; // 0x08(0x04)
	enum class EYCustomizationBodyType m_bodyType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FYCharacterCustomizationBodyPart> m_bodyParts; // 0x10(0x10)
};

// ScriptStruct Prospect.YCharacterCustomizationBodyPart
// Size: 0x18 (Inherited: 0x00)
struct FYCharacterCustomizationBodyPart {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_materialVariation; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YShowBodyTypeCategoryUpdateData
// Size: 0x01 (Inherited: 0x00)
struct FYShowBodyTypeCategoryUpdateData {
	enum class EYCustomizationCategory m_requestedCategory; // 0x00(0x01)
};

// ScriptStruct Prospect.YItemDataTableRowBase
// Size: 0x310 (Inherited: 0x10)
struct FYItemDataTableRowBase : FYDataTableRowBase {
	struct TMap<enum class EYItemRarityType, struct FYLevelItemEntry> m_rarityTypes; // 0x10(0x50)
	char pad_60[0x1]; // 0x60(0x01)
	enum class EYItemRarityType m_rarity; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct AYPickupActor* m_pickupClassOverride; // 0x68(0x08)
	struct FDataTableRowHandle m_scannableRowHandle; // 0x70(0x10)
	struct TSoftObjectPtr<struct UTexture2D> m_largeIcon; // 0x80(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_hudIcon; // 0xa8(0x28)
	struct FText m_name; // 0xd0(0x18)
	int32_t m_maxAmountPerStack; // 0xe8(0x04)
	int32_t m_startAmount; // 0xec(0x04)
	int32_t m_durabilityMax; // 0xf0(0x04)
	float m_durabilityBrokenPriceModifier; // 0xf4(0x04)
	int32_t m_repairCostMaxDurability; // 0xf8(0x04)
	int32_t m_repairCostBase; // 0xfc(0x04)
	int32_t m_repairCostModifierBroken; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FYMetaItemUIData m_metaUIItem; // 0x108(0x48)
	enum class EYMiscellaneousType misc_type; // 0x150(0x01)
	enum class EYDeviceClass device_class; // 0x151(0x01)
	enum class EYDeviceCategory device_category; // 0x152(0x01)
	enum class EYAmmoType ammo_type; // 0x153(0x01)
	bool starter; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<enum class EYModificationSlotType> modification_slots; // 0x158(0x10)
	enum class EYVanityType vanity_type; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct FDataTableRowHandle> compatible_item_IDs; // 0x170(0x10)
	struct TArray<enum class EYItemType> compatible_item_type; // 0x180(0x10)
	struct TArray<enum class EYDeviceClass> compatible_device_class; // 0x190(0x10)
	struct TArray<enum class EYDeviceCategory> compatible_device_category; // 0x1a0(0x10)
	struct TArray<enum class EYAmmoType> compatible_ammo_type; // 0x1b0(0x10)
	float itemWeight; // 0x1c0(0x04)
	bool m_isDefaultEntry; // 0x1c4(0x01)
	enum class EYDefaultItemSlot Slot; // 0x1c5(0x01)
	char pad_1C6[0x2]; // 0x1c6(0x02)
	struct FDataTableRowHandle default_vanity; // 0x1c8(0x10)
	struct FDataTableRowHandle default_secondary_vanity; // 0x1d8(0x10)
	bool m_shouldOverrideInteractionTime; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float m_overrideInteractionTime; // 0x1ec(0x04)
	struct UYWidget_PickupPlate_Base* m_pickupWidgetOverride; // 0x1f0(0x08)
	struct TSoftObjectPtr<struct UTexture2D> m_blueprintIcon; // 0x1f8(0x28)
	struct TArray<struct FYItemCraftingDataPerShop> m_itemShopsCraftingData; // 0x220(0x10)
	int32_t m_amountPerPurchase; // 0x230(0x04)
	int32_t m_scrappingFactionProgressionIncrement; // 0x234(0x04)
	int32_t m_scrappingReturnDefault; // 0x238(0x04)
	bool m_isBlueprint; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct TMap<enum class EYItemRarityType, int32_t> m_overrideScrappingReturnsPerRarity; // 0x240(0x50)
	struct TMap<enum class EYItemRarityType, int32_t> m_overrideScrappingReputationPerRarity; // 0x290(0x50)
	struct FYProgressionUnlockCollectionData m_unlockData; // 0x2e0(0x10)
	float m_collisionSpherePickUpOverride; // 0x2f0(0x04)
	bool m_useCustomMeshRelativeTranslationOverride; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct FVector m_meshRelativeTranslation; // 0x2f8(0x0c)
	struct FRotator m_meshRelativeRotation; // 0x304(0x0c)
};

// ScriptStruct Prospect.YProgressionUnlockCollectionData
// Size: 0x10 (Inherited: 0x00)
struct FYProgressionUnlockCollectionData {
	struct TArray<struct FYProgressionUnlockData> m_factionUnlockData; // 0x00(0x10)
};

// ScriptStruct Prospect.YProgressionUnlockData
// Size: 0x18 (Inherited: 0x00)
struct FYProgressionUnlockData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	enum class EYItemRarityType m_rarity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t m_level; // 0x14(0x04)
};

// ScriptStruct Prospect.YItemCraftingDataPerShop
// Size: 0x60 (Inherited: 0x00)
struct FYItemCraftingDataPerShop {
	struct FDataTableRowHandle m_shop; // 0x00(0x10)
	struct TMap<enum class EYItemRarityType, struct FYItemRecipe> m_craftingPricesPerRarity; // 0x10(0x50)
};

// ScriptStruct Prospect.YItemRecipe
// Size: 0x30 (Inherited: 0x00)
struct FYItemRecipe {
	struct TArray<struct FYItemRecipeIngredient> m_itemRecipeIngredients; // 0x00(0x10)
	int32_t m_upgradeTimeMinutes; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYCostEntryRow m_skipCraftingMaxCost; // 0x18(0x18)
};

// ScriptStruct Prospect.YCostEntryRow
// Size: 0x18 (Inherited: 0x00)
struct FYCostEntryRow {
	struct FDataTableRowHandle m_costType; // 0x00(0x10)
	int32_t m_costAmount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YItemRecipeIngredient
// Size: 0x18 (Inherited: 0x00)
struct FYItemRecipeIngredient {
	struct FDataTableRowHandle m_currency; // 0x00(0x10)
	int32_t m_amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YMetaItemUIData
// Size: 0x48 (Inherited: 0x00)
struct FYMetaItemUIData {
	struct FText display_name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText flavor_text; // 0x30(0x18)
};

// ScriptStruct Prospect.YLevelItemEntry
// Size: 0x38 (Inherited: 0x00)
struct FYLevelItemEntry {
	int32_t m_modSlotsUnlocked; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FYItemRecipe m_recipeToUpgradeItemToThisRarity; // 0x08(0x30)
};

// ScriptStruct Prospect.YVanityItemRowBase
// Size: 0x378 (Inherited: 0x310)
struct FYVanityItemRowBase : FYItemDataTableRowBase {
	struct TSoftObjectPtr<struct UMaterialInterface> m_parameterOverrideMaterial; // 0x310(0x28)
	struct TArray<struct FYVanityMaterialEntry> m_materials; // 0x338(0x10)
	enum class EYVanityType m_vanityType; // 0x348(0x01)
	bool m_requireOwnedItemStatus; // 0x349(0x01)
	bool m_isReadyToBeReleased; // 0x34a(0x01)
	char pad_34B[0x5]; // 0x34b(0x05)
	struct TArray<struct FDataTableRowHandle> m_exclusiveItems; // 0x350(0x10)
	struct TArray<struct FDataTableRowHandle> m_excludedItems; // 0x360(0x10)
	int32_t m_sortPriority; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
};

// ScriptStruct Prospect.YVanityMaterialEntry
// Size: 0x30 (Inherited: 0x00)
struct FYVanityMaterialEntry {
	struct TSoftObjectPtr<struct UMaterialInterface> m_material; // 0x00(0x28)
	int32_t m_index; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationRowBase
// Size: 0x400 (Inherited: 0x378)
struct FYCharacterCustomizationRowBase : FYVanityItemRowBase {
	struct TSoftObjectPtr<struct USkeletalMesh> m_skelMesh1stP; // 0x378(0x28)
	struct UAnimMontage* m_animationToPlayWhenActivated; // 0x3a0(0x08)
	struct UAnimSequence* m_animationSequence; // 0x3a8(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> m_skelMesh3rdP; // 0x3b0(0x28)
	struct TArray<struct FYCharacterCustomizationPieceCollection> m_materialCollections; // 0x3d8(0x10)
	struct FName m_socketOverrideAttachName; // 0x3e8(0x08)
	int32_t m_materialIndexOverride; // 0x3f0(0x04)
	enum class EYCustomizationBodyType m_bodyType; // 0x3f4(0x01)
	enum class EYCustomizationCategory m_customizationCategoryType; // 0x3f5(0x01)
	bool m_shouldMerge; // 0x3f6(0x01)
	bool m_shouldShowIngame; // 0x3f7(0x01)
	bool m_ignoreForAutomationTests; // 0x3f8(0x01)
	bool m_applyRefPoseOverride; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float m_duration; // 0x3fc(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationPieceCollection
// Size: 0x50 (Inherited: 0x00)
struct FYCharacterCustomizationPieceCollection {
	enum class EYCharacterCustomizationColorType m_colorType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<struct UTexture2D> m_icon; // 0x08(0x28)
	struct FDataTableRowHandle m_materialDataTableReference; // 0x30(0x10)
	struct TArray<struct FYCharacterCustomizationMaterialPieceEntry> m_materials; // 0x40(0x10)
};

// ScriptStruct Prospect.YCharacterCustomizationMaterialPieceEntry
// Size: 0x30 (Inherited: 0x00)
struct FYCharacterCustomizationMaterialPieceEntry {
	struct TSoftObjectPtr<struct UMaterialInterface> m_material; // 0x00(0x28)
	int32_t m_index; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationActorActiveVisualizationEntry
// Size: 0x70 (Inherited: 0x00)
struct FYCharacterCustomizationActorActiveVisualizationEntry {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_materialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct USkeletalMeshComponent*> m_activeSkeletalMeshComponents; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform m_categoryRelativeTransform; // 0x30(0x30)
	char pad_60[0x1]; // 0x60(0x01)
	enum class EYCustomizationCategory m_category; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct Prospect.YActiveContractUIData
// Size: 0x18 (Inherited: 0x00)
struct FYActiveContractUIData {
	struct FString contractId; // 0x00(0x10)
	enum class EYContractStatus contractStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YContractsProgress
// Size: 0x10 (Inherited: 0x00)
struct FYContractsProgress {
	struct TArray<struct FYContractProgress> activeContractsProgressClamp; // 0x00(0x10)
};

// ScriptStruct Prospect.YContractProgress
// Size: 0x20 (Inherited: 0x00)
struct FYContractProgress {
	struct FString contractId; // 0x00(0x10)
	struct TArray<int32_t> objectivesProgress; // 0x10(0x10)
};

// ScriptStruct Prospect.YHoursAndMinutes
// Size: 0x08 (Inherited: 0x00)
struct FYHoursAndMinutes {
	int32_t hours24; // 0x00(0x04)
	int32_t Minutes; // 0x04(0x04)
};

// ScriptStruct Prospect.YActiveContractsUIData
// Size: 0x10 (Inherited: 0x00)
struct FYActiveContractsUIData {
	struct TArray<struct FYActiveContractUIData> activeContracts; // 0x00(0x10)
};

// ScriptStruct Prospect.YSurveillanceNode
// Size: 0x18 (Inherited: 0x00)
struct FYSurveillanceNode {
	struct AActor* m_actor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Prospect.YItemContainerData
// Size: 0x18 (Inherited: 0x00)
struct FYItemContainerData {
	struct FString m_itemId; // 0x00(0x10)
	int32_t m_inventoryId; // 0x10(0x04)
	enum class EYContainerType m_containerType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Prospect.YShopItem
// Size: 0x28 (Inherited: 0x00)
struct FYShopItem {
	struct FDataTableRowHandle m_blueprintHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString m_shopItemBelongsTo; // 0x18(0x10)
};

// ScriptStruct Prospect.YDragStateData
// Size: 0x10 (Inherited: 0x00)
struct FYDragStateData {
	struct UDragDropOperation* m_operation; // 0x00(0x08)
	bool m_state; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Prospect.YActiveArmorData
// Size: 0x28 (Inherited: 0x00)
struct FYActiveArmorData {
	struct FString m_id; // 0x00(0x10)
	struct FDataTableRowHandle m_rowHandle; // 0x10(0x10)
	int32_t m_durability; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YPickupItem
// Size: 0xe8 (Inherited: 0x00)
struct FYPickupItem {
	struct FText m_name; // 0x00(0x18)
	int32_t m_amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FYInventoryItem m_inventoryItem; // 0x20(0x98)
	struct TArray<struct FDataTableRowHandle> m_itemUpgrades; // 0xb8(0x10)
	struct ACharacter* m_instigatedBy; // 0xc8(0x08)
	struct UObject* m_instigatorObject; // 0xd0(0x08)
	bool m_canBeSharedWithTeam; // 0xd8(0x01)
	bool m_isPickUpByPlayerDrop; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct UYWidget_PickupPlate_Base* m_pickupWidgetOverride; // 0xe0(0x08)
};

// ScriptStruct Prospect.YFallingDamageInfo
// Size: 0x2c (Inherited: 0x00)
struct FYFallingDamageInfo {
	float m_distanceFalling; // 0x00(0x04)
	float m_unmodifiedDamage; // 0x04(0x04)
	float m_damage; // 0x08(0x04)
	float m_healthBefore; // 0x0c(0x04)
	float m_healthAfter; // 0x10(0x04)
	struct FVector m_fallingStartLocation; // 0x14(0x0c)
	struct FVector m_fallingImpactLocation; // 0x20(0x0c)
};

// ScriptStruct Prospect.YLandingEventInfo
// Size: 0x08 (Inherited: 0x00)
struct FYLandingEventInfo {
	enum class EYLandingType m_landingType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_fallingDistance; // 0x04(0x04)
};

// ScriptStruct Prospect.YSocialActorPlacedData
// Size: 0x10 (Inherited: 0x00)
struct FYSocialActorPlacedData {
	struct UYPlayerSocialComponent* m_socialComponent; // 0x00(0x08)
	struct FName m_contextName; // 0x08(0x08)
};

// ScriptStruct Prospect.YTeleportData
// Size: 0x20 (Inherited: 0x00)
struct FYTeleportData {
	struct FVector m_oldLocation; // 0x00(0x0c)
	struct FVector m_newLocation; // 0x0c(0x0c)
	struct AActor* m_relevantActor; // 0x18(0x08)
};

// ScriptStruct Prospect.YPlayerSpawnLocationInfo
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerSpawnLocationInfo {
	struct FVector_NetQuantize m_location; // 0x00(0x0c)
	struct FRotator m_rotation; // 0x0c(0x0c)
	struct AActor* m_playerStart; // 0x18(0x08)
};

// ScriptStruct Prospect.YCondensedDamageData
// Size: 0x30 (Inherited: 0x00)
struct FYCondensedDamageData {
	struct FYDamageCauserInfo m_damageCauserInfo; // 0x00(0x20)
	struct TArray<struct FYDamageInfoDetail> m_details; // 0x20(0x10)
};

// ScriptStruct Prospect.YDamageInfoDetail
// Size: 0x38 (Inherited: 0x00)
struct FYDamageInfoDetail {
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x00(0x28)
	int32_t m_hitsTotal; // 0x28(0x04)
	int32_t m_hitsCritical; // 0x2c(0x04)
	float m_amountDamage; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YDamageCauserInfo
// Size: 0x20 (Inherited: 0x00)
struct FYDamageCauserInfo {
	struct FName m_damageCauserId; // 0x00(0x08)
	struct FDataTableRowHandle m_damageInfoCauserRowHandle; // 0x08(0x10)
	bool m_isPlayer; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YDamageEvent
// Size: 0x68 (Inherited: 0x00)
struct FYDamageEvent {
	int32_t m_hitsCritical; // 0x00(0x04)
	int32_t m_hitsTotal; // 0x04(0x04)
	float m_amountDamage; // 0x08(0x04)
	float m_timestamp; // 0x0c(0x04)
	float m_distance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* m_damageCauser; // 0x18(0x08)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x20(0x28)
	struct FYDamageCauserInfo m_damageCauserInfo; // 0x48(0x20)
};

// ScriptStruct Prospect.YGameplayAttributeModifier
// Size: 0x70 (Inherited: 0x10)
struct FYGameplayAttributeModifier : FYDataTableRowBase {
	enum class EYGameplayAttribute m_attribute; // 0x10(0x01)
	enum class EYGPAModifierType m_modifierType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float m_modifierValue; // 0x14(0x04)
	float m_minAttributeValue; // 0x18(0x04)
	float m_duration; // 0x1c(0x04)
	float m_lerpTime; // 0x20(0x04)
	float m_timestampActivated; // 0x24(0x04)
	float m_lerpStartModifierValue; // 0x28(0x04)
	float m_lerpEndModifierValue; // 0x2c(0x04)
	float m_runtimeAttributeValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString m_context; // 0x38(0x10)
	struct APawn* m_instigator; // 0x48(0x08)
	enum class EYGameplayContextType m_overridenContextType; // 0x50(0x01)
	enum class EYGameplayContextType m_specifiedContextType; // 0x51(0x01)
	char pad_52[0x1e]; // 0x52(0x1e)
};

// ScriptStruct Prospect.YKeybindingData
// Size: 0x90 (Inherited: 0x00)
struct FYKeybindingData {
	struct FName BindingName; // 0x00(0x08)
	struct FName OriginalBindingName; // 0x08(0x08)
	struct FText BindingText; // 0x10(0x18)
	struct FInputChord PrimaryKey; // 0x28(0x20)
	struct FInputChord SecondaryKey; // 0x48(0x20)
	struct FInputChord GamepadKey; // 0x68(0x20)
	float Scale; // 0x88(0x04)
	bool IsDefault; // 0x8c(0x01)
	bool IsAxis; // 0x8d(0x01)
	enum class EYInputBindingCategory InputBindingCategory; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
};

// ScriptStruct Prospect.YBaseAnalyticsEvent
// Size: 0xa8 (Inherited: 0x00)
struct FYBaseAnalyticsEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Event; // 0x08(0x10)
	struct FString title_id; // 0x18(0x10)
	struct FString room_id; // 0x28(0x10)
	bool is_valid; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString squad_id; // 0x40(0x10)
	struct FString Timestamp; // 0x50(0x10)
	struct FString map_name; // 0x60(0x10)
	struct FString Platform; // 0x70(0x10)
	struct FString user_id; // 0x80(0x10)
	struct FString match_phase_type; // 0x90(0x10)
	int32_t match_phase_time; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Prospect.YPlayerKilledEvent
// Size: 0x1a0 (Inherited: 0xa8)
struct FYPlayerKilledEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8(0x04)
	int32_t location_y; // 0xac(0x04)
	int32_t location_z; // 0xb0(0x04)
	int32_t location_x_killer; // 0xb4(0x04)
	int32_t location_y_killer; // 0xb8(0x04)
	int32_t location_z_killer; // 0xbc(0x04)
	int32_t enemy_damage; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString enemy_weapon; // 0xc8(0x10)
	struct FString enemy_weapon_id; // 0xd8(0x10)
	int32_t enemy_damage_last_hit; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString enemy_weapon_last_hit; // 0xf0(0x10)
	struct FString enemy_weapon_id_last_hit; // 0x100(0x10)
	int32_t time_since_match_start; // 0x110(0x04)
	int32_t time_since_user_joined; // 0x114(0x04)
	struct FString enemy_type; // 0x118(0x10)
	struct FString enemy_name; // 0x128(0x10)
	struct FString enemy_id; // 0x138(0x10)
	struct FString last_hit_id; // 0x148(0x10)
	struct FString last_hit_name; // 0x158(0x10)
	struct FString enemy_type_last_hit; // 0x168(0x10)
	int32_t AI_activity; // 0x178(0x04)
	int32_t time_started_to_get_killed_by_player; // 0x17c(0x04)
	int32_t health_on_started_to_get_killed_by_player; // 0x180(0x04)
	int32_t last_time_damaged_by_a_player; // 0x184(0x04)
	struct FString last_hit_damage_context; // 0x188(0x10)
	int32_t stamina_on_started_to_get_killed_by_player; // 0x198(0x04)
	int32_t stamina_on_death; // 0x19c(0x04)
};

// ScriptStruct Prospect.YPlayerInteraction
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerInteraction {
	struct AActor* m_interactiveActor; // 0x00(0x08)
	struct UYObjectInteractionComponent* m_objectInteractionComponent; // 0x08(0x08)
	bool m_canBeActive; // 0x10(0x01)
	bool m_isActive; // 0x11(0x01)
	bool m_isBlockedDueExclusivePickUp; // 0x12(0x01)
	bool m_isBlockedDueToWeightLimit; // 0x13(0x01)
	bool m_isPickupEmpty; // 0x14(0x01)
	bool m_isCompleted; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float m_currentInteractionStartTimestamp; // 0x18(0x04)
	struct FVector m_traceImpactLocation; // 0x1c(0x0c)
};

// ScriptStruct Prospect.YInteractionUpdateData
// Size: 0x38 (Inherited: 0x00)
struct FYInteractionUpdateData {
	struct UYPlayerInteractionComponent* m_playerInteractionComponent; // 0x00(0x08)
	struct FYPlayerInteraction m_interactionData; // 0x08(0x28)
	enum class EYInteractionUpdateType m_interactionUpdateType; // 0x30(0x01)
	bool m_perfectInteraction; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Prospect.YServerTracingData
// Size: 0x08 (Inherited: 0x00)
struct FYServerTracingData {
	struct AActor* m_expectedActor; // 0x00(0x08)
};

// ScriptStruct Prospect.YInteractionReleaseEntry
// Size: 0x20 (Inherited: 0x00)
struct FYInteractionReleaseEntry {
	float m_minInterpValue; // 0x00(0x04)
	float m_maxinterpValue; // 0x04(0x04)
	struct FText m_text; // 0x08(0x18)
};

// ScriptStruct Prospect.YPerk
// Size: 0xd0 (Inherited: 0x10)
struct FYPerk : FYDataTableRowBase {
	struct FText m_displayName; // 0x10(0x18)
	struct TArray<struct UTexture2D*> m_hudIcons; // 0x28(0x10)
	enum class EYPerkTrigger m_trigger; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FYAttributeTriggerData m_attributeTriggerData; // 0x3c(0x08)
	struct FYWeaponSwitchTriggerData m_weaponSwitchTriggerData; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct AActor* m_instigator; // 0x48(0x08)
	enum class EYPerkTarget m_target; // 0x50(0x01)
	enum class EYGameplayContextType m_contextType; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifiers; // 0x58(0x10)
	bool m_refreshAttributes; // 0x68(0x01)
	bool m_resetAttributeDurationOnReTrigger; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TArray<SoftClassProperty> m_perkActionsSoftRef; // 0x70(0x10)
	float m_perkDuration; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FYDamageDealingTriggerData m_damageTriggeringData; // 0x88(0x20)
	struct FGuid m_guid; // 0xa8(0x10)
	bool m_isActive; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct UYPerkAction*> m_perkActionInstances; // 0xc0(0x10)
};

// ScriptStruct Prospect.YDamageDealingTriggerData
// Size: 0x20 (Inherited: 0x00)
struct FYDamageDealingTriggerData {
	enum class EYWeaponSlotType m_slotTriggerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FDataTableRowHandle> m_dataTableRowHandles; // 0x08(0x10)
	float m_damageModification; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YWeaponSwitchTriggerData
// Size: 0x01 (Inherited: 0x00)
struct FYWeaponSwitchTriggerData {
	enum class EYWeaponSlotType m_weaponSlotType; // 0x00(0x01)
};

// ScriptStruct Prospect.YAttributeTriggerData
// Size: 0x08 (Inherited: 0x00)
struct FYAttributeTriggerData {
	enum class EYGameplayAttribute m_attribute; // 0x00(0x01)
	enum class EYPerkBool m_bool; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float m_value; // 0x04(0x04)
};

// ScriptStruct Prospect.YPlayerAwarenessNotificationData
// Size: 0x0c (Inherited: 0x00)
struct FYPlayerAwarenessNotificationData {
	bool m_isAuthorityTriggered; // 0x00(0x01)
	bool m_shouldPlayVo; // 0x01(0x01)
	bool m_shouldPlaySound; // 0x02(0x01)
	enum class EYPlayerAwarenessNotificationType m_notficationType; // 0x03(0x01)
	struct TWeakObjectPtr<struct AYPlayerCharacter> m_playerCharacterContext; // 0x04(0x08)
};

// ScriptStruct Prospect.YPlayerCosmeticReplicatedData
// Size: 0x58 (Inherited: 0x00)
struct FYPlayerCosmeticReplicatedData {
	struct FYActiveWeaponCharacterInitializationData m_initData; // 0x00(0x50)
	int32_t m_selectedWeaponSlot; // 0x50(0x04)
	bool m_isActive; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct Prospect.YActiveWeaponCharacterInitializationData
// Size: 0x50 (Inherited: 0x00)
struct FYActiveWeaponCharacterInitializationData {
	struct FString m_customItemID; // 0x00(0x10)
	struct FDataTableRowHandle m_rowHandle; // 0x10(0x10)
	struct FYStoredModData m_mods; // 0x20(0x10)
	struct TArray<struct FDataTableRowHandle> m_gearStoreUpgrades; // 0x30(0x10)
	struct TArray<struct FDataTableRowHandle> m_vanityEntries; // 0x40(0x10)
};

// ScriptStruct Prospect.YProspectorLevelData
// Size: 0x10 (Inherited: 0x00)
struct FYProspectorLevelData {
	int32_t m_level; // 0x00(0x04)
	int32_t m_currentXP; // 0x04(0x04)
	int32_t m_xpLeftForNextLevel; // 0x08(0x04)
	int32_t m_xpRequiredForNextLevel; // 0x0c(0x04)
};

// ScriptStruct Prospect.YUserRawStatsData
// Size: 0x20 (Inherited: 0x00)
struct FYUserRawStatsData {
	struct FString m_productUserId; // 0x00(0x10)
	struct TArray<struct FYRawStatEntry> m_statEntries; // 0x10(0x10)
};

// ScriptStruct Prospect.YRawStatEntry
// Size: 0x58 (Inherited: 0x00)
struct FYRawStatEntry {
	struct FString m_statName; // 0x00(0x10)
	float m_statValue; // 0x10(0x04)
	float m_oldStatValue; // 0x14(0x04)
	enum class EYMatchmakeGameModeType m_gameMode; // 0x18(0x01)
	enum class EYActivityType m_activityType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FYEOSStatData m_dtStatData; // 0x20(0x30)
	bool m_isCustomStat; // 0x50(0x01)
	bool m_hasUpdated; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Prospect.YEOSStatData
// Size: 0x30 (Inherited: 0x10)
struct FYEOSStatData : FYDataTableRowBase {
	struct FText m_translateStatName; // 0x10(0x18)
	enum class EYStatValueDisplayMethod m_displayMethod; // 0x28(0x01)
	enum class EYStatValueComparison m_comparisonMethod; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Prospect.YFeatureToggles
// Size: 0x48 (Inherited: 0x10)
struct FYFeatureToggles : FYDataTableRowBase {
	bool m_playerReplicationgClientSpawnDependency; // 0x10(0x01)
	bool m_shouldServerRunClientFireRPCValidation; // 0x11(0x01)
	bool m_isPactEnabledInRankedMode; // 0x12(0x01)
	bool m_isPactEnabledInNonRankedMode; // 0x13(0x01)
	bool m_chatEnabled; // 0x14(0x01)
	bool m_voiceChatEnabled; // 0x15(0x01)
	bool m_capsuleHitBoxesEnabled; // 0x16(0x01)
	bool m_autoRequeueingEnabled; // 0x17(0x01)
	bool m_useIdleDetection; // 0x18(0x01)
	bool m_isInternalFriendsSystemEnabled; // 0x19(0x01)
	bool m_enableSixthSenseWarning; // 0x1a(0x01)
	bool m_enableSixthSenseWarningInRanked; // 0x1b(0x01)
	bool m_glickoRatingEnabled; // 0x1c(0x01)
	bool m_friendHandlingEnabled; // 0x1d(0x01)
	bool m_enableColorBlindOptions; // 0x1e(0x01)
	bool m_ledgeClimbingSystemEnabled; // 0x1f(0x01)
	bool m_playerBuffsEnabled; // 0x20(0x01)
	bool m_automaticImportPlatformFriends; // 0x21(0x01)
	bool m_eosStatsEnabled; // 0x22(0x01)
	bool m_canScrapWeapons; // 0x23(0x01)
	bool m_canCraftWeapons; // 0x24(0x01)
	bool m_shouldTraceServerRequests; // 0x25(0x01)
	bool m_shouldTraceClientRequests; // 0x26(0x01)
	bool m_isModFunctionalityEnabled; // 0x27(0x01)
	bool m_useLootRandomSeedingLoot; // 0x28(0x01)
	bool m_enableBugReporter; // 0x29(0x01)
	bool m_requireOwnedModCrafting; // 0x2a(0x01)
	bool m_allowMovingItemToBagOverWeightLimit; // 0x2b(0x01)
	bool m_isProneEnabled; // 0x2c(0x01)
	bool m_isLeaningEnabled; // 0x2d(0x01)
	bool m_isSprintDashEnabled; // 0x2e(0x01)
	bool m_isAccountLinkingEnabled; // 0x2f(0x01)
	bool m_isFriendsImportEnabled; // 0x30(0x01)
	bool m_showMatchMapsSelector; // 0x31(0x01)
	bool m_newMeleeSystemEnabled; // 0x32(0x01)
	bool m_enableEffortsComponent; // 0x33(0x01)
	bool m_squadsEnabled; // 0x34(0x01)
	bool m_socialEnabled; // 0x35(0x01)
	bool m_sessionServerShutdownEnabled; // 0x36(0x01)
	bool m_multiplayerStationEnabled; // 0x37(0x01)
	bool m_replicationGraphEnabled; // 0x38(0x01)
	bool m_multiRegionEnabled; // 0x39(0x01)
	bool m_lootCollisionTraceEnabled; // 0x3a(0x01)
	bool m_splitSoloAndSquadMatches; // 0x3b(0x01)
	bool m_enableDeployTravelLoadingIndicator; // 0x3c(0x01)
	bool m_isOnboardingEnabled; // 0x3d(0x01)
	bool m_isPremiumShopEnabled; // 0x3e(0x01)
	bool m_timeSliceWeaponAssetLoading; // 0x3f(0x01)
	bool m_isTutorialEnabled; // 0x40(0x01)
	bool m_isBiEnabledOldPipeline; // 0x41(0x01)
	bool m_isBiEnabledNewPipeline; // 0x42(0x01)
	bool m_flushLevelStreaming; // 0x43(0x01)
	bool m_playfabCouponsEnabled; // 0x44(0x01)
	bool m_useMGetForMatchmakingServerDetails; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct Prospect.YPlayerFactionProgressionUIData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerFactionProgressionUIData {
	enum class EYFaction m_factionId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t m_factionLevel; // 0x04(0x04)
	int32_t m_completeFactionReputation; // 0x08(0x04)
	int32_t m_currentXpOfCurrentLevel; // 0x0c(0x04)
	int32_t m_maxXpRequiredForCurrentLevel; // 0x10(0x04)
	float m_relativeProgressBetweenCurrentLevelAndNextLevel; // 0x14(0x04)
	struct FString m_nextLevelXp; // 0x18(0x10)
};

// ScriptStruct Prospect.YPlayerFactionLevelUpData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerFactionLevelUpData {
	struct TArray<struct FYUnlockedShopItem> unlockedShopItems; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> unlockedContracts; // 0x10(0x10)
	enum class EYFaction factionId; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t newLevel; // 0x24(0x04)
};

// ScriptStruct Prospect.YUnlockedShopItem
// Size: 0x18 (Inherited: 0x00)
struct FYUnlockedShopItem {
	struct FDataTableRowHandle m_blueprintHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YPlayerStateChangeData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerStateChangeData {
	struct AActor* m_relevantActor; // 0x00(0x08)
	struct FYPlayerRuntimeScoreStateData m_newData; // 0x08(0x0c)
	struct FYPlayerRuntimeScoreStateData m_oldData; // 0x14(0x0c)
	enum class EYPlayerGameDataStateType m_relevantState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YPlayerRuntimeScoreStateData
// Size: 0x0c (Inherited: 0x00)
struct FYPlayerRuntimeScoreStateData {
	enum class EYPlayerGameDataStateType m_state; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t m_score; // 0x04(0x04)
	bool m_isActive; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Prospect.ProgressUIData
// Size: 0x38 (Inherited: 0x00)
struct FProgressUIData {
	struct FText m_description; // 0x00(0x18)
	struct UTexture2D* m_icon; // 0x18(0x08)
	struct FLinearColor m_progressColorTheme; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Prospect.YPlayerContractsInitData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerContractsInitData {
	struct FString UserId; // 0x00(0x10)
	struct FYBoardsContractsInitData playerBoardsContractsIncludingActiveOnes; // 0x10(0x18)
};

// ScriptStruct Prospect.YBoardsContractsInitData
// Size: 0x18 (Inherited: 0x00)
struct FYBoardsContractsInitData {
	struct TArray<struct FYBoardContractsInitData> playerContractsBoards; // 0x00(0x10)
	struct FYTimestamp lastBoardRefreshTimeUtc; // 0x10(0x08)
};

// ScriptStruct Prospect.YBoardContractsInitData
// Size: 0x18 (Inherited: 0x00)
struct FYBoardContractsInitData {
	enum class EYFaction boardFaction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYBoardContractInitData> playerBoardContractsIncludingActiveOnes; // 0x08(0x10)
};

// ScriptStruct Prospect.YBoardContractInitData
// Size: 0x18 (Inherited: 0x00)
struct FYBoardContractInitData {
	struct FString contractId; // 0x00(0x10)
	bool anotherContractOfTheSameFactionIsActive; // 0x10(0x01)
	bool contractIsLockedDueToLowFactionReputation; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Prospect.YActiveContractsInitData
// Size: 0x20 (Inherited: 0x00)
struct FYActiveContractsInitData {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYActiveContractInitData> activeContracts; // 0x10(0x10)
};

// ScriptStruct Prospect.YActiveContractInitData
// Size: 0x30 (Inherited: 0x00)
struct FYActiveContractInitData {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
	struct TArray<int32_t> contractCurrentProgressBackend; // 0x20(0x10)
};

// ScriptStruct Prospect.YClaimedContractBackendData
// Size: 0x30 (Inherited: 0x00)
struct FYClaimedContractBackendData {
	struct FString userIdReceivedFromBackend; // 0x00(0x10)
	struct FString claimedContractId; // 0x10(0x10)
	struct FString newContractId; // 0x20(0x10)
};

// ScriptStruct Prospect.YLeaderBoardData
// Size: 0x10 (Inherited: 0x00)
struct FYLeaderBoardData {
	struct TArray<struct FYLeaderBoardDataPerGameMode> m_leaderBoardDataPerGameMode; // 0x00(0x10)
};

// ScriptStruct Prospect.YLeaderBoardDataPerGameMode
// Size: 0x18 (Inherited: 0x00)
struct FYLeaderBoardDataPerGameMode {
	enum class EYMatchmakeGameModeType m_gameModeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYRankEntries m_leaderBoardData; // 0x08(0x10)
};

// ScriptStruct Prospect.YRankEntries
// Size: 0x10 (Inherited: 0x00)
struct FYRankEntries {
	struct TArray<struct FYPlayerRankDataEntry> m_rankEntries; // 0x00(0x10)
};

// ScriptStruct Prospect.YPlayerRankDataEntry
// Size: 0x30 (Inherited: 0x00)
struct FYPlayerRankDataEntry {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_playerName; // 0x10(0x10)
	enum class EYMatchmakeGameModeType m_gameModeType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t m_rank; // 0x24(0x04)
	int32_t m_highestRank; // 0x28(0x04)
	bool m_isLocalPlayer; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Prospect.YUiHofData
// Size: 0x58 (Inherited: 0x00)
struct FYUiHofData {
	enum class EYMatchmakeGameModeType m_gameModeToShow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FString, struct FYRankEntries> m_gameModeTopPlayersPerSeasons; // 0x08(0x50)
};

// ScriptStruct Prospect.YHeatMapReplicatedData
// Size: 0x10 (Inherited: 0x00)
struct FYHeatMapReplicatedData {
	struct FVector m_gridLocation; // 0x00(0x0c)
	char m_score; // 0x0c(0x01)
	char m_type; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Prospect.YEomInventoryData
// Size: 0x78 (Inherited: 0x00)
struct FYEomInventoryData {
	struct TArray<struct FYInventoryItem> m_gainedItems; // 0x00(0x10)
	struct TArray<struct FYInventoryItem> m_lostItems; // 0x10(0x10)
	struct TArray<enum class EYPlayerSetType> m_lostPlayerSetEntries; // 0x20(0x10)
	struct TArray<struct FYInventoryItem> m_lostPlayerSetItems; // 0x30(0x10)
	struct FYPlayerInventory m_lostBagItems; // 0x40(0x18)
	struct FYPlayerInventory m_lostSafePocketItems; // 0x58(0x18)
	bool m_bPlayerSurvived; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Prospect.YCraftingInProgressData
// Size: 0x20 (Inherited: 0x00)
struct FYCraftingInProgressData {
	struct FString ItemId; // 0x00(0x10)
	int32_t itemRarity; // 0x10(0x04)
	int32_t purchaseAmount; // 0x14(0x04)
	int32_t timePassed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YLevelMapRuntimeData
// Size: 0x24 (Inherited: 0x00)
struct FYLevelMapRuntimeData {
	struct FVector2D m_mapBoundsCenter; // 0x00(0x08)
	struct FVector2D m_levelSize; // 0x08(0x08)
	struct FVector2D m_mapTextureSize; // 0x10(0x08)
	bool m_initializedLevelData; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float m_zoom; // 0x1c(0x04)
	int32_t m_handle; // 0x20(0x04)
};

// ScriptStruct Prospect.YDataTablePropertyData
// Size: 0x3e8 (Inherited: 0x00)
struct FYDataTablePropertyData {
	struct UDataTable* m_weaponDatatable; // 0x00(0x08)
	struct UDataTable* m_meleeWeaponDatatable; // 0x08(0x08)
	struct UDataTable* m_abilityDataTable; // 0x10(0x08)
	struct UDataTable* m_modDataTable; // 0x18(0x08)
	struct UDataTable* m_sceneDataTable; // 0x20(0x08)
	struct UDataTable* m_materialsDataTable; // 0x28(0x08)
	struct UDataTable* m_keycardsDataTable; // 0x30(0x08)
	struct UDataTable* m_currenciesDataTable; // 0x38(0x08)
	struct UDataTable* m_ammunitionDataTable; // 0x40(0x08)
	struct UDataTable* m_scrapingDataTable; // 0x48(0x08)
	struct UDataTable* m_experienceDataTable; // 0x50(0x08)
	struct UDataTable* m_loreItemsDataTable; // 0x58(0x08)
	struct UDataTable* m_serverPerformanceTuningDataTable; // 0x60(0x08)
	struct UDataTable* m_collectiblesTypesDataTable; // 0x68(0x08)
	struct UDataTable* m_questItemsTypesDataTable; // 0x70(0x08)
	struct UDataTable* m_shieldItemsDataTable; // 0x78(0x08)
	struct UDataTable* m_helmetsDataTable; // 0x80(0x08)
	struct UDataTable* m_aiArmorDataTable; // 0x88(0x08)
	struct UDataTable* m_bagDataTable; // 0x90(0x08)
	struct UDataTable* m_prospectorBadgeDataTable; // 0x98(0x08)
	struct UDataTable* m_meleeVanityDataTable; // 0xa0(0x08)
	struct UDataTable* m_characterCustomizationExplicitDataTable; // 0xa8(0x08)
	struct UDataTable* m_characterCustomizationArchetypeDataTable; // 0xb0(0x08)
	struct UDataTable* m_keybindingIconsDatatable; // 0xb8(0x08)
	struct UDataTable* m_retentionBonusDatatable; // 0xc0(0x08)
	struct UDataTable* m_prospectorRankDataTable; // 0xc8(0x08)
	struct UDataTable* m_rankedSeasonDataTable; // 0xd0(0x08)
	struct UDataTable* m_eosStatsDataTable; // 0xd8(0x08)
	struct UDataTable* m_statsCombinationDataTable; // 0xe0(0x08)
	struct UDataTable* m_metaDefaultItemsDataTable; // 0xe8(0x08)
	struct UDataTable* m_gameSessionDataTable; // 0xf0(0x08)
	struct UDataTable* m_impactDataTable; // 0xf8(0x08)
	struct UDataTable* m_killImpactEffectsDataTable; // 0x100(0x08)
	struct UDataTable* m_shieldBreakImpactEffectsDataTable; // 0x108(0x08)
	struct UDataTable* m_fxDataTable; // 0x110(0x08)
	struct UDataTable* m_characterCustomizationCategoryDataTable; // 0x118(0x08)
	struct UDataTable* m_characterCustomizationDefaultSettingsDataTable; // 0x120(0x08)
	struct UDataTable* m_perksDataTable; // 0x128(0x08)
	struct UDataTable* m_transportDataTable; // 0x130(0x08)
	struct UDataTable* m_lootItemsDataTable; // 0x138(0x08)
	struct UDataTable* m_scopeTuningDataTable; // 0x140(0x08)
	struct UDataTable* m_notificationDataTable; // 0x148(0x08)
	struct UDataTable* m_matchmakingDataTable; // 0x150(0x08)
	struct UDataTable* m_factionsDataTable; // 0x158(0x08)
	struct UDataTable* m_contractsDataTable; // 0x160(0x08)
	struct UDataTable* m_shopOffersDataTable; // 0x168(0x08)
	struct UDataTable* m_playFabStoresDataTable; // 0x170(0x08)
	struct UDataTable* m_seasonsDataTable; // 0x178(0x08)
	struct UDataTable* m_cameraItemDataTable; // 0x180(0x08)
	struct UDataTable* m_ammoTypesDataTable; // 0x188(0x08)
	struct UDataTable* m_playerQuarterUpgradesDataTable; // 0x190(0x08)
	struct UDataTable* m_techTreeNodesDataTable; // 0x198(0x08)
	struct UDataTable* m_techTreeCategoriesDataTable; // 0x1a0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards0DataTable; // 0x1a8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards1DataTable; // 0x1b0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards2DataTable; // 0x1b8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards3DataTable; // 0x1c0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards4DataTable; // 0x1c8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards5DataTable; // 0x1d0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards6DataTable; // 0x1d8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards7DataTable; // 0x1e0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards8DataTable; // 0x1e8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards9DataTable; // 0x1f0(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewards10DataTable; // 0x1f8(0x08)
	struct UDataTable* m_passiveGeneratorsCrateRewardsDataTable; // 0x200(0x08)
	struct UDataTable* m_passiveGeneratorsDataTable; // 0x208(0x08)
	struct UDataTable* m_activityDataTable; // 0x210(0x08)
	struct UDataTable* m_gameModesUIDataTable; // 0x218(0x08)
	struct UDataTable* m_inboxMessagesDataTable; // 0x220(0x08)
	struct UDataTable* m_grantsDataTable; // 0x228(0x08)
	struct UDataTable* m_entitlementsDataTable; // 0x230(0x08)
	struct UDataTable* m_weaponVanityDataTable; // 0x238(0x08)
	struct TArray<struct UDataTable*> m_missionDataTables; // 0x240(0x10)
	struct UDataTable* m_onboardingDataTable; // 0x250(0x08)
	struct UDataTable* m_blockFeatureDueToOnboardingDataTable; // 0x258(0x08)
	struct UDataTable* m_vehicleDataTable; // 0x260(0x08)
	struct UDataTable* m_rebindableInputActionsDataTable; // 0x268(0x08)
	struct UDataTable* m_materialDataTable; // 0x270(0x08)
	struct UDataTable* m_materialGameDataTable; // 0x278(0x08)
	struct UDataTable* m_metaSettingsDataTable; // 0x280(0x08)
	struct UDataTable* m_modSettingsDataTable; // 0x288(0x08)
	struct UDataTable* m_promotionsDataTable; // 0x290(0x08)
	struct UDataTable* m_globalVanityDefaultsDataTable; // 0x298(0x08)
	struct UDataTable* m_bannerDataTable; // 0x2a0(0x08)
	struct UDataTable* m_deathEmoteDataTable; // 0x2a8(0x08)
	struct UDataTable* m_normalEmotesDataTable; // 0x2b0(0x08)
	struct UDataTable* m_defaultConfigurationDataTable; // 0x2b8(0x08)
	struct UDataTable* m_popupWidgetsDataTable; // 0x2c0(0x08)
	struct UDataTable* m_mapsInfosDataTable; // 0x2c8(0x08)
	struct UDataTable* m_vehicleVanityDataTable; // 0x2d0(0x08)
	struct UDataTable* m_droppodDataTable; // 0x2d8(0x08)
	struct UDataTable* m_defaultFeatureTogglesTable; // 0x2e0(0x08)
	struct UDataTable* m_chatSettingsDataTable; // 0x2e8(0x08)
	struct UDataTable* m_developerCreditsDataTable; // 0x2f0(0x08)
	struct UDataTable* m_awarenessNotificationDataTable; // 0x2f8(0x08)
	struct UDataTable* m_playerAwarenessTuningDataTable; // 0x300(0x08)
	struct UDataTable* m_statsSettingsDataTable; // 0x308(0x08)
	struct UDataTable* m_upgradeDataTable; // 0x310(0x08)
	struct UDataTable* m_npcDataTable; // 0x318(0x08)
	struct UDataTable* m_npcCharacterArchetypeDatable; // 0x320(0x08)
	struct UDataTable* m_npcCharacterArchetypeDatatableSets; // 0x328(0x08)
	struct UDataTable* m_npcCharacterArchetypeDatatableItems; // 0x330(0x08)
	struct UDataTable* m_socialProfilesDataTable; // 0x338(0x08)
	struct UDataTable* m_prospectorLevelProgressionDataTable; // 0x340(0x08)
	struct UDataTable* m_prospectorLevelRewardDataTable; // 0x348(0x08)
	struct UDataTable* m_sprayVanityDataTable; // 0x350(0x08)
	struct UDataTable* m_weaponCharmVanityDataTable; // 0x358(0x08)
	struct UDataTable* m_petDataTable; // 0x360(0x08)
	struct UDataTable* m_aiTuning; // 0x368(0x08)
	struct UDataTable* m_aiSenseTriggerDataTable; // 0x370(0x08)
	struct UDataTable* m_statKeysDataTable; // 0x378(0x08)
	struct UDataTable* m_playerTuningDataTable; // 0x380(0x08)
	struct UDataTable* m_lootTuningDataTable; // 0x388(0x08)
	struct UDataTable* m_rarityDataTable; // 0x390(0x08)
	struct UDataTable* m_characterCustomizationItemsDataTable; // 0x398(0x08)
	struct UDataTable* m_explicitCustomizationDataTable; // 0x3a0(0x08)
	struct UDataTable* m_characterCustomizationSetDataTable; // 0x3a8(0x08)
	struct UDataTable* m_effortDataTable; // 0x3b0(0x08)
	struct UDataTable* m_inventoryInsurancesDataTable; // 0x3b8(0x08)
	struct UDataTable* m_bundlesDataTable; // 0x3c0(0x08)
	struct UDataTable* m_bundlesPlatformDataTable; // 0x3c8(0x08)
	char pad_3D0[0x18]; // 0x3d0(0x18)
};

// ScriptStruct Prospect.YMissionReplicatedStateData
// Size: 0x20 (Inherited: 0x00)
struct FYMissionReplicatedStateData {
	int32_t m_currentStepIndex; // 0x00(0x04)
	int32_t m_previousStepIndex; // 0x04(0x04)
	struct FString m_missionId; // 0x08(0x10)
	enum class EYMissionResultType m_resultType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YMissionRuntimeData
// Size: 0x78 (Inherited: 0x00)
struct FYMissionRuntimeData {
	int32_t m_stepIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText m_missionName; // 0x08(0x18)
	struct FText m_missionStepDescription; // 0x20(0x18)
	struct FText m_missionStepNpcText; // 0x38(0x18)
	bool m_useVoiceOver; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FDataTableRowHandle m_missionStartVoiceOver; // 0x58(0x10)
	struct TArray<struct FDataTableRowHandle> m_featureToUnlock; // 0x68(0x10)
};

// ScriptStruct Prospect.YPlayerMatchBIStats
// Size: 0x110 (Inherited: 0xa8)
struct FYPlayerMatchBIStats : FYBaseAnalyticsEvent {
	int32_t shots; // 0xa8(0x04)
	int32_t hits; // 0xac(0x04)
	int32_t kills; // 0xb0(0x04)
	int32_t damage_done_to_AI; // 0xb4(0x04)
	int32_t damage_received_by_AI; // 0xb8(0x04)
	int32_t damage_received_by_players; // 0xbc(0x04)
	int32_t shield_damage_received_by_AI; // 0xc0(0x04)
	int32_t shield_damage_received_by_players; // 0xc4(0x04)
	int32_t damage_done_to_players; // 0xc8(0x04)
	int32_t damage_received_by_storm; // 0xcc(0x04)
	int32_t AI_kills; // 0xd0(0x04)
	int32_t match_time_death; // 0xd4(0x04)
	int32_t match_time_escape; // 0xd8(0x04)
	int32_t time_since_user_joined; // 0xdc(0x04)
	bool match_left; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t spawn_location_x; // 0xe4(0x04)
	int32_t spawn_location_y; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString escape_ship_id; // 0xf0(0x10)
	float current_bag_weight; // 0x100(0x04)
	float max_bag_weight; // 0x104(0x04)
	float max_safe_weight; // 0x108(0x04)
	float current_safe_weight; // 0x10c(0x04)
};

// ScriptStruct Prospect.MatchStatsMapWrapper
// Size: 0x50 (Inherited: 0x00)
struct FMatchStatsMapWrapper {
	struct TMap<struct FName, int32_t> MatchStatsMap; // 0x00(0x50)
};

// ScriptStruct Prospect.YPlayerReportSubmitData
// Size: 0x98 (Inherited: 0x00)
struct FYPlayerReportSubmitData {
	struct FText m_title; // 0x00(0x18)
	struct FText m_description; // 0x18(0x18)
	struct FText m_email; // 0x30(0x18)
	struct FText m_name; // 0x48(0x18)
	struct FString m_playerNameReported; // 0x60(0x10)
	struct FString m_reportedPlayerId; // 0x70(0x10)
	enum class EYCustomerServiceRequestType m_reportingType; // 0x80(0x01)
	enum class EYReportPlayerType m_playerReportType; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString m_reportContext; // 0x88(0x10)
};

// ScriptStruct Prospect.YPlayerReportResponseData
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerReportResponseData {
	struct FString m_response; // 0x00(0x10)
	enum class EYPlayerSupportResult m_result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YPlayerSupportReportRequestData
// Size: 0x38 (Inherited: 0x00)
struct FYPlayerSupportReportRequestData {
	struct FString m_context; // 0x00(0x10)
	struct FString m_playerName; // 0x10(0x10)
	struct FString m_playerUid; // 0x20(0x10)
	enum class EYReportType m_reportType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Prospect.YRetentionProgress
// Size: 0x10 (Inherited: 0x00)
struct FYRetentionProgress {
	int32_t daysClaimed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FYTimestamp lastClaimTime; // 0x08(0x08)
};

// ScriptStruct Prospect.YPlayerMutelistEntry
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerMutelistEntry {
	struct FString m_mutedPlayerId; // 0x00(0x10)
	bool m_chatMuted; // 0x10(0x01)
	bool m_voicechatMuted; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Prospect.YRankCalculationInitData
// Size: 0x10 (Inherited: 0x00)
struct FYRankCalculationInitData {
	struct TArray<struct AYPlayerState*> m_playerStates; // 0x00(0x10)
};

// ScriptStruct Prospect.YDamageNumberData
// Size: 0x68 (Inherited: 0x00)
struct FYDamageNumberData {
	struct FVector m_location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSlateColor m_color; // 0x10(0x28)
	struct FText m_message; // 0x38(0x18)
	struct FVector2D m_scale; // 0x50(0x08)
	float m_duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UTexture2D* m_icon; // 0x60(0x08)
};

// ScriptStruct Prospect.YHUDInfoEntry
// Size: 0x30 (Inherited: 0x00)
struct FYHUDInfoEntry {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	enum class EYHUDInfoPriorityCategory Category; // 0x08(0x01)
	enum class EYHUDInfoMessageState messageState; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Text; // 0x10(0x18)
	int32_t Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YShopBlueprintData
// Size: 0x30 (Inherited: 0x00)
struct FYShopBlueprintData {
	struct FDataTableRowHandle m_bpShopRowHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t m_factionLevelRequirement; // 0x14(0x04)
	struct FString m_shopItemBelongsTo; // 0x18(0x10)
	int32_t m_requiredFactionLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.EscMenuButtonData
// Size: 0x30 (Inherited: 0x00)
struct FEscMenuButtonData {
	struct UYNavigationCommand* m_commandClass; // 0x00(0x08)
	struct UYNavigationCommand* m_command; // 0x08(0x08)
	struct FText m_buttonLabel; // 0x10(0x18)
	struct USlateWidgetStyleAsset* m_buttonStyle; // 0x28(0x08)
};

// ScriptStruct Prospect.YGameTipRow
// Size: 0x30 (Inherited: 0x10)
struct FYGameTipRow : FYDataTableRowBase {
	struct FText m_tipText; // 0x10(0x18)
	float m_sustainDuration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YItemModsInfo
// Size: 0x60 (Inherited: 0x00)
struct FYItemModsInfo {
	struct TArray<enum class EYModificationSlotType> m_availableModSlots; // 0x00(0x10)
	struct TMap<enum class EYModificationSlotType, struct FDataTableRowHandle> m_modInventoryItems; // 0x10(0x50)
};

// ScriptStruct Prospect.YUIWeaponAmmoData
// Size: 0x08 (Inherited: 0x00)
struct FYUIWeaponAmmoData {
	int32_t m_weaponMagazineSize; // 0x00(0x04)
	int32_t m_totalAmmoCompatibleWithWeaponInBag; // 0x04(0x04)
};

// ScriptStruct Prospect.YFactionsDataTableRow
// Size: 0x188 (Inherited: 0x10)
struct FYFactionsDataTableRow : FYDataTableRowBase {
	struct FText m_name; // 0x10(0x18)
	struct FText m_description; // 0x28(0x18)
	struct FText m_detailedDescription; // 0x40(0x18)
	bool m_showFactionLevelInShop; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FText m_factionLeaderName; // 0x60(0x18)
	struct FText m_factionLeaderTitle; // 0x78(0x18)
	struct FText m_factionHeadline; // 0x90(0x18)
	struct FText m_factionProgressionRewardDescriptions; // 0xa8(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_icon; // 0xc0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_iconSmall; // 0xe8(0x28)
	struct UMaterialInterface* m_vendorIcon; // 0x110(0x08)
	struct UMaterialInterface* m_backgroundMaterial; // 0x118(0x08)
	struct TSoftObjectPtr<struct UTexture2D> m_alternativeBackgroundImage; // 0x120(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_alternativeVendorIcon; // 0x148(0x28)
	struct TArray<struct FYFactionLevel> m_levelsData; // 0x170(0x10)
	bool m_requireUnlockRequirementsForItemsInShop; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// ScriptStruct Prospect.YFactionLevel
// Size: 0x08 (Inherited: 0x00)
struct FYFactionLevel {
	int32_t m_level; // 0x00(0x04)
	int32_t m_reputation; // 0x04(0x04)
};

// ScriptStruct Prospect.YUpdateVanityData
// Size: 0x18 (Inherited: 0x00)
struct FYUpdateVanityData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_materialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationArchetypeRow
// Size: 0x458 (Inherited: 0x378)
struct FYCharacterCustomizationArchetypeRow : FYVanityItemRowBase {
	struct FText m_description; // 0x378(0x18)
	enum class EYCustomizationBodyType m_bodyType; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<struct FDataTableRowHandle> m_headItems; // 0x398(0x10)
	struct TArray<struct FDataTableRowHandle> m_baseSuitItems; // 0x3a8(0x10)
	struct TMap<enum class EYCustomizationCategory, struct FDataTableRowHandle> m_defaultItems; // 0x3b8(0x50)
	struct TMap<enum class EYCustomizationCategory, struct FYCharacterArchetypeDefaultItemEntry> m_startingItems; // 0x408(0x50)
};

// ScriptStruct Prospect.YCharacterArchetypeDefaultItemEntry
// Size: 0x18 (Inherited: 0x00)
struct FYCharacterArchetypeDefaultItemEntry {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_materialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YPlayerLeaderBoardData
// Size: 0x50 (Inherited: 0x00)
struct FYPlayerLeaderBoardData {
	struct TMap<enum class EYMatchmakeGameModeType, struct FYPlayerRankDataEntry> m_playerRankData; // 0x00(0x50)
};

// ScriptStruct Prospect.YSeasonRewardLevel
// Size: 0x28 (Inherited: 0x00)
struct FYSeasonRewardLevel {
	int32_t m_unlockXP; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDataTableRowHandle> m_basicRewards; // 0x08(0x10)
	struct TArray<struct FDataTableRowHandle> m_paidRewards; // 0x18(0x10)
};

// ScriptStruct Prospect.YSeasonRow
// Size: 0x138 (Inherited: 0x10)
struct FYSeasonRow : FYDataTableRowBase {
	struct FString m_startDateTime; // 0x10(0x10)
	struct FString m_endDateTime; // 0x20(0x10)
	struct TArray<struct FYSeasonRewardLevel> m_seasonRewardLevels; // 0x30(0x10)
	struct FYSeasonRewardLevel m_infiniteSeasonRewardLevel; // 0x40(0x28)
	struct FText m_displayName; // 0x68(0x18)
	struct FText m_description; // 0x80(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_itemLogoAssociation; // 0x98(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_logo; // 0xc0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_image; // 0xe8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_imageLarge; // 0x110(0x28)
};

// ScriptStruct Prospect.YSocialNotification
// Size: 0xb8 (Inherited: 0x00)
struct FYSocialNotification {
	struct FYSocialProfileEntry m_associatedPlayerEntry; // 0x00(0x88)
	struct FString m_id; // 0x88(0x10)
	struct FText m_overridenMessage; // 0x98(0x18)
	enum class EYNotifcationType m_type; // 0xb0(0x01)
	enum class EYNotificationMessageType m_messageType; // 0xb1(0x01)
	bool m_isPermanent; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)
};

// ScriptStruct Prospect.NavigationBarOption
// Size: 0x20 (Inherited: 0x00)
struct FNavigationBarOption {
	struct FText m_buttonLabel; // 0x00(0x18)
	struct FName m_buttonId; // 0x18(0x08)
};

// ScriptStruct Prospect.YTopMenuBarButtonEntry
// Size: 0x28 (Inherited: 0x00)
struct FYTopMenuBarButtonEntry {
	struct FText m_buttonName; // 0x00(0x18)
	struct UYScreenCommand* m_commandBP; // 0x18(0x08)
	bool m_isLandingScreen; // 0x20(0x01)
	bool m_isShopScreen; // 0x21(0x01)
	bool m_includeInShippingBuild; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float m_timerDuration; // 0x24(0x04)
};

// ScriptStruct Prospect.YPlayerItemUIData
// Size: 0x30 (Inherited: 0x00)
struct FYPlayerItemUIData {
	enum class EYPlayerSetTypeSimplified m_inventoryPositionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_baseItemId; // 0x08(0x10)
	struct FString m_itemBackendId; // 0x18(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YContractRow
// Size: 0x110 (Inherited: 0x10)
struct FYContractRow : FYDataTableRowBase {
	bool m_isEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText m_name; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_backgroundImage; // 0x30(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_contractTypeIcon; // 0x58(0x28)
	struct FText m_contractDescription; // 0x80(0x18)
	struct FText m_contractShortDescription; // 0x98(0x18)
	struct FDataTableRowHandle m_factionRowHandle; // 0xb0(0x10)
	int32_t m_contractCompletedFactionReputationIncrease; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FYContractObjective> m_objectives; // 0xc8(0x10)
	enum class EYObjectivesProgressProcessing m_objectivesProgressProcessing; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FYContractFailCondition> m_failConditions; // 0xe0(0x10)
	int32_t m_contractCost; // 0xf0(0x04)
	enum class EYContractDifficulty m_contractDifficulty; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct TArray<struct FYContractReward> m_rewards; // 0xf8(0x10)
	struct FYContractProgressionUnlockData m_unlockData; // 0x108(0x04)
	bool m_isOneTimeOnly; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
};

// ScriptStruct Prospect.YContractProgressionUnlockData
// Size: 0x04 (Inherited: 0x00)
struct FYContractProgressionUnlockData {
	int32_t m_level; // 0x00(0x04)
};

// ScriptStruct Prospect.YContractReward
// Size: 0x40 (Inherited: 0x00)
struct FYContractReward {
	struct FDataTableRowHandle m_rewardRowHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t m_amount; // 0x14(0x04)
	struct TSoftObjectPtr<struct UTexture2D> m_contractRewardIcon; // 0x18(0x28)
};

// ScriptStruct Prospect.YContractFailCondition
// Size: 0x18 (Inherited: 0x00)
struct FYContractFailCondition {
	struct FText m_failConditionName; // 0x00(0x18)
};

// ScriptStruct Prospect.YContractObjective
// Size: 0x90 (Inherited: 0x00)
struct FYContractObjective {
	enum class EYContractObjectiveType m_objectiveType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t m_objectiveMaxProgress; // 0x04(0x04)
	struct FText m_objectiveDescription; // 0x08(0x18)
	struct FDataTableRowHandle m_deadDropLocation; // 0x20(0x10)
	struct FDataTableRowHandle m_deadDropItemRowHandle; // 0x30(0x10)
	enum class EYKillType m_killTarget; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EYDeviceCategory> m_allowedWeaponCategories; // 0x48(0x10)
	struct TArray<struct FDataTableRowHandle> m_allowedSpecificWeapons; // 0x58(0x10)
	enum class EYEnemyType m_specificAIEnemyTypeToKill; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FDataTableRowHandle m_itemToOwnRowHandle; // 0x70(0x10)
	struct FYContractObjectiveConditions m_objectiveConditions; // 0x80(0x10)
};

// ScriptStruct Prospect.YContractObjectiveConditions
// Size: 0x10 (Inherited: 0x00)
struct FYContractObjectiveConditions {
	struct TArray<struct FDataTableRowHandle> m_locationConditions; // 0x00(0x10)
};

// ScriptStruct Prospect.YRequestShowNewCustomizationData
// Size: 0x10 (Inherited: 0x00)
struct FYRequestShowNewCustomizationData {
	struct FDataTableRowHandle m_requestedRowHandle; // 0x00(0x10)
};

// ScriptStruct Prospect.YRequestShowTemporaryNewSelectionData
// Size: 0x20 (Inherited: 0x00)
struct FYRequestShowTemporaryNewSelectionData {
	bool m_shouldShow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_requestedRowHandle; // 0x08(0x10)
	int32_t m_materialIndex; // 0x18(0x04)
	enum class EYCharacterItemColumnType m_updateType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Prospect.YActiveGlobalRuntimeVanityData
// Size: 0x80 (Inherited: 0x00)
struct FYActiveGlobalRuntimeVanityData {
	struct TArray<struct FYGlobalVanityItem> m_banner; // 0x00(0x10)
	struct FYGlobalVanityItem m_deathEmote; // 0x10(0x18)
	struct TArray<struct FYGlobalVanityItem> m_emote; // 0x28(0x10)
	struct FYGlobalVanityItem m_droppodHandle; // 0x38(0x18)
	struct TArray<struct FYGlobalVanityItem> m_spray; // 0x50(0x10)
	struct FYGlobalVanityItem m_petHandle; // 0x60(0x18)
	int32_t emoteAndBannerCountPerType; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Prospect.YGlobalVanityItem
// Size: 0x18 (Inherited: 0x00)
struct FYGlobalVanityItem {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_variation; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YRuntimeVehicleData
// Size: 0x18 (Inherited: 0x00)
struct FYRuntimeVehicleData {
	struct AActor* m_relevantAcquisitionActor; // 0x00(0x08)
	struct AActor* m_cachedRelatedActor; // 0x08(0x08)
	enum class EYVehicleStateType m_state; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YStoredInventoryWeaponData
// Size: 0x110 (Inherited: 0x00)
struct FYStoredInventoryWeaponData {
	struct FYStoredRuntimeWeaponInformation m_runtimeInformation; // 0x00(0xe0)
	struct FYStoredModData m_storedMods; // 0xe0(0x10)
	struct TArray<struct FDataTableRowHandle> m_vanityEntries; // 0xf0(0x10)
	struct TArray<struct FDataTableRowHandle> m_gearStoreUpgrades; // 0x100(0x10)
};

// ScriptStruct Prospect.YStoredRuntimeWeaponInformation
// Size: 0xe0 (Inherited: 0x00)
struct FYStoredRuntimeWeaponInformation {
	struct FYInventoryItem inventoryItem; // 0x00(0x98)
	struct FString m_customItemID; // 0x98(0x10)
	enum class EYItemRarityType m_rarityType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FDataTableRowHandle m_rowHandle; // 0xb0(0x10)
	int32_t m_ammoInClip; // 0xc0(0x04)
	int32_t m_maxAmmo; // 0xc4(0x04)
	float m_lastTimeFiresShot; // 0xc8(0x04)
	struct FName m_ammoTypeID; // 0xcc(0x08)
	int32_t m_weaponTransportHandle; // 0xd4(0x04)
	enum class EYWeaponSlotType m_slotType; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t m_zoomLevel; // 0xdc(0x04)
};

// ScriptStruct Prospect.YAmmoUpdateInfo
// Size: 0x28 (Inherited: 0x00)
struct FYAmmoUpdateInfo {
	int32_t m_ammoLeftInCurrentClip; // 0x00(0x04)
	float m_ammoPercent; // 0x04(0x04)
	int32_t m_maxAmmo; // 0x08(0x04)
	bool m_isAmmoChangeAnIncrement; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t m_ammoLeftOutsideOfCurrentClip; // 0x10(0x04)
	bool m_haveInfiniteClip; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName m_ammoTypeID; // 0x18(0x08)
	struct UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent; // 0x20(0x08)
};

// ScriptStruct Prospect.YHitscanTraceEntry
// Size: 0x40 (Inherited: 0x00)
struct FYHitscanTraceEntry {
	struct FVector_NetQuantize m_towardsLocation; // 0x00(0x0c)
	struct FVector_NetQuantize m_startLocation; // 0x0c(0x0c)
	struct FRotator m_impactNormal; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* m_hitComponent; // 0x28(0x08)
	struct AActor* m_hitActor; // 0x30(0x08)
	float m_damageReduction; // 0x38(0x04)
	char m_surfaceType; // 0x3c(0x01)
	bool m_isHit; // 0x3d(0x01)
	bool m_isHeadshot; // 0x3e(0x01)
	char m_boneIndexHit; // 0x3f(0x01)
};

// ScriptStruct Prospect.YFireTransportEntry
// Size: 0x18 (Inherited: 0x00)
struct FYFireTransportEntry {
	struct FVector_NetQuantize m_location; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal m_direction; // 0x0c(0x0c)
};

// ScriptStruct Prospect.YImpactInitializationData
// Size: 0x100 (Inherited: 0x00)
struct FYImpactInitializationData {
	struct FVector m_startLocation; // 0x00(0x0c)
	struct FVector m_originDamageLineTraceCheckOverride; // 0x0c(0x0c)
	struct FVector m_direction; // 0x18(0x0c)
	struct FVector m_impactNormal; // 0x24(0x0c)
	struct AActor* m_owner; // 0x30(0x08)
	struct AActor* m_instigator; // 0x38(0x08)
	float m_damageReduction; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UYDamageComponent* m_componentToDamage; // 0x48(0x08)
	struct USceneComponent* m_componentHit; // 0x50(0x08)
	struct FDataTableRowHandle m_impactDataTableRow; // 0x58(0x10)
	struct FDataTableRowHandle m_fxDataTableRow; // 0x68(0x10)
	struct FDataTableRowHandle m_transportDataTableRow; // 0x78(0x10)
	struct FDataTableRowHandle m_dataTableRowHandleContext; // 0x88(0x10)
	int32_t m_transportHandle; // 0x98(0x04)
	enum class EPhysicalSurface m_surfaceType; // 0x9c(0x01)
	bool m_isWeakspot; // 0x9d(0x01)
	bool m_isKillShot; // 0x9e(0x01)
	bool m_isShieldReducedToZero; // 0x9f(0x01)
	float m_damageAreaMultiplier; // 0xa0(0x04)
	bool m_isFriendlyFireAllowed; // 0xa4(0x01)
	bool m_replicate; // 0xa5(0x01)
	bool m_replicateToAuthorithy; // 0xa6(0x01)
	bool m_replicateSkipAutonomous; // 0xa7(0x01)
	bool m_skipDamageDealing; // 0xa8(0x01)
	bool m_isTargeting; // 0xa9(0x01)
	bool m_requiresValidWeaponImpactDataTableRow; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0xb0(0x28)
	char m_boneIndexHit; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FName m_boneNameHit; // 0xdc(0x08)
	struct FVector m_visualOriginTrailLocation; // 0xe4(0x0c)
	struct FGuid m_shotGuid; // 0xf0(0x10)
};

// ScriptStruct Prospect.S_ReplayInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_ReplayInfo {
	struct FString ReplayName; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	int32_t LengthInMS; // 0x28(0x04)
	bool bIsValid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Prospect.YReplicatedRankData
// Size: 0x0c (Inherited: 0x00)
struct FYReplicatedRankData {
	int32_t m_rank; // 0x00(0x04)
	int32_t m_prevRank; // 0x04(0x04)
	bool m_unplaced; // 0x08(0x01)
	bool m_receivedBackendData; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Prospect.YRankedCalculationData
// Size: 0x20 (Inherited: 0x00)
struct FYRankedCalculationData {
	int32_t m_rankBeforeMatch; // 0x00(0x04)
	int32_t m_newRank; // 0x04(0x04)
	int32_t m_placementPoints; // 0x08(0x04)
	int32_t m_evacBonus; // 0x0c(0x04)
	int32_t m_vpCount; // 0x10(0x04)
	float m_vpMultiplier; // 0x14(0x04)
	int32_t m_calculatedStartPenalty; // 0x18(0x04)
	int32_t m_leavePenalty; // 0x1c(0x04)
};

// ScriptStruct Prospect.YDropAbilityAnalyticsPerPlayer
// Size: 0xd8 (Inherited: 0xa8)
struct FYDropAbilityAnalyticsPerPlayer : FYBaseAnalyticsEvent {
	struct FString ability_id; // 0xa8(0x10)
	struct FString ability_name; // 0xb8(0x10)
	int32_t time_since_match_start; // 0xc8(0x04)
	int32_t drop_location_X; // 0xcc(0x04)
	int32_t drop_location_Y; // 0xd0(0x04)
	int32_t Source; // 0xd4(0x04)
};

// ScriptStruct Prospect.YAbilityAnalyticsPerPlayer
// Size: 0x28 (Inherited: 0x00)
struct FYAbilityAnalyticsPerPlayer {
	struct FString m_playerNetID; // 0x00(0x10)
	struct AActor* m_relevantPlayerActor; // 0x10(0x08)
	struct TArray<struct FYAbilityAnalyticsEvent> m_abilities; // 0x18(0x10)
};

// ScriptStruct Prospect.YAbilityAnalyticsEvent
// Size: 0xf0 (Inherited: 0xa8)
struct FYAbilityAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FName ability_id; // 0xa8(0x08)
	struct FString ability_name; // 0xb0(0x10)
	int32_t ability_pickup_time; // 0xc0(0x04)
	int32_t ability_pickup_user_time; // 0xc4(0x04)
	int32_t ability_use_time; // 0xc8(0x04)
	int32_t ability_use_user_time; // 0xcc(0x04)
	int32_t location_x; // 0xd0(0x04)
	int32_t location_y; // 0xd4(0x04)
	int32_t location_z; // 0xd8(0x04)
	char pad_DC[0x14]; // 0xdc(0x14)
};

// ScriptStruct Prospect.YAbilityTransportInitializationData
// Size: 0x40 (Inherited: 0x00)
struct FYAbilityTransportInitializationData {
	struct FVector m_startLocation; // 0x00(0x0c)
	struct FVector m_direction; // 0x0c(0x0c)
	struct FDataTableRowHandle m_abilityActionRowHandle; // 0x18(0x10)
	struct FDataTableRowHandle m_itemRowHandle; // 0x28(0x10)
	struct AActor* m_owner; // 0x38(0x08)
};

// ScriptStruct Prospect.YAbilityInitializationData
// Size: 0x10 (Inherited: 0x00)
struct FYAbilityInitializationData {
	struct TArray<struct FDataTableRowHandle> m_abilities; // 0x00(0x10)
};

// ScriptStruct Prospect.YWeaponDataTableBase
// Size: 0xa48 (Inherited: 0x310)
struct FYWeaponDataTableBase : FYItemDataTableRowBase {
	struct FY3dWidgetInfo m_3dWidgetInfo; // 0x310(0x38)
	struct FText m_weaponName; // 0x348(0x18)
	struct FYWeaponUIData m_uiData; // 0x360(0x80)
	struct TSoftObjectPtr<struct USkeletalMesh> m_skeletalMesh; // 0x3e0(0x28)
	SoftClassProperty m_animInstance; // 0x408(0x28)
	struct FName m_attachSocketOverride; // 0x430(0x08)
	struct TSoftObjectPtr<struct UAnimMontage> m_animEquipPlayerAnimationWeapon; // 0x438(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animEquipPlayerAnimationFirstPerson; // 0x460(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animEquipPlayerAnimationThirdPerson; // 0x488(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUnEquipPlayerAnimationWeapon; // 0x4b0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUnEquipPlayerAnimationFirstPerson; // 0x4d8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUnEquipPlayerAnimationThirdPerson; // 0x500(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFirePlayerAnimationWeapon; // 0x528(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFirePlayerAnimationFirstPerson; // 0x550(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireMissPlayerAnimationFirstPerson; // 0x578(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFirePlayerAnimationThirdPerson; // 0x5a0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireMissPlayerAnimationThirdPerson; // 0x5c8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireTargetingPlayerAnimationWeapon; // 0x5f0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireTargetingPlayerAnimationFirstPerson; // 0x618(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireTargetingPlayerAnimationThirdPerson; // 0x640(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopPlayerAnimationWeapon; // 0x668(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopPlayerAnimationFirstPerson; // 0x690(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopPlayerAnimationThirdPerson; // 0x6b8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopTargetingPlayerAnimationWeapon; // 0x6e0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopTargetingPlayerAnimationFirstPerson; // 0x708(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFireStopTargetingPlayerAnimationThirdPerson; // 0x730(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animReloadPlayerAnimationWeapon; // 0x758(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animReloadPlayerAnimationWeaponThirdPerson; // 0x780(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animReloadPlayerAnimationFirstPerson; // 0x7a8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animReloadPlayerAnimationThirdPerson; // 0x7d0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animSpinupPlayerAnimationWeapon; // 0x7f8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animSpinupPlayerAnimationFirstPerson; // 0x820(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animSpinupPlayerAnimationThirdPerson; // 0x848(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUsePlayerAnimationWeapon; // 0x870(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUsePlayerAnimationFirstPerson; // 0x898(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animUsePlayerAnimationThirdPerson; // 0x8c0(0x28)
	struct TArray<struct TSoftObjectPtr<struct USkeletalMesh>> m_weaponVanityMeshAlternatives; // 0x8e8(0x10)
	struct TArray<struct FYWeaponVanityMeshAttachment> m_defaultVanityMeshAttachments; // 0x8f8(0x10)
	struct TArray<struct FYWeaponMaterialData> m_weaponVanityMaterialEntries; // 0x908(0x10)
	enum class EYCustomizationCategory m_customizationCameraCategory; // 0x918(0x01)
	char pad_919[0x3]; // 0x919(0x03)
	float m_pivottOffsetXDistance; // 0x91c(0x04)
	struct FRotator m_pivotStartRotation; // 0x920(0x0c)
	char pad_92C[0x4]; // 0x92c(0x04)
	struct TArray<struct FYDefaultModAttachmentData> m_defaultModAttachmentEntries; // 0x930(0x10)
	struct TArray<struct FYModSlotDefinition> m_modSlots; // 0x940(0x10)
	float m_defaultScopeOffset; // 0x950(0x04)
	enum class EYDeviceCategory m_deviceCategory; // 0x954(0x01)
	char pad_955[0x3]; // 0x955(0x03)
	float m_weaponTargetingFOV; // 0x958(0x04)
	bool m_fireAnimationIsLooping; // 0x95c(0x01)
	bool m_stopFireAnimationWhenInterrupted; // 0x95d(0x01)
	bool m_hideNormalCrosshairWhenTargeting; // 0x95e(0x01)
	bool m_showFullscreenCrosshairWhenTargeting; // 0x95f(0x01)
	bool m_alwaysHideCrosshair; // 0x960(0x01)
	char pad_961[0x7]; // 0x961(0x07)
	SoftClassProperty m_fullscreenWidgetPath; // 0x968(0x28)
	bool m_fireWeaponFromMuzzleLocation; // 0x990(0x01)
	bool m_forceFireWeaponFromCameraLocationWhenADSing; // 0x991(0x01)
	bool m_hideGunWhenFinishedTargeting; // 0x992(0x01)
	bool m_canUseTargeting; // 0x993(0x01)
	bool m_ignoreForAutomationTest; // 0x994(0x01)
	bool m_updateBeamFXEveryFrame; // 0x995(0x01)
	char pad_996[0x2]; // 0x996(0x02)
	struct FDataTableRowHandle m_audioDataTableRow; // 0x998(0x10)
	struct FDataTableRowHandle m_tuningDataTableRow; // 0x9a8(0x10)
	struct FDataTableRowHandle m_defaultFXCategoryRow; // 0x9b8(0x10)
	struct FName m_overrideSecondaryWeaponCosmeticAttachmentName; // 0x9c8(0x08)
	enum class EYVFX_WeaponType m_vfxWeaponType; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct FDataTableRowHandle m_transportDataTableRow; // 0x9d8(0x10)
	enum class EYEquipedWeaponPoseType m_animationPose; // 0x9e8(0x01)
	enum class EYEquipedAnimationWeaponType m_animationWeaponType; // 0x9e9(0x01)
	bool m_blockAllWeaponInput; // 0x9ea(0x01)
	bool m_useAnimsForState; // 0x9eb(0x01)
	bool m_useAnimSectionsFirstPerson; // 0x9ec(0x01)
	bool m_useAnimSectionsThirdPerson; // 0x9ed(0x01)
	char pad_9EE[0x2]; // 0x9ee(0x02)
	struct TMap<enum class EYWeaponPlayState, struct FYWeaponPlayStateAnimationsEntry> m_animsForState; // 0x9f0(0x50)
	struct UYScriptableWeaponComponent* m_scriptableComponent; // 0xa40(0x08)
};

// ScriptStruct Prospect.YWeaponPlayStateAnimationsEntry
// Size: 0xf0 (Inherited: 0x00)
struct FYWeaponPlayStateAnimationsEntry {
	struct TSoftObjectPtr<struct UAnimMontage> m_animWeaponFirstPerson; // 0x00(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animWeaponThirdPerson; // 0x28(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animFirstPerson; // 0x50(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animThirdPerson; // 0x78(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animLowStaminaFirstPerson; // 0xa0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> m_animLowStaminaThirdPerson; // 0xc8(0x28)
};

// ScriptStruct Prospect.YModSlotDefinition
// Size: 0x0c (Inherited: 0x00)
struct FYModSlotDefinition {
	enum class EYModificationSlotType m_slotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag m_modSlotTag; // 0x04(0x08)
};

// ScriptStruct Prospect.YDefaultModAttachmentData
// Size: 0x38 (Inherited: 0x00)
struct FYDefaultModAttachmentData {
	struct TSoftObjectPtr<struct USkeletalMesh> m_mesh; // 0x00(0x28)
	struct FName m_socketAttachmentName; // 0x28(0x08)
	enum class EYModificationSlotType m_modType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Prospect.YWeaponMaterialData
// Size: 0x10 (Inherited: 0x00)
struct FYWeaponMaterialData {
	struct TArray<struct FYWeaponMaterialEntry> m_materialEntries; // 0x00(0x10)
};

// ScriptStruct Prospect.YWeaponMaterialEntry
// Size: 0x30 (Inherited: 0x00)
struct FYWeaponMaterialEntry {
	struct TSoftObjectPtr<struct UMaterialInterface> m_materialVariation; // 0x00(0x28)
	int32_t m_materialIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YWeaponVanityMeshAttachment
// Size: 0x40 (Inherited: 0x00)
struct FYWeaponVanityMeshAttachment {
	struct FName m_attachmentSocket; // 0x00(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> m_meshAttachmentSK; // 0x08(0x28)
	struct TArray<struct FYVanityMaterialEntry> m_meshAttachmentMaterialOverrides; // 0x30(0x10)
};

// ScriptStruct Prospect.YWeaponUIData
// Size: 0x80 (Inherited: 0x00)
struct FYWeaponUIData {
	struct TSoftObjectPtr<struct UTexture2D> m_textureUIIcon; // 0x00(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_textureUISmall; // 0x28(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_textureUIBig; // 0x50(0x28)
	enum class EYItemStatsCategory m_itemStatsCategory; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Prospect.Y3dWidgetInfo
// Size: 0x38 (Inherited: 0x00)
struct FY3dWidgetInfo {
	SoftClassProperty m_userWidget3d; // 0x00(0x28)
	struct FName m_socketNameAttachTo; // 0x28(0x08)
	float m_widgetScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YAbilityDataTableRow
// Size: 0xaa8 (Inherited: 0xa48)
struct FYAbilityDataTableRow : FYWeaponDataTableBase {
	struct FText m_abilityName; // 0xa48(0x18)
	struct FYAbilityActionEntry m_abilityAction; // 0xa60(0x18)
	bool m_overrideLeftHand; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	SoftClassProperty m_statsWidget; // 0xa80(0x28)
};

// ScriptStruct Prospect.YAbilityActionEntry
// Size: 0x18 (Inherited: 0x00)
struct FYAbilityActionEntry {
	struct UYCharacterAbilityComponent* m_abilityClass; // 0x00(0x08)
	struct FDataTableRowHandle m_dataRow; // 0x08(0x10)
};

// ScriptStruct Prospect.YAbilityActionDataTableRow
// Size: 0x78 (Inherited: 0x10)
struct FYAbilityActionDataTableRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_transportRow; // 0x10(0x10)
	struct AYPlacementActor* m_placementActorClass; // 0x20(0x08)
	float m_placementSize; // 0x28(0x04)
	float m_attachSkeletalMeshTime; // 0x2c(0x04)
	float m_activeTime; // 0x30(0x04)
	float m_timeToActivateFromReady; // 0x34(0x04)
	bool m_traceTransportTowardsGround; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float m_directionAdditionalOffset; // 0x3c(0x04)
	float m_velocityLocationMultiplier; // 0x40(0x04)
	float m_forwardToUpAddition; // 0x44(0x04)
	float m_zOffsetAddition; // 0x48(0x04)
	bool m_startLocationFromOwnerRoot; // 0x4c(0x01)
	bool m_adjustStartLocationBasedOnTrace; // 0x4d(0x01)
	bool m_isClientSidePredicted; // 0x4e(0x01)
	enum class ECollisionChannel m_transportCollisionChannel; // 0x4f(0x01)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifiersToApply; // 0x50(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifiersToApplyAtDeactivation; // 0x60(0x10)
	bool m_removeFromPerceptionSystemWhenActive; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Prospect.YAbilityActionTurret
// Size: 0x78 (Inherited: 0x78)
struct FYAbilityActionTurret : FYAbilityActionDataTableRow {
};

// ScriptStruct Prospect.YAbilityActionCloakData
// Size: 0x88 (Inherited: 0x78)
struct FYAbilityActionCloakData : FYAbilityActionDataTableRow {
	struct FDataTableRowHandle m_cloakData; // 0x78(0x10)
};

// ScriptStruct Prospect.YAbilityActionKineticShieldData
// Size: 0xa8 (Inherited: 0x78)
struct FYAbilityActionKineticShieldData : FYAbilityActionDataTableRow {
	struct UMaterialInstance* m_kineticShieldMaterialNormal; // 0x78(0x08)
	struct UMaterialInstance* m_kineticShieldMaterialPact; // 0x80(0x08)
	struct UMaterialInstance* m_kineticShieldMaterialEnemy; // 0x88(0x08)
	struct FName m_shieldFadeOutParameter; // 0x90(0x08)
	struct FDataTableRowHandle m_healthRowHandle; // 0x98(0x10)
};

// ScriptStruct Prospect.YAbilityActionBlinkData
// Size: 0xa8 (Inherited: 0x78)
struct FYAbilityActionBlinkData : FYAbilityActionDataTableRow {
	struct FDataTableRowHandle m_startSound; // 0x78(0x10)
	struct FDataTableRowHandle m_endSound; // 0x88(0x10)
	struct UParticleSystem* m_particleSystemBlinkAway; // 0x98(0x08)
	struct UParticleSystem* m_particleSystemBlinkInto; // 0xa0(0x08)
};

// ScriptStruct Prospect.YAbilityActionHealWardData
// Size: 0x98 (Inherited: 0x78)
struct FYAbilityActionHealWardData : FYAbilityActionDataTableRow {
	float m_healPerSecond; // 0x78(0x04)
	float m_healWardFinalRadius; // 0x7c(0x04)
	bool m_attachToOwner; // 0x80(0x01)
	bool m_isDestructable; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct UMaterialInstance* m_healwardMaterial; // 0x88(0x08)
	enum class EYDamageApplication m_application; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Prospect.YAbilityActionSurveillanceData
// Size: 0x80 (Inherited: 0x78)
struct FYAbilityActionSurveillanceData : FYAbilityActionDataTableRow {
	float m_radius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Prospect.YAbilityActionBombardmentData
// Size: 0xd8 (Inherited: 0x78)
struct FYAbilityActionBombardmentData : FYAbilityActionDataTableRow {
	float m_radius; // 0x78(0x04)
	float m_damageCapsuleRadius; // 0x7c(0x04)
	float m_damageCapsuleHalfHeight; // 0x80(0x04)
	float m_damage; // 0x84(0x04)
	float m_damageDuration; // 0x88(0x04)
	float m_warmUpDuration; // 0x8c(0x04)
	struct UParticleSystem* m_bombardmentStartParticleSystem; // 0x90(0x08)
	struct UParticleSystem* m_bombardmentEndParticleSystem; // 0x98(0x08)
	struct FDataTableRowHandle m_playerActivationSFX; // 0xa0(0x10)
	struct FDataTableRowHandle m_incomingSFX; // 0xb0(0x10)
	struct FDataTableRowHandle m_impactSFX; // 0xc0(0x10)
	int32_t m_amountOfStrikes; // 0xd0(0x04)
	enum class EYDamageApplication m_application; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
};

// ScriptStruct Prospect.YActivitySetsRow
// Size: 0x18 (Inherited: 0x08)
struct FYActivitySetsRow : FTableRowBase {
	struct TArray<enum class EYActivityType> m_activities; // 0x08(0x10)
};

// ScriptStruct Prospect.YActivityDataTableRow
// Size: 0x160 (Inherited: 0x10)
struct FYActivityDataTableRow : FYDataTableRowBase {
	enum class EYActivityType m_activityType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FYCountPerMap m_desiredActivityActorCountPerMap; // 0x18(0x68)
	struct TMap<struct FSoftObjectPath, float> m_perMapMultiplier; // 0x80(0x50)
	int32_t m_desiredNumActorsToBeAlive; // 0xd0(0x04)
	float m_multiplierActorsAtMatchStart; // 0xd4(0x04)
	float m_respawnCheckInterval; // 0xd8(0x04)
	int32_t m_maxActorsToSpawnPerCheck; // 0xdc(0x04)
	float m_minimumDistanceToPlayers; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	SoftClassProperty m_activityActorManagerClass; // 0xe8(0x28)
	SoftClassProperty m_activityActorClass; // 0x110(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_activityIcon; // 0x138(0x28)
};

// ScriptStruct Prospect.YCountPerMap
// Size: 0x68 (Inherited: 0x10)
struct FYCountPerMap : FYDataTableRowBase {
	int32_t m_count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class EYMapType, int32_t> m_mapOverride; // 0x18(0x50)
};

// ScriptStruct Prospect.YActivityCountEntry
// Size: 0x18 (Inherited: 0x00)
struct FYActivityCountEntry {
	struct FString m_stringIdentifier; // 0x00(0x10)
	int32_t m_count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YEvaluationResult
// Size: 0xa8 (Inherited: 0x00)
struct FYEvaluationResult {
	float m_lastTimeEvaluated; // 0x00(0x04)
	int32_t m_overAllScore; // 0x04(0x04)
	struct TMap<enum class EYActivityType, int32_t> m_occupiedLocationsCount; // 0x08(0x50)
	struct TMap<enum class EYActivityType, int32_t> m_scorePerType; // 0x58(0x50)
};

// ScriptStruct Prospect.YFindActivityLocationsRequestData
// Size: 0x18 (Inherited: 0x00)
struct FYFindActivityLocationsRequestData {
	int32_t m_amount; // 0x00(0x04)
	enum class EYActivityType m_type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float m_minimumDistanceToPlayers; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AYActivityLocationLinked* m_areaLinkedLocationFilter; // 0x10(0x08)
};

// ScriptStruct Prospect.YActivityLinkedLocations
// Size: 0x50 (Inherited: 0x00)
struct FYActivityLinkedLocations {
	struct TMap<enum class EYActivityType, struct FYActivityLocationArray> m_linkedLocations; // 0x00(0x50)
};

// ScriptStruct Prospect.YActivityLocationArray
// Size: 0x10 (Inherited: 0x00)
struct FYActivityLocationArray {
	struct TArray<struct AYActivityLocation*> m_locations; // 0x00(0x10)
};

// ScriptStruct Prospect.YDespawnActorInfo
// Size: 0x10 (Inherited: 0x00)
struct FYDespawnActorInfo {
	struct AActor* m_actor; // 0x00(0x08)
	float m_despawnRadius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Prospect.YPooledActorEntry
// Size: 0x10 (Inherited: 0x00)
struct FYPooledActorEntry {
	struct AActor* m_actor; // 0x00(0x08)
	char m_isInUse : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Prospect.YActorUIWidgetData
// Size: 0xa0 (Inherited: 0x00)
struct FYActorUIWidgetData {
	struct TSoftObjectPtr<struct UTexture2D> m_uiTexture; // 0x00(0x28)
	struct FSlateColor m_color; // 0x28(0x28)
	struct FText m_playerName; // 0x50(0x18)
	struct FText m_title; // 0x68(0x18)
	float m_renderDistance; // 0x80(0x04)
	float m_minRenderDistance; // 0x84(0x04)
	bool m_playAnimation; // 0x88(0x01)
	bool m_attachPlayerNameToTitle; // 0x89(0x01)
	bool m_showArrow; // 0x8a(0x01)
	bool m_overrideColor; // 0x8b(0x01)
	bool m_attachAmountToTitle; // 0x8c(0x01)
	bool m_useOwnerTeamColor; // 0x8d(0x01)
	bool m_calculateDistanceToPlayer; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	struct FDataTableRowHandle m_dataTableRowHandleContext; // 0x90(0x10)
};

// ScriptStruct Prospect.YMapErrorInfo
// Size: 0x10 (Inherited: 0x00)
struct FYMapErrorInfo {
	struct TArray<struct FString> m_errors; // 0x00(0x10)
};

// ScriptStruct Prospect.YAIAggroTuning
// Size: 0x50 (Inherited: 0x00)
struct FYAIAggroTuning {
	float m_weightDistance; // 0x00(0x04)
	float m_weightToken; // 0x04(0x04)
	float m_weightNotInDBNO; // 0x08(0x04)
	float m_weightTypeBonus; // 0x0c(0x04)
	float m_weightDamageReceived; // 0x10(0x04)
	float m_weightVisibility; // 0x14(0x04)
	float m_weightTimeSinceLastSeen; // 0x18(0x04)
	float m_weightTimeTargetAcquired; // 0x1c(0x04)
	float m_lastSeenTimeout; // 0x20(0x04)
	float m_lastSharedSenseTimeout; // 0x24(0x04)
	float m_lastHeardTimeout; // 0x28(0x04)
	float m_distanceReference; // 0x2c(0x04)
	float m_minDistanceToBeInvisibleInsideHideableFoliage; // 0x30(0x04)
	float m_distancePanicThresholdForPlayer; // 0x34(0x04)
	float m_distancePanicPlayerMultiplier; // 0x38(0x04)
	float m_targetTypePlayerBonus; // 0x3c(0x04)
	float m_acquireTimeMax; // 0x40(0x04)
	float m_acquireTimeMin; // 0x44(0x04)
	float m_damageReceivedDecayPerSecond; // 0x48(0x04)
	float m_damageReceivedMax; // 0x4c(0x04)
};

// ScriptStruct Prospect.YAICombatAnalyticsData
// Size: 0x170 (Inherited: 0x00)
struct FYAICombatAnalyticsData {
	struct FYAICombatAnalyticsEvent m_aiCombatAnalyticsEvent; // 0x00(0x120)
	struct TMap<struct FUniqueNetIdRepl, struct FYAIPerPlayerCombatData> m_aiCombatDataPerPlayer; // 0x120(0x50)
};

// ScriptStruct Prospect.YAIPerPlayerCombatData
// Size: 0x0c (Inherited: 0x00)
struct FYAIPerPlayerCombatData {
	int32_t ai_damage_dealt; // 0x00(0x04)
	int32_t hits_by_ai; // 0x04(0x04)
	int32_t weakspots_hits_by_ai; // 0x08(0x04)
};

// ScriptStruct Prospect.YAIBaseAnalyticsEvent
// Size: 0xd8 (Inherited: 0xa8)
struct FYAIBaseAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8(0x04)
	int32_t location_y; // 0xac(0x04)
	int32_t location_z; // 0xb0(0x04)
	int32_t time_since_match_start; // 0xb4(0x04)
	struct FString ai_name; // 0xb8(0x10)
	struct FString ai_type; // 0xc8(0x10)
};

// ScriptStruct Prospect.YAICombatAnalyticsEvent
// Size: 0x120 (Inherited: 0xd8)
struct FYAICombatAnalyticsEvent : FYAIBaseAnalyticsEvent {
	int32_t time_started_when_ai_attacks; // 0xd8(0x04)
	int32_t ai_damage_dealt; // 0xdc(0x04)
	int32_t Status; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString player_id; // 0xe8(0x10)
	int32_t shot_by_ai; // 0xf8(0x04)
	int32_t hits_by_ai; // 0xfc(0x04)
	int32_t weakspots_hits_by_ai; // 0x100(0x04)
	int32_t location_x_player; // 0x104(0x04)
	int32_t location_y_player; // 0x108(0x04)
	int32_t location_z_player; // 0x10c(0x04)
	struct FString type_of_aggro; // 0x110(0x10)
};

// ScriptStruct Prospect.YKilledAIAnalyticsEvents
// Size: 0x50 (Inherited: 0x00)
struct FYKilledAIAnalyticsEvents {
	struct TMap<struct FName, struct FYKilledAIAnalyticsEvent> m_killedAIAnalyticsEventsByName; // 0x00(0x50)
};

// ScriptStruct Prospect.YKilledAIAnalyticsEvent
// Size: 0x128 (Inherited: 0xa8)
struct FYKilledAIAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8(0x04)
	int32_t location_y; // 0xac(0x04)
	int32_t location_z; // 0xb0(0x04)
	int32_t location_x_killer; // 0xb4(0x04)
	int32_t location_y_killer; // 0xb8(0x04)
	int32_t location_z_killer; // 0xbc(0x04)
	int32_t time_since_match_start; // 0xc0(0x04)
	int32_t time_since_user_joined; // 0xc4(0x04)
	int32_t time_started_to_get_killed_by_player; // 0xc8(0x04)
	int32_t AI_activity; // 0xcc(0x04)
	struct FString ai_name; // 0xd0(0x10)
	struct FString ai_archetype; // 0xe0(0x10)
	int32_t ai_damage_dealt; // 0xf0(0x04)
	int32_t health_on_started_to_get_killed_by_player; // 0xf4(0x04)
	struct FString player_item; // 0xf8(0x10)
	struct FString player_item_id; // 0x108(0x10)
	int32_t hits_ai; // 0x118(0x04)
	int32_t weakspot_hits_ai; // 0x11c(0x04)
	int32_t squadAI_id; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct Prospect.YTurnAngleData
// Size: 0x04 (Inherited: 0x00)
struct FYTurnAngleData {
	float m_angle; // 0x00(0x04)
};

// ScriptStruct Prospect.YHitAngleData
// Size: 0x0c (Inherited: 0x00)
struct FYHitAngleData {
	float m_dotValue; // 0x00(0x04)
	float m_angle; // 0x04(0x04)
	bool m_isRight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Prospect.YReplicatedAttackRuntimeData
// Size: 0x0c (Inherited: 0x00)
struct FYReplicatedAttackRuntimeData {
	float m_serverTimestamp; // 0x00(0x04)
	int32_t m_indexRangedAttack; // 0x04(0x04)
	enum class EYAIAttackStatus m_attackStatus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Prospect.YAIRangedAttackDefinition
// Size: 0x40 (Inherited: 0x00)
struct FYAIRangedAttackDefinition {
	struct FName m_nameAttack; // 0x00(0x08)
	float m_overrideProjectileGravity; // 0x08(0x04)
	float m_requestedArc; // 0x0c(0x04)
	float m_accuracy; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDataTableRowHandle m_weaponTransport; // 0x18(0x10)
	bool m_shootAtGroundLocationOfTarget; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FYAIAttackPhaseDefinition> m_attackPhases; // 0x30(0x10)
};

// ScriptStruct Prospect.YAIAttackPhaseDefinition
// Size: 0x24 (Inherited: 0x00)
struct FYAIAttackPhaseDefinition {
	struct FName m_namePhase; // 0x00(0x08)
	float m_durationFixed; // 0x08(0x04)
	bool m_durationNeedsToBeCalculatedAtRuntime; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t m_numTimesToPlayThisPhase; // 0x10(0x04)
	int32_t m_numShots; // 0x14(0x04)
	float m_firingDelayAfterPhaseStart; // 0x18(0x04)
	float m_refireTime; // 0x1c(0x04)
	bool m_isAffectedByGPAModifierAIAmountAttackPhaseCount; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Prospect.YAIEQSPreferedRange
// Size: 0x60 (Inherited: 0x10)
struct FYAIEQSPreferedRange : FYDataTableRowBase {
	struct TMap<struct FName, float> m_EQSParameters; // 0x10(0x50)
};

// ScriptStruct Prospect.YDebugAIStats
// Size: 0x50 (Inherited: 0x00)
struct FYDebugAIStats {
	struct TMap<struct FString, int32_t> m_aiCountPerType; // 0x00(0x50)
};

// ScriptStruct Prospect.YAIAllyAlertEvent
// Size: 0x18 (Inherited: 0x00)
struct FYAIAllyAlertEvent {
	struct AYAISquad* m_aiSquad; // 0x00(0x08)
	struct AActor* m_target; // 0x08(0x08)
	struct AActor* m_characterAISensingTarget; // 0x10(0x08)
};

// ScriptStruct Prospect.YAISenseTuning
// Size: 0x60 (Inherited: 0x00)
struct FYAISenseTuning {
	float m_decreasePerSecond; // 0x00(0x04)
	float m_targetIsCrouchingMultiplier; // 0x04(0x04)
	struct TMap<enum class EYAIBehaviorReaction, float> m_behaviorReactionThresholds; // 0x08(0x50)
	float m_maxIntensity; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Prospect.YAINavMeshInfo
// Size: 0x10 (Inherited: 0x00)
struct FYAINavMeshInfo {
	struct TArray<enum class EYEnemyType> m_supportedEnemyTypes; // 0x00(0x10)
};

// ScriptStruct Prospect.YAISpawnCharactersRow
// Size: 0x68 (Inherited: 0x10)
struct FYAISpawnCharactersRow : FYDataTableRowBase {
	bool m_usePrototypeVersionByDefault; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<enum class EYEnemyType, struct FYAISpawnCharacterInfo> m_aiCharactersPerType; // 0x18(0x50)
};

// ScriptStruct Prospect.YAISpawnCharacterInfo
// Size: 0x50 (Inherited: 0x00)
struct FYAISpawnCharacterInfo {
	SoftClassProperty m_aiCharacter; // 0x00(0x28)
	SoftClassProperty m_aiCharacterPrototypeVersion; // 0x28(0x28)
};

// ScriptStruct Prospect.YAISquadSpawnRow
// Size: 0x30 (Inherited: 0x10)
struct FYAISquadSpawnRow : FYDataTableRowBase {
	struct TArray<struct FYAISquadDefinition> m_spawnOptions; // 0x10(0x10)
	struct TArray<struct FYAISquadDefinition> m_spawnOptionsStorm; // 0x20(0x10)
};

// ScriptStruct Prospect.YAISquadDefinition
// Size: 0x18 (Inherited: 0x00)
struct FYAISquadDefinition {
	float m_spawnWeight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FYSpawnTypeInfo> m_ais; // 0x08(0x10)
};

// ScriptStruct Prospect.YSpawnTypeInfo
// Size: 0x28 (Inherited: 0x00)
struct FYSpawnTypeInfo {
	enum class EYEnemyType m_type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t m_amount; // 0x04(0x04)
	struct FGameplayTagContainer m_tags; // 0x08(0x20)
};

// ScriptStruct Prospect.YAISquadSpawnDefinition
// Size: 0x78 (Inherited: 0x00)
struct FYAISquadSpawnDefinition {
	struct FVector m_spawnLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTransform> m_subSpawnLocations; // 0x10(0x10)
	struct FVector m_roamingLocationOverride; // 0x20(0x0c)
	float m_roamingRadiusOverride; // 0x2c(0x04)
	struct FRotator m_spawnRotationOverride; // 0x30(0x0c)
	bool m_purgeSquadOnceNoPlayerClose; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString m_spawnContextString; // 0x40(0x10)
	struct AActor* m_spawnContextActor; // 0x50(0x08)
	struct FGameplayTagContainer m_gameplayTags; // 0x58(0x20)
};

// ScriptStruct Prospect.YAISquadDifficultyDefinitionTableRow
// Size: 0x18 (Inherited: 0x08)
struct FYAISquadDifficultyDefinitionTableRow : FTableRowBase {
	struct TArray<struct FYPossibleSquadDefinitions> m_squadsPerDifficulty; // 0x08(0x10)
};

// ScriptStruct Prospect.YPossibleSquadDefinitions
// Size: 0x10 (Inherited: 0x00)
struct FYPossibleSquadDefinitions {
	struct TArray<struct FYSquadDefinition> m_squads; // 0x00(0x10)
};

// ScriptStruct Prospect.YSquadDefinition
// Size: 0x10 (Inherited: 0x00)
struct FYSquadDefinition {
	struct TArray<struct FYSquadAIType> m_AIsToSpawn; // 0x00(0x10)
};

// ScriptStruct Prospect.YAIHitReactionAnimationRow
// Size: 0xb0 (Inherited: 0x10)
struct FYAIHitReactionAnimationRow : FYDataTableRowBase {
	struct TMap<enum class EYHitZone, struct FName> m_hitZoneToBoneNameMapping; // 0x10(0x50)
	struct TMap<struct FName, struct FYAIHitReactionSetData> m_hitReactionSetDataPerStabilityLevel; // 0x60(0x50)
};

// ScriptStruct Prospect.YAIHitReactionSetData
// Size: 0x50 (Inherited: 0x00)
struct FYAIHitReactionSetData {
	struct TMap<enum class EYHitZone, struct FYAIHitReactionAnimations> m_animationsPerHitZone; // 0x00(0x50)
};

// ScriptStruct Prospect.YAIHitReactionAnimations
// Size: 0x18 (Inherited: 0x00)
struct FYAIHitReactionAnimations {
	float m_maxAngleDifferenceAllowed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FYAIHitReactionAnimData> m_animations; // 0x08(0x10)
};

// ScriptStruct Prospect.YAIHitReactionAnimData
// Size: 0x18 (Inherited: 0x00)
struct FYAIHitReactionAnimData {
	struct TArray<struct UAnimMontage*> m_animMontages; // 0x00(0x10)
	float m_angle; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YAIStaggerDefinition
// Size: 0x18 (Inherited: 0x00)
struct FYAIStaggerDefinition {
	float m_cooldown; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FYAIStaggerAnimations> m_animationOptions; // 0x08(0x10)
};

// ScriptStruct Prospect.YAIStaggerAnimations
// Size: 0x18 (Inherited: 0x00)
struct FYAIStaggerAnimations {
	float m_minAngle; // 0x00(0x04)
	float m_maxAngle; // 0x04(0x04)
	struct TArray<struct UAnimMontage*> m_animMontages; // 0x08(0x10)
};

// ScriptStruct Prospect.YAIStaggerTriggerWeakspotHealth
// Size: 0x20 (Inherited: 0x00)
struct FYAIStaggerTriggerWeakspotHealth {
	struct TArray<struct FName> m_hitspotNames; // 0x00(0x10)
	float m_damage; // 0x10(0x04)
	struct FName m_staggerName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YAIStaggerTriggerHealthPercentage
// Size: 0x10 (Inherited: 0x00)
struct FYAIStaggerTriggerHealthPercentage {
	float m_healthPercentage; // 0x00(0x04)
	float m_time; // 0x04(0x04)
	struct FName m_staggerName; // 0x08(0x08)
};

// ScriptStruct Prospect.YAITargetInfo
// Size: 0xd0 (Inherited: 0x00)
struct FYAITargetInfo {
	bool m_isVisible; // 0x00(0x01)
	bool m_isCurrentCombatAggroTarget; // 0x01(0x01)
	bool m_isPlayer; // 0x02(0x01)
	bool m_isDBNO; // 0x03(0x01)
	float m_currentDistance; // 0x04(0x04)
	float m_damagedReceivedFromTarget; // 0x08(0x04)
	int32_t m_registeredTokens; // 0x0c(0x04)
	int32_t m_maxTokens; // 0x10(0x04)
	float m_timeTargetAcquired; // 0x14(0x04)
	float m_aggroValue; // 0x18(0x04)
	enum class EYAISenseType m_highestSenseType; // 0x1c(0x01)
	enum class EYAISenseType m_lastPeceivedSenseType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FVector m_lastPerceivedSenseLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TMap<enum class EYAISenseType, float> m_lastTimeTargetWasPerceivedMap; // 0x30(0x50)
	struct FYAITargetDetailedAggroInfo m_detailedAggroInfo; // 0x80(0x50)
};

// ScriptStruct Prospect.YAITargetDetailedAggroInfo
// Size: 0x50 (Inherited: 0x00)
struct FYAITargetDetailedAggroInfo {
	struct TMap<enum class EYAIDetailAggroType, float> m_detailedAggroValues; // 0x00(0x50)
};

// ScriptStruct Prospect.YAISenseTriggerRow
// Size: 0x20 (Inherited: 0x10)
struct FYAISenseTriggerRow : FYDataTableRowBase {
	float m_intensity; // 0x10(0x04)
	float m_maxRange; // 0x14(0x04)
	enum class EYAISenseType m_type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YAIRangedAttackDefinitionNew
// Size: 0x30 (Inherited: 0x08)
struct FYAIRangedAttackDefinitionNew : FTableRowBase {
	float m_overrideProjectileGravity; // 0x08(0x04)
	bool m_shootStraight; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float m_accuracy; // 0x10(0x04)
	float m_requestedArc; // 0x14(0x04)
	bool m_shootAtGroundLocationOfTarget; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FDataTableRowHandle m_weaponTransport; // 0x20(0x10)
};

// ScriptStruct Prospect.YAITuningRow
// Size: 0x218 (Inherited: 0x08)
struct FYAITuningRow : FTableRowBase {
	struct TMap<enum class EYAIState, float> m_movementSpeedPerState; // 0x08(0x50)
	float m_characterMovementSpeed; // 0x58(0x04)
	float m_resetRadius; // 0x5c(0x04)
	struct TArray<struct FYAIMeleeAttackDefinition> m_meleeAttacks; // 0x60(0x10)
	float m_meleeAttackBlockTimeOnTargetGlobal; // 0x70(0x04)
	float m_meleeStrafeMoveDistance; // 0x74(0x04)
	float m_meleeBackOffDistance; // 0x78(0x04)
	float m_weakAreaDamageMultiplier; // 0x7c(0x04)
	float m_stabilityDamageRagdollThresholds; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FYAIRangedAttackDefinition> m_rangedAttacks; // 0x88(0x10)
	struct TArray<struct FYAIRangedAttackMontageDefinition> m_rangedAttackMontages; // 0x98(0x10)
	struct FYAIDodgeDefinition m_dodgeMove; // 0xa8(0x10)
	struct TArray<struct FYAIStabilityDefinition> m_stabilityLevels; // 0xb8(0x10)
	struct FDataTableRowHandle m_eqsPreferredRange; // 0xc8(0x10)
	enum class EYEnemyType m_type; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FText m_characterAIName; // 0xe0(0x18)
	struct FYAITuningBuffAlliesTuning m_buffAllyTuning; // 0xf8(0x38)
	struct FYAITuningCallReinforcementsRow m_callReinforcementTuning; // 0x130(0x38)
	struct FYAITuningSnipedReactionTuning m_snipedTuning; // 0x168(0x28)
	struct TArray<struct FDataTableRowHandle> m_defaultPerks; // 0x190(0x10)
	struct FGameplayTagContainer m_defaultGameplayTags; // 0x1a0(0x20)
	int32_t m_xpAmountOnKill; // 0x1c0(0x04)
	struct FName m_navMeshToUse; // 0x1c4(0x08)
	struct FYAISpawnArchetypeData m_spawnArchetypeData; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	struct FDataTableRowHandle m_senseTuningRow; // 0x1d0(0x10)
	struct FDataTableRowHandle m_lootRow; // 0x1e0(0x10)
	struct FDataTableRowHandle m_lootRowStorm; // 0x1f0(0x10)
	int32_t m_defaultArmor; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct TArray<struct FDataTableRowHandle> m_armorRows; // 0x208(0x10)
};

// ScriptStruct Prospect.YAISpawnArchetypeData
// Size: 0x01 (Inherited: 0x00)
struct FYAISpawnArchetypeData {
	enum class EYNavMeshType m_spawnNavMesh; // 0x00(0x01)
};

// ScriptStruct Prospect.YAITuningSnipedReactionTuning
// Size: 0x28 (Inherited: 0x08)
struct FYAITuningSnipedReactionTuning : FTableRowBase {
	struct TArray<struct FDataTableRowHandle> m_perks; // 0x08(0x10)
	float m_snipedMinimunDamage; // 0x18(0x04)
	float m_snipedDamagedRange; // 0x1c(0x04)
	float m_snipedPlayerRadius; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YAITuningCallReinforcementsRow
// Size: 0x38 (Inherited: 0x08)
struct FYAITuningCallReinforcementsRow : FTableRowBase {
	float m_callReinforcementRadius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDataTableRowHandle m_callReinforcementDatatableRowName; // 0x10(0x10)
	int32_t m_callReinforcementOnAllyCount; // 0x20(0x04)
	float m_callReinforcementInterrupDamage; // 0x24(0x04)
	float m_callReinforcementInterrupTime; // 0x28(0x04)
	float m_callReinforcementCooldown; // 0x2c(0x04)
	int32_t m_callReinforcementMaxCount; // 0x30(0x04)
	int32_t m_callReinforcementWaves; // 0x34(0x04)
};

// ScriptStruct Prospect.YAITuningBuffAlliesTuning
// Size: 0x38 (Inherited: 0x08)
struct FYAITuningBuffAlliesTuning : FTableRowBase {
	struct TArray<struct FDataTableRowHandle> m_perks; // 0x08(0x10)
	float m_buffCooldown; // 0x18(0x04)
	float m_buffRadius; // 0x1c(0x04)
	struct AActor* m_buffClasses; // 0x20(0x08)
	bool m_buffExcludeSelf; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float m_buffInterrupDamage; // 0x2c(0x04)
	float m_buffInterrupTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YAIDodgeDefinition
// Size: 0x10 (Inherited: 0x00)
struct FYAIDodgeDefinition {
	float m_dodgeDamagedThreshold; // 0x00(0x04)
	float m_dodgeMinDot2DToCombatTarget; // 0x04(0x04)
	float m_dodgeBlockDurationAfterDodge; // 0x08(0x04)
	float m_chanceCancelHitReactionByDodge; // 0x0c(0x04)
};

// ScriptStruct Prospect.YAIRangedAttackMontageDefinition
// Size: 0x40 (Inherited: 0x00)
struct FYAIRangedAttackMontageDefinition {
	struct FText m_attackName; // 0x00(0x18)
	struct TSoftObjectPtr<struct UAnimMontage> m_animMontageToPlay; // 0x18(0x28)
};

// ScriptStruct Prospect.YAIMeleeAttackDefinition
// Size: 0xb0 (Inherited: 0x00)
struct FYAIMeleeAttackDefinition {
	struct FGameplayTag m_requiredComboTag; // 0x00(0x08)
	bool m_predictProjectilePath; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FPredictProjectilePathParams m_predictProjectilePathParameters; // 0x10(0x60)
	float m_minDistanceToPredictedHitToAllowAttack; // 0x70(0x04)
	float m_meleeAttackRangeMin; // 0x74(0x04)
	float m_meleeAttackRangeMax; // 0x78(0x04)
	float m_velocityOwnerMin; // 0x7c(0x04)
	float m_blockTime; // 0x80(0x04)
	float m_meleeAttackDot2D; // 0x84(0x04)
	float m_meleeAttackMaxVelocityPredicition; // 0x88(0x04)
	float m_meleeDamageCheckDistanceOffset; // 0x8c(0x04)
	struct FDataTableRowHandle m_meleeAttack; // 0x90(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> m_meleeAttackMontages; // 0xa0(0x10)
};

// ScriptStruct Prospect.YAISenseTuningRow
// Size: 0xd0 (Inherited: 0x10)
struct FYAISenseTuningRow : FYDataTableRowBase {
	float m_sightRadius; // 0x10(0x04)
	float m_loseSightRadiusAdditional; // 0x14(0x04)
	float m_peripheralVisionAngleDegrees; // 0x18(0x04)
	float m_hearingRange; // 0x1c(0x04)
	float m_losHearingRange; // 0x20(0x04)
	float m_hearingEventsRangeMultiplier; // 0x24(0x04)
	float m_shareSenseRadius; // 0x28(0x04)
	struct FYAIAggroTuning m_aggroTuning; // 0x2c(0x50)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TMap<enum class EYAISenseType, struct FYAISenseTuning> m_senses; // 0x80(0x50)
};

// ScriptStruct Prospect.YEQSParameterFloat
// Size: 0x0c (Inherited: 0x00)
struct FYEQSParameterFloat {
	struct FName m_name; // 0x00(0x08)
	float m_value; // 0x08(0x04)
};

// ScriptStruct Prospect.YAITurnAnimationRow
// Size: 0x60 (Inherited: 0x10)
struct FYAITurnAnimationRow : FYDataTableRowBase {
	struct TMap<enum class EYAIState, struct FYAITurnAnimationsData> m_turnsAnimationPerState; // 0x10(0x50)
};

// ScriptStruct Prospect.YAITurnAnimationsData
// Size: 0x10 (Inherited: 0x00)
struct FYAITurnAnimationsData {
	struct TArray<struct FYAITurnAnimation> m_animations; // 0x00(0x10)
};

// ScriptStruct Prospect.YAITurnAnimation
// Size: 0x10 (Inherited: 0x00)
struct FYAITurnAnimation {
	struct UAnimMontage* m_animations; // 0x00(0x08)
	float m_angle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Prospect.YAimTargetInfo
// Size: 0x18 (Inherited: 0x00)
struct FYAimTargetInfo {
	struct AActor* m_targetActor; // 0x00(0x08)
	struct FVector m_targetLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YAIAudio
// Size: 0x158 (Inherited: 0x00)
struct FYAIAudio {
	struct FYAIBarkAudioInfo m_barkIdle; // 0x00(0x18)
	struct FYAIBarkAudioInfo m_barkCombat; // 0x18(0x18)
	struct FDataTableRowHandle m_stateEnterIdle; // 0x30(0x10)
	struct FDataTableRowHandle m_stateEnterCombat; // 0x40(0x10)
	struct FDataTableRowHandle m_death; // 0x50(0x10)
	struct FDataTableRowHandle m_deathCritical; // 0x60(0x10)
	struct FDataTableRowHandle m_barkCombatAlertBehindPlayer; // 0x70(0x10)
	struct FDataTableRowHandle m_attackStartMelee; // 0x80(0x10)
	struct FDataTableRowHandle m_attackStartRanged; // 0x90(0x10)
	struct FDataTableRowHandle m_attackRangedFired; // 0xa0(0x10)
	struct FDataTableRowHandle m_hitReaction; // 0xb0(0x10)
	struct FDataTableRowHandle m_buffingStart; // 0xc0(0x10)
	struct FDataTableRowHandle m_buffingInterrupt; // 0xd0(0x10)
	struct FDataTableRowHandle m_summoningStart; // 0xe0(0x10)
	struct FDataTableRowHandle m_summoningInterrupt; // 0xf0(0x10)
	struct FDataTableRowHandle m_snipedReaction; // 0x100(0x10)
	struct FDataTableRowHandle m_spawning; // 0x110(0x10)
	struct FDataTableRowHandle m_spawningProjectile; // 0x120(0x10)
	struct FDataTableRowHandle m_flinch; // 0x130(0x10)
	struct FDataTableRowHandle m_wingsFlapping; // 0x140(0x10)
	float m_wingsFlappingFadeIn; // 0x150(0x04)
	float m_wingsFlappingFadeOut; // 0x154(0x04)
};

// ScriptStruct Prospect.YAIBarkAudioInfo
// Size: 0x18 (Inherited: 0x00)
struct FYAIBarkAudioInfo {
	struct FDataTableRowHandle m_barkSound; // 0x00(0x10)
	float m_barkIntervalMin; // 0x10(0x04)
	float m_barkIntervalMax; // 0x14(0x04)
};

// ScriptStruct Prospect.YAIEndLoopInfo
// Size: 0x08 (Inherited: 0x00)
struct FYAIEndLoopInfo {
	float m_serverTimestamp; // 0x00(0x04)
	float m_blendOutTime; // 0x04(0x04)
};

// ScriptStruct Prospect.YAIMontagePlayInfo
// Size: 0x20 (Inherited: 0x00)
struct FYAIMontagePlayInfo {
	struct UAnimMontage* m_montage; // 0x00(0x08)
	float m_rootMotionRotationScale; // 0x08(0x04)
	float m_serverTimestamp; // 0x0c(0x04)
	bool m_allowPhysicsRotation; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName m_sectionName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YAIMontageStopInfo
// Size: 0x10 (Inherited: 0x00)
struct FYAIMontageStopInfo {
	struct UAnimMontage* m_montage; // 0x00(0x08)
	float m_serverTimestamp; // 0x08(0x04)
	float m_blendOutTime; // 0x0c(0x04)
};

// ScriptStruct Prospect.YAmmoTypeDataTableRow
// Size: 0x388 (Inherited: 0x310)
struct FYAmmoTypeDataTableRow : FYItemDataTableRowBase {
	struct FDataTableRowHandle m_lootDropHandle; // 0x310(0x10)
	struct FText m_ammoNamePlayerFacing; // 0x320(0x18)
	struct TSoftObjectPtr<struct UMaterialInstance> m_ammoIcon; // 0x338(0x28)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x360(0x28)
};

// ScriptStruct Prospect.YClientMapLoadingStats
// Size: 0xf0 (Inherited: 0xa8)
struct FYClientMapLoadingStats : FYBaseAnalyticsEvent {
	uint32_t map_loading_time; // 0xa8(0x04)
	uint32_t physical_memory_total; // 0xac(0x04)
	uint64_t physical_memory_usage; // 0xb0(0x08)
	uint64_t physical_memory_available; // 0xb8(0x08)
	uint64_t physical_memory_peak; // 0xc0(0x08)
	uint64_t page_size; // 0xc8(0x08)
	uint64_t virtual_memory_total; // 0xd0(0x08)
	uint64_t virtual_memory_usage; // 0xd8(0x08)
	uint64_t virtual_memory_available; // 0xe0(0x08)
	uint64_t virtual_memory_peak; // 0xe8(0x08)
};

// ScriptStruct Prospect.YPlayerQuitEvent
// Size: 0xc8 (Inherited: 0xa8)
struct FYPlayerQuitEvent : FYBaseAnalyticsEvent {
	struct FString Reason; // 0xa8(0x10)
	struct FString game_situation; // 0xb8(0x10)
};

// ScriptStruct Prospect.YAnalyticsHardwareStats
// Size: 0x188 (Inherited: 0xa8)
struct FYAnalyticsHardwareStats : FYBaseAnalyticsEvent {
	struct FString graphic_device_name; // 0xa8(0x10)
	struct FString graphic_device_driver_version; // 0xb8(0x10)
	struct FString graphic_device_vendor; // 0xc8(0x10)
	struct FString graphic_device_id; // 0xd8(0x10)
	int32_t graphic_memory_size; // 0xe8(0x04)
	int32_t graphic_memory_size_dedicated; // 0xec(0x04)
	int32_t graphic_memory_size_shared; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString directx_feature_level; // 0xf8(0x10)
	struct FString cpu_name; // 0x108(0x10)
	int32_t cpu_model; // 0x118(0x04)
	int32_t map_loading_time; // 0x11c(0x04)
	int32_t cpu_stepping; // 0x120(0x04)
	int32_t cpu_processor_frequency; // 0x124(0x04)
	int32_t cpu_processor_count; // 0x128(0x04)
	int32_t cpu_processor_real_count; // 0x12c(0x04)
	int32_t cpu_processor_virtual_count; // 0x130(0x04)
	int32_t system_memory_size; // 0x134(0x04)
	struct FString system_memory_type; // 0x138(0x10)
	struct FString os_name; // 0x148(0x10)
	struct FString os_version; // 0x158(0x10)
	struct FString hard_drive_type; // 0x168(0x10)
	struct FString machine_name; // 0x178(0x10)
};

// ScriptStruct Prospect.YArmorDataTableRow
// Size: 0x370 (Inherited: 0x310)
struct FYArmorDataTableRow : FYItemDataTableRowBase {
	int32_t m_armorAmount; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct FDataTableRowHandle> m_armoredHitZones; // 0x318(0x10)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x328(0x28)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifiers; // 0x350(0x10)
	struct TArray<struct FDataTableRowHandle> m_perks; // 0x360(0x10)
};

// ScriptStruct Prospect.YShieldDataTableRow
// Size: 0x370 (Inherited: 0x370)
struct FYShieldDataTableRow : FYArmorDataTableRow {
};

// ScriptStruct Prospect.YHelmetDataTableRow
// Size: 0x370 (Inherited: 0x370)
struct FYHelmetDataTableRow : FYArmorDataTableRow {
};

// ScriptStruct Prospect.YAssetVariationDefinitionRow
// Size: 0x10 (Inherited: 0x10)
struct FYAssetVariationDefinitionRow : FYDataTableRowBase {
};

// ScriptStruct Prospect.YAudioSettingsRow
// Size: 0x90 (Inherited: 0x10)
struct FYAudioSettingsRow : FYDataTableRowBase {
	float m_announcementInterruptSoundFadeoutTime; // 0x10(0x04)
	float m_fallbackSoundDuration; // 0x14(0x04)
	float m_minDurationAnnouncement; // 0x18(0x04)
	float m_maxDurationAnnouncement; // 0x1c(0x04)
	float m_maxQueueTime; // 0x20(0x04)
	struct FName m_factionIdFallback; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USoundAttenuation* m_soundAttenuationCommWheelVOInWorld; // 0x30(0x08)
	struct USoundAttenuation* m_soundAttenuationEffortsVOInWorld; // 0x38(0x08)
	struct TMap<enum class EYVolumeBusType, struct USoundClass*> m_soundClassesPerVolumeBusType; // 0x40(0x50)
};

// ScriptStruct Prospect.YVOCategoryRow
// Size: 0x28 (Inherited: 0x10)
struct FYVOCategoryRow : FYDataTableRowBase {
	uint32_t m_priority; // 0x10(0x04)
	struct FLinearColor m_color; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YVOSpeakerRow
// Size: 0x48 (Inherited: 0x10)
struct FYVOSpeakerRow : FYDataTableRowBase {
	struct FText m_name; // 0x10(0x18)
	struct UTexture2D* m_icon; // 0x28(0x08)
	struct FText m_description; // 0x30(0x18)
};

// ScriptStruct Prospect.YUIAudioDataTableRow
// Size: 0x18 (Inherited: 0x18)
struct FYUIAudioDataTableRow : FYAudioDataTableRow {
};

// ScriptStruct Prospect.YAudioTagRow
// Size: 0x60 (Inherited: 0x10)
struct FYAudioTagRow : FYDataTableRowBase {
	struct TMap<struct FGameplayTag, struct USoundBase*> m_sounds; // 0x10(0x50)
};

// ScriptStruct Prospect.YPlayerAudioDataTableRow
// Size: 0x3c8 (Inherited: 0x10)
struct FYPlayerAudioDataTableRow : FYDataTableRowBase {
	struct FYInteractionAudio m_interactionAudio; // 0x10(0x20)
	struct FYPlayerHealthAudioData m_healthData; // 0x30(0x48)
	struct FYCommWheelAudioData m_commWheelData; // 0x78(0x50)
	struct FYPlayerAnnouncementAudioData m_announcementData; // 0xc8(0x1c0)
	struct FYPlayerHUDAudioData m_hudAudioData; // 0x288(0xb0)
	struct FYPlayerPactHUDAudioData m_pactHUDAudioData; // 0x338(0x60)
	struct FDataTableRowHandle m_standEventHandle; // 0x398(0x10)
	struct FYPlayerAbilitiesAudioData m_abilities; // 0x3a8(0x20)
};

// ScriptStruct Prospect.YPlayerAbilitiesAudioData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerAbilitiesAudioData {
	struct FDataTableRowHandle m_cloakStartSound; // 0x00(0x10)
	struct FDataTableRowHandle m_cloakEndSound; // 0x10(0x10)
};

// ScriptStruct Prospect.YPlayerPactHUDAudioData
// Size: 0x60 (Inherited: 0x00)
struct FYPlayerPactHUDAudioData {
	struct FDataTableRowHandle m_pactInviteIssued; // 0x00(0x10)
	struct FDataTableRowHandle m_pactInviteReceived; // 0x10(0x10)
	struct FDataTableRowHandle m_pactInviteExpired; // 0x20(0x10)
	struct FDataTableRowHandle m_pactStarted; // 0x30(0x10)
	struct FDataTableRowHandle m_pactCancelled; // 0x40(0x10)
	struct FDataTableRowHandle m_pactEnded; // 0x50(0x10)
};

// ScriptStruct Prospect.YPlayerHUDAudioData
// Size: 0xb0 (Inherited: 0x00)
struct FYPlayerHUDAudioData {
	struct FDataTableRowHandle m_gearStoreSuccessfulPurchase; // 0x00(0x10)
	struct FDataTableRowHandle m_matchStarted; // 0x10(0x10)
	struct FDataTableRowHandle m_levelUp; // 0x20(0x10)
	struct FDataTableRowHandle m_maxLevel; // 0x30(0x10)
	struct FDataTableRowHandle m_scoreFromTeammate; // 0x40(0x10)
	struct FDataTableRowHandle m_scoreFromSelf; // 0x50(0x10)
	struct FDataTableRowHandle m_socialActorPing; // 0x60(0x10)
	struct TArray<struct FYLootNotificationAudioData> m_lootNotifications; // 0x70(0x10)
	struct FDataTableRowHandle m_abilityActivationDeniedDueCooldown; // 0x80(0x10)
	struct FDataTableRowHandle m_weaponDropFromInventory; // 0x90(0x10)
	struct FDataTableRowHandle m_abilityDropFromInventory; // 0xa0(0x10)
};

// ScriptStruct Prospect.YLootNotificationAudioData
// Size: 0x18 (Inherited: 0x00)
struct FYLootNotificationAudioData {
	enum class EYItemRarityType m_rarity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_lootNotification; // 0x08(0x10)
};

// ScriptStruct Prospect.YPlayerAnnouncementAudioData
// Size: 0x1c0 (Inherited: 0x00)
struct FYPlayerAnnouncementAudioData {
	struct FDataTableRowHandle m_gearStoreSuccessfulPurchase; // 0x00(0x10)
	struct FDataTableRowHandle m_gearStoreSuccessfulUpgrade; // 0x10(0x10)
	struct FDataTableRowHandle m_levelUp; // 0x20(0x10)
	struct FDataTableRowHandle m_maxLevel; // 0x30(0x10)
	struct FDataTableRowHandle m_pactInviteIssued; // 0x40(0x10)
	struct FDataTableRowHandle m_pactInviteReceived; // 0x50(0x10)
	struct FDataTableRowHandle m_pactAccepted; // 0x60(0x10)
	struct FDataTableRowHandle m_pactDeclined; // 0x70(0x10)
	struct FDataTableRowHandle m_pactStartCancellation; // 0x80(0x10)
	struct FDataTableRowHandle m_pactEnded; // 0x90(0x10)
	struct FDataTableRowHandle m_pactMateRevived; // 0xa0(0x10)
	struct FDataTableRowHandle m_suitPactmateDied; // 0xb0(0x10)
	struct FDataTableRowHandle m_suitHealthWarningStart; // 0xc0(0x10)
	struct FDataTableRowHandle m_BFCEscapeSuccess; // 0xd0(0x10)
	struct FDataTableRowHandle m_BFCEscapeFailure; // 0xe0(0x10)
	struct FDataTableRowHandle m_BFCPlayerDiedbyMonster; // 0xf0(0x10)
	struct FDataTableRowHandle m_BFCPlayedDiedbyPlayer; // 0x100(0x10)
	struct FDataTableRowHandle m_BFCYouKilledaPlayer; // 0x110(0x10)
	struct FDataTableRowHandle m_SuitPlayerEnterDBNO; // 0x120(0x10)
	struct FDataTableRowHandle m_SuitPlayerRevived; // 0x130(0x10)
	struct FDataTableRowHandle m_suitStartExecuting; // 0x140(0x10)
	struct FDataTableRowHandle m_suitStartReviving; // 0x150(0x10)
	struct FDataTableRowHandle m_bountyAnnounced; // 0x160(0x10)
	struct FDataTableRowHandle m_localPlayerGottenBounty; // 0x170(0x10)
	struct FDataTableRowHandle m_bountyCollected; // 0x180(0x10)
	struct FDataTableRowHandle m_localPlayerBountyTaken; // 0x190(0x10)
	struct FDataTableRowHandle m_bountyTimedOut; // 0x1a0(0x10)
	struct FDataTableRowHandle m_localPlayerBountyTimedOut; // 0x1b0(0x10)
};

// ScriptStruct Prospect.YCommWheelAudioData
// Size: 0x50 (Inherited: 0x00)
struct FYCommWheelAudioData {
	struct FDataTableRowHandle m_onOpenCommWheel; // 0x00(0x10)
	struct FDataTableRowHandle m_onOpenSubCommWheel; // 0x10(0x10)
	struct FDataTableRowHandle m_onAbortCommWheel; // 0x20(0x10)
	struct FDataTableRowHandle m_onHoverOverItem; // 0x30(0x10)
	struct FDataTableRowHandle m_onCommandInput; // 0x40(0x10)
};

// ScriptStruct Prospect.YPlayerHealthAudioData
// Size: 0x48 (Inherited: 0x00)
struct FYPlayerHealthAudioData {
	float m_playLowHealthAlarmAtPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDataTableRowHandle m_lowHealthAlarmStart; // 0x08(0x10)
	struct FDataTableRowHandle m_lowHealthAlarmStop; // 0x18(0x10)
	struct FDataTableRowHandle m_lowHealthAlarmStopDBNO; // 0x28(0x10)
	struct FDataTableRowHandle m_fallingDamageEvent; // 0x38(0x10)
};

// ScriptStruct Prospect.YInteractionAudio
// Size: 0x20 (Inherited: 0x00)
struct FYInteractionAudio {
	struct FDataTableRowHandle m_lootContainerOpen; // 0x00(0x10)
	struct FDataTableRowHandle m_lootContainerClose; // 0x10(0x10)
};

// ScriptStruct Prospect.YWeaponAudioDataTableRow
// Size: 0x248 (Inherited: 0x10)
struct FYWeaponAudioDataTableRow : FYDataTableRowBase {
	struct TSoftObjectPtr<struct USoundBase> m_startSpinUpSound; // 0x10(0x28)
	float m_spinUpSoundFadeOut; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<struct USoundBase> m_startFiringSound; // 0x40(0x28)
	float m_firingSoundFadeOut; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TSoftObjectPtr<struct USoundBase> m_weaponFiredSound; // 0x70(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_weaponTailSound; // 0x98(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_weaponSilencedFiredSound; // 0xc0(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_weaponSilencedTailSound; // 0xe8(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_stopFiringSound; // 0x110(0x28)
	float m_stopFiringDelay; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TSoftObjectPtr<struct USoundBase> m_burstCompleteSound; // 0x140(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_equipWeaponSound; // 0x168(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_unequipWeaponSound; // 0x190(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_outOfAmmoInClipSound; // 0x1b8(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_outOfAmmoSound; // 0x1e0(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_targetingCompleteSound; // 0x208(0x28)
	struct TArray<struct TSoftObjectPtr<struct USoundBase>> m_reloadSounds; // 0x230(0x10)
	bool m_runAutomationTest; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
};

// ScriptStruct Prospect.YElasticsearchData
// Size: 0xf0 (Inherited: 0x00)
struct FYElasticsearchData {
	struct TMap<struct FString, int32_t> metricsNumericData; // 0x00(0x50)
	struct TMap<struct FString, struct FString> metricsStringData; // 0x50(0x50)
	struct TMap<struct FString, bool> metricsBoolData; // 0xa0(0x50)
};

// ScriptStruct Prospect.YEditorMetricsData
// Size: 0xf0 (Inherited: 0x00)
struct FYEditorMetricsData {
	struct TMap<struct FString, int32_t> metricsNumericData; // 0x00(0x50)
	struct TMap<struct FString, struct FString> metricsStringData; // 0x50(0x50)
	struct TMap<struct FString, bool> metricsBoolData; // 0xa0(0x50)
};

// ScriptStruct Prospect.YWeaponModCombinationWithDamage
// Size: 0x30 (Inherited: 0x08)
struct FYWeaponModCombinationWithDamage : FTableRowBase {
	struct FName m_weaponName; // 0x08(0x08)
	struct TArray<struct FName> m_modCombinations; // 0x10(0x10)
	struct FName m_targetName; // 0x20(0x08)
	float m_damageDealt; // 0x28(0x04)
	float m_distanceToTarget; // 0x2c(0x04)
};

// ScriptStruct Prospect.YPlayerAutomationData
// Size: 0x58 (Inherited: 0x00)
struct FYPlayerAutomationData {
	struct FYAutomationLoadingMetrics m_loadingMetrics; // 0x00(0x50)
	bool m_finishedInitialization; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Prospect.YAutomationLoadingMetrics
// Size: 0x50 (Inherited: 0x00)
struct FYAutomationLoadingMetrics {
	struct TMap<struct FString, int32_t> m_timesLoadedMap; // 0x00(0x50)
};

// ScriptStruct Prospect.YWeaponSuitableModsCombination
// Size: 0x10 (Inherited: 0x00)
struct FYWeaponSuitableModsCombination {
	struct TArray<struct FName> m_modCombinations; // 0x00(0x10)
};

// ScriptStruct Prospect.YWeaponSuitableMods
// Size: 0x18 (Inherited: 0x00)
struct FYWeaponSuitableMods {
	struct TArray<struct FName> m_modNames; // 0x00(0x10)
	enum class EYModificationSlotType m_modificationSlotType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YBannerVanityRow
// Size: 0x3e0 (Inherited: 0x378)
struct FYBannerVanityRow : FYVanityItemRowBase {
	struct TSoftObjectPtr<struct UParticleSystem> m_particleSystem; // 0x378(0x28)
	struct TArray<struct TSoftObjectPtr<struct USoundBase>> m_sounds; // 0x3a0(0x10)
	struct FLinearColor m_particleSystemColor; // 0x3b0(0x10)
	struct FText m_secondPlateText; // 0x3c0(0x18)
	bool m_isPublished; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
};

// ScriptStruct Prospect.YBIHook_EscapeTriggered
// Size: 0xf0 (Inherited: 0xa8)
struct FYBIHook_EscapeTriggered : FYBaseAnalyticsEvent {
	int32_t time_since_match_start; // 0xa8(0x04)
	int32_t time_since_user_joined; // 0xac(0x04)
	int32_t position_x; // 0xb0(0x04)
	int32_t position_y; // 0xb4(0x04)
	int32_t position_z; // 0xb8(0x04)
	int32_t player_position_x; // 0xbc(0x04)
	int32_t player_position_y; // 0xc0(0x04)
	int32_t player_position_z; // 0xc4(0x04)
	int32_t Status; // 0xc8(0x04)
	int32_t cooldown_duration; // 0xcc(0x04)
	struct FString escape_ship_id; // 0xd0(0x10)
	struct FString evac_id; // 0xe0(0x10)
};

// ScriptStruct Prospect.YBIHook_GetPvpDamage
// Size: 0x100 (Inherited: 0xa8)
struct FYBIHook_GetPvpDamage : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8(0x04)
	int32_t location_y; // 0xac(0x04)
	int32_t location_z; // 0xb0(0x04)
	int32_t location_x_attacker; // 0xb4(0x04)
	int32_t location_y_attacker; // 0xb8(0x04)
	int32_t location_z_attacker; // 0xbc(0x04)
	int32_t time_since_match_start; // 0xc0(0x04)
	int32_t time_since_user_joined; // 0xc4(0x04)
	struct FString equipped_weapon; // 0xc8(0x10)
	int32_t health_when_attacked; // 0xd8(0x04)
	int32_t attacker_damage; // 0xdc(0x04)
	struct FString attacker_weapon_id; // 0xe0(0x10)
	struct FString attacker_user_id; // 0xf0(0x10)
};

// ScriptStruct Prospect.YBIHook_LootAreaPhases
// Size: 0xe0 (Inherited: 0xa8)
struct FYBIHook_LootAreaPhases : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8(0x04)
	int32_t location_y; // 0xac(0x04)
	int32_t Radius; // 0xb0(0x04)
	int32_t time_since_match_start; // 0xb4(0x04)
	int32_t Status; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString threshold_values; // 0xc0(0x10)
	struct FString loot_area_name; // 0xd0(0x10)
};

// ScriptStruct Prospect.YBIHook_MinimapOpen
// Size: 0xb0 (Inherited: 0xa8)
struct FYBIHook_MinimapOpen : FYBaseAnalyticsEvent {
	int32_t time_since_user_joined; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Prospect.YControlsSettingsChangedEvent
// Size: 0xb8 (Inherited: 0xa8)
struct FYControlsSettingsChangedEvent : FYBaseAnalyticsEvent {
	float sensitivity; // 0xa8(0x04)
	float ads_sensitivity; // 0xac(0x04)
	bool invert_x_axis; // 0xb0(0x01)
	bool invert_y_axis; // 0xb1(0x01)
	bool mouse_smoothing; // 0xb2(0x01)
	bool fov_based_sensitivity_scaling; // 0xb3(0x01)
	bool sprint_toggle; // 0xb4(0x01)
	bool crouch_toggle; // 0xb5(0x01)
	bool targeting_toggle; // 0xb6(0x01)
	bool leaning_toggle; // 0xb7(0x01)
};

// ScriptStruct Prospect.YAudioSettingsChangedEvent
// Size: 0xd0 (Inherited: 0xa8)
struct FYAudioSettingsChangedEvent : FYBaseAnalyticsEvent {
	float master_volume; // 0xa8(0x04)
	float music_volume; // 0xac(0x04)
	float sound_effects_volume; // 0xb0(0x04)
	float dialogue_volume; // 0xb4(0x04)
	float ui_volume; // 0xb8(0x04)
	float hitmarker_volume; // 0xbc(0x04)
	float input_volume; // 0xc0(0x04)
	float output_volume; // 0xc4(0x04)
	bool push_to_talk; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Prospect.YBIHook_TutorialTnc
// Size: 0xc0 (Inherited: 0xa8)
struct FYBIHook_TutorialTnc : FYBaseAnalyticsEvent {
	int32_t step; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString Action; // 0xb0(0x10)
};

// ScriptStruct Prospect.YBossEncounterTrackingData
// Size: 0xd0 (Inherited: 0x00)
struct FYBossEncounterTrackingData {
	struct FYBossEncounterActivityStats m_stats; // 0x00(0xc8)
	int32_t m_firstInteractionTimeStamp; // 0xc8(0x04)
	int32_t m_lastInteractionTimeStamp; // 0xcc(0x04)
};

// ScriptStruct Prospect.YBaseActivityStats
// Size: 0xb8 (Inherited: 0xa8)
struct FYBaseActivityStats : FYBaseAnalyticsEvent {
	int32_t position_x; // 0xa8(0x04)
	int32_t position_y; // 0xac(0x04)
	int32_t position_z; // 0xb0(0x04)
	int32_t time_since_match_start; // 0xb4(0x04)
};

// ScriptStruct Prospect.YBossEncounterActivityStats
// Size: 0xc8 (Inherited: 0xb8)
struct FYBossEncounterActivityStats : FYBaseActivityStats {
	int32_t boss_damage_done; // 0xb8(0x04)
	int32_t boss_damage_taken; // 0xbc(0x04)
	int32_t encounter_duration; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct Prospect.YContractsInteractionAnalyticsEvent
// Size: 0xf0 (Inherited: 0xa8)
struct FYContractsInteractionAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FString faction_name; // 0xa8(0x10)
	struct FString contract1; // 0xb8(0x10)
	struct FString contract2; // 0xc8(0x10)
	struct FString contract3; // 0xd8(0x10)
	int32_t Action; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Prospect.YActivityBigDrillFlyToAnalyticsEvent
// Size: 0xc0 (Inherited: 0xb8)
struct FYActivityBigDrillFlyToAnalyticsEvent : FYBaseActivityStats {
	int32_t target_position_x; // 0xb8(0x04)
	int32_t target_position_y; // 0xbc(0x04)
};

// ScriptStruct Prospect.YPainTrainActivityStats
// Size: 0xc0 (Inherited: 0xb8)
struct FYPainTrainActivityStats : FYBaseActivityStats {
	enum class EYPainTrainStatus Status; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t pain_train_id; // 0xbc(0x04)
};

// ScriptStruct Prospect.YActivityAnalyticsEvent
// Size: 0xd0 (Inherited: 0xb8)
struct FYActivityAnalyticsEvent : FYBaseActivityStats {
	enum class EYActivityType Activity; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString activitySubType; // 0xc0(0x10)
};

// ScriptStruct Prospect.YUplinkActivityStats
// Size: 0xe0 (Inherited: 0xb8)
struct FYUplinkActivityStats : FYBaseActivityStats {
	int32_t time_since_user_joined; // 0xb8(0x04)
	int32_t last_state; // 0xbc(0x04)
	struct FString item_rarity; // 0xc0(0x10)
	struct FString uplink_name; // 0xd0(0x10)
};

// ScriptStruct Prospect.YPowerUpActivityStats
// Size: 0xe0 (Inherited: 0xb8)
struct FYPowerUpActivityStats : FYBaseActivityStats {
	int32_t power_up_step; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString power_up_id; // 0xc0(0x10)
	bool contested; // 0xd0(0x01)
	bool contested_long; // 0xd1(0x01)
	bool dealt_damage; // 0xd2(0x01)
	bool dealt_damage_long; // 0xd3(0x01)
	int32_t time_since_user_joined; // 0xd4(0x04)
	int32_t puzzle_variation; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Prospect.YMineralActivityStats
// Size: 0x100 (Inherited: 0xb8)
struct FYMineralActivityStats : FYBaseActivityStats {
	struct FString mineral_type; // 0xb8(0x10)
	struct FString mineral_id; // 0xc8(0x10)
	struct FString used_tool; // 0xd8(0x10)
	int32_t remaining_segments; // 0xe8(0x04)
	int32_t total_segment_count; // 0xec(0x04)
	int32_t time_since_user_joined; // 0xf0(0x04)
	int32_t time_spent; // 0xf4(0x04)
	int32_t total_hit_count; // 0xf8(0x04)
	bool contested; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// ScriptStruct Prospect.YMeteorActivityStats
// Size: 0xd0 (Inherited: 0xb8)
struct FYMeteorActivityStats : FYBaseActivityStats {
	int32_t Status; // 0xb8(0x04)
	int32_t player_position_x; // 0xbc(0x04)
	int32_t player_position_y; // 0xc0(0x04)
	int32_t player_position_z; // 0xc4(0x04)
	int32_t time_since_user_joined; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Prospect.YMenuCameraCustomizationCategoryAssociation
// Size: 0x40 (Inherited: 0x00)
struct FYMenuCameraCustomizationCategoryAssociation {
	enum class EYCustomizationCategory m_category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* m_cameraActor; // 0x08(0x08)
	struct AActor* m_pointOfInterest; // 0x10(0x08)
	struct FVector m_startLocation; // 0x18(0x0c)
	struct FVector m_startTowardsPointOfInterest; // 0x24(0x0c)
	float m_angleRestriction; // 0x30(0x04)
	float m_blendTime; // 0x34(0x04)
	bool m_allowYawRotation; // 0x38(0x01)
	bool m_allowPitchRotation; // 0x39(0x01)
	enum class EYCameraIntentionType m_visualizationIntention; // 0x3a(0x01)
	enum class EYCameraDistanceType m_distanceType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Prospect.YCameraItemRow
// Size: 0x90 (Inherited: 0x10)
struct FYCameraItemRow : FYDataTableRowBase {
	struct FVector m_bpLocation; // 0x10(0x0c)
	struct FVector m_bpRotation; // 0x1c(0x0c)
	struct FVector m_bpScale; // 0x28(0x0c)
	struct FVector m_meshLocation; // 0x34(0x0c)
	struct FVector m_meshRotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDataTableRowHandle m_item; // 0x50(0x10)
	struct FString m_overridePreviewCamera; // 0x60(0x10)
	struct FString m_cameraDefault; // 0x70(0x10)
	struct FString m_cameraFaction; // 0x80(0x10)
};

// ScriptStruct Prospect.YBagDataTableRow
// Size: 0x380 (Inherited: 0x310)
struct FYBagDataTableRow : FYItemDataTableRowBase {
	int32_t m_weightLimit; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FYMeshAttachment m_bagBase; // 0x318(0x58)
	struct TArray<struct FYMeshAttachment> m_bagAttachments; // 0x370(0x10)
};

// ScriptStruct Prospect.YMeshAttachment
// Size: 0x58 (Inherited: 0x00)
struct FYMeshAttachment {
	struct FName m_socket; // 0x00(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> m_mesh; // 0x08(0x28)
	struct TSoftObjectPtr<struct UMaterialInterface> m_materialOverride; // 0x30(0x28)
};

// ScriptStruct Prospect.YCameraTransitionData
// Size: 0x0c (Inherited: 0x00)
struct FYCameraTransitionData {
	enum class EYPlayerStateBlueprint m_playerState; // 0x00(0x01)
	enum class EYStateCancelationBehavior m_stateCancelBehavior; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float m_duration; // 0x04(0x04)
	bool m_transitionTowardsFirstPerson; // 0x08(0x01)
	bool m_clearTranslationOffsetOnCompletion; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Prospect.YCloakRuntimeData
// Size: 0x18 (Inherited: 0x00)
struct FYCloakRuntimeData {
	bool m_isActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_rowHandle; // 0x08(0x10)
};

// ScriptStruct Prospect.YCloakDataRow
// Size: 0x20 (Inherited: 0x10)
struct FYCloakDataRow : FYDataTableRowBase {
	struct UMaterialInterface* m_cloakMaterial; // 0x10(0x08)
	struct FName m_midOptionalParameter; // 0x18(0x08)
};

// ScriptStruct Prospect.YCloakMaterialsInfo
// Size: 0x18 (Inherited: 0x00)
struct FYCloakMaterialsInfo {
	struct TArray<struct UMaterialInterface*> m_materials; // 0x00(0x10)
	struct UMeshComponent* m_meshComponent; // 0x10(0x08)
};

// ScriptStruct Prospect.YDeathAnimMontageInfo
// Size: 0x138 (Inherited: 0x00)
struct FYDeathAnimMontageInfo {
	enum class EYDeathType m_deathType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* m_montage; // 0x08(0x08)
	bool m_deathToRagdoll; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float m_serverTimestamp; // 0x14(0x04)
	struct FYDealtDamageData m_lastTimeDamagedData; // 0x18(0x100)
	struct FGameplayTagContainer m_deathAnimationGameplayTags; // 0x118(0x20)
};

// ScriptStruct Prospect.YSelectedEmote
// Size: 0x08 (Inherited: 0x00)
struct FYSelectedEmote {
	int32_t m_activeEmoteIndex; // 0x00(0x04)
	int32_t m_selectedEmoteTimeStamp; // 0x04(0x04)
};

// ScriptStruct Prospect.YLocationData
// Size: 0x28 (Inherited: 0x10)
struct FYLocationData : FYDataTableRowBase {
	struct FText m_locationName; // 0x10(0x18)
};

// ScriptStruct Prospect.YStatusEffectRuntimeData
// Size: 0x58 (Inherited: 0x00)
struct FYStatusEffectRuntimeData {
	float m_damagePerTick; // 0x00(0x04)
	float m_damageTickFrequency; // 0x04(0x04)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x08(0x28)
	float m_lastDamageTickTimestamp; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct TWeakObjectPtr<struct AActor>> m_actors; // 0x38(0x10)
	struct TArray<struct FGuid> m_perkGuids; // 0x48(0x10)
};

// ScriptStruct Prospect.YStatusEffectAreaRow
// Size: 0x50 (Inherited: 0x10)
struct FYStatusEffectAreaRow : FYDataTableRowBase {
	float m_damagePerTick; // 0x10(0x04)
	float m_damageTickFrequency; // 0x14(0x04)
	struct TArray<struct FDataTableRowHandle> m_perksToApply; // 0x18(0x10)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x28(0x28)
};

// ScriptStruct Prospect.YCharacterExplicitCustomizationDataRow
// Size: 0x3d0 (Inherited: 0x378)
struct FYCharacterExplicitCustomizationDataRow : FYVanityItemRowBase {
	enum class EYCustomizationBodyType m_bodyType; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TMap<enum class EYCustomizationCategory, struct FYCharacterArchetypeDefaultItemEntry> m_defaultItems; // 0x380(0x50)
};

// ScriptStruct Prospect.YNormalEmoteDataTableRow
// Size: 0x400 (Inherited: 0x400)
struct FYNormalEmoteDataTableRow : FYCharacterCustomizationRowBase {
};

// ScriptStruct Prospect.YDeathEmoteDataTableRow
// Size: 0x410 (Inherited: 0x400)
struct FYDeathEmoteDataTableRow : FYCharacterCustomizationRowBase {
	struct FLinearColor m_characterFoamColor; // 0x400(0x10)
};

// ScriptStruct Prospect.YMeleeVanityDataTableRow
// Size: 0x400 (Inherited: 0x400)
struct FYMeleeVanityDataTableRow : FYCharacterCustomizationRowBase {
};

// ScriptStruct Prospect.YCustomizationExplicitActorInitializationData
// Size: 0x140 (Inherited: 0x00)
struct FYCustomizationExplicitActorInitializationData {
	struct FYActiveCustomizationData m_customizationData; // 0x00(0x20)
	struct FYActiveGlobalRuntimeVanityData m_globalVanityData; // 0x20(0x80)
	struct FYCharacterVisualizationRuntimeData m_visualizationData; // 0xa0(0x02)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FYInventoryItem m_overrideWeaponHandle; // 0xa8(0x98)
};

// ScriptStruct Prospect.YCharacterVisualizationRuntimeData
// Size: 0x02 (Inherited: 0x00)
struct FYCharacterVisualizationRuntimeData {
	enum class EYCustomizationCategory m_category; // 0x00(0x01)
	enum class EYVanityType m_vanityTypeToPreview; // 0x01(0x01)
};

// ScriptStruct Prospect.YCharacterCustomizationSetRow
// Size: 0x3a0 (Inherited: 0x378)
struct FYCharacterCustomizationSetRow : FYVanityItemRowBase {
	enum class EYCustomizationCategory m_customizationCategoryType; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> m_colorVariationIcons; // 0x380(0x10)
	struct TArray<struct FYCharacterCustomizationSetItem> m_items; // 0x390(0x10)
};

// ScriptStruct Prospect.YCharacterCustomizationSetItem
// Size: 0x20 (Inherited: 0x00)
struct FYCharacterCustomizationSetItem {
	struct TArray<enum class EYCharacterCustomizationColorType> m_colorType; // 0x00(0x10)
	struct FDataTableRowHandle m_rowHandle; // 0x10(0x10)
};

// ScriptStruct Prospect.YCharacterCustomizationDefaultDataRow
// Size: 0x28 (Inherited: 0x10)
struct FYCharacterCustomizationDefaultDataRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_defaultArchetype; // 0x10(0x10)
	int32_t m_maxAmountOfSlots; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationSlotRow
// Size: 0x60 (Inherited: 0x10)
struct FYCharacterCustomizationSlotRow : FYDataTableRowBase {
	struct FText m_name; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_icon; // 0x28(0x28)
	enum class EYCustomizationCategory m_category; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName m_defaultSocketAttachmentName; // 0x54(0x08)
	bool m_containColorSelection; // 0x5c(0x01)
	bool m_visualizedOnlyAtCustomizationItemPreview; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct Prospect.YMaterialVariationDataRowBase
// Size: 0x3d8 (Inherited: 0x378)
struct FYMaterialVariationDataRowBase : FYVanityItemRowBase {
	struct FYCharacterCustomizationPieceCollection m_data; // 0x378(0x50)
	struct FDataTableRowHandle m_basePreviewRow; // 0x3c8(0x10)
};

// ScriptStruct Prospect.YCharacterRotationUpdateRequestData
// Size: 0x10 (Inherited: 0x00)
struct FYCharacterRotationUpdateRequestData {
	float m_deltaTime; // 0x00(0x04)
	struct FVector2D m_rotationDelta; // 0x04(0x08)
	bool m_resetRotation; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Prospect.YUpdateBodyPartRequestData
// Size: 0x30 (Inherited: 0x00)
struct FYUpdateBodyPartRequestData {
	struct FDataTableRowHandle m_baseHandle; // 0x00(0x10)
	int32_t m_materialIndex; // 0x10(0x04)
	enum class EYCharacterItemColumnType m_requestType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString m_archetypeID; // 0x18(0x10)
	bool m_forceIgnoreBackendDebug; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YJoinChannelRequestData
// Size: 0x18 (Inherited: 0x00)
struct FYJoinChannelRequestData {
	enum class EYChannelType m_type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_channelId; // 0x08(0x10)
};

// ScriptStruct Prospect.YChatHistoryEntry
// Size: 0x38 (Inherited: 0x00)
struct FYChatHistoryEntry {
	struct FYChatMessageInputData m_data; // 0x00(0x30)
	float m_timeSent; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YChatMessageInputData
// Size: 0x30 (Inherited: 0x00)
struct FYChatMessageInputData {
	struct FYMessage m_message; // 0x00(0x28)
	bool m_propogateDataToChatAPI; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YChatSettingsDataTableRow
// Size: 0x70 (Inherited: 0x10)
struct FYChatSettingsDataTableRow : FYDataTableRowBase {
	float m_mutingDuration; // 0x10(0x04)
	int32_t m_amountOfUsersToTrackMessages; // 0x14(0x04)
	int32_t m_amountOfChatMessageToSendAtReport; // 0x18(0x04)
	float m_msPerAppliedIssueRequest; // 0x1c(0x04)
	struct TMap<enum class EYChannelType, struct FYChannelSettings> m_channelSettings; // 0x20(0x50)
};

// ScriptStruct Prospect.YChannelSettings
// Size: 0x60 (Inherited: 0x00)
struct FYChannelSettings {
	struct FString m_defaultChannelId; // 0x00(0x10)
	struct FText m_channelText; // 0x10(0x18)
	struct FString m_localizationShortName; // 0x28(0x10)
	bool m_defaultHaveText; // 0x38(0x01)
	bool m_defaultHaveAudio; // 0x39(0x01)
	bool m_isGlobalChatChannel; // 0x3a(0x01)
	bool m_switchToChannelOnAddIfDesired; // 0x3b(0x01)
	bool m_alwaysSwitchToChannelOnAdd; // 0x3c(0x01)
	bool m_shouldCacheMessagesIfNotConnected; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	int32_t m_amountOfAllowedMessagesGivenThreshold; // 0x40(0x04)
	float m_messagesSpamIntervalCheck; // 0x44(0x04)
	struct FYChannelProximityChatSettings m_channelProximityChatSettings; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Prospect.YChannelProximityChatSettings
// Size: 0x14 (Inherited: 0x00)
struct FYChannelProximityChatSettings {
	bool m_isProximityVoiceChatEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t m_audibleDistance; // 0x04(0x04)
	int32_t m_conversationalDistance; // 0x08(0x04)
	float m_audioFadeIntensityByDistance; // 0x0c(0x04)
	enum class EYVivoxAudioFadeModel m_audioFadeModel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Prospect.YUpgradeDebugChange
// Size: 0x98 (Inherited: 0x00)
struct FYUpgradeDebugChange {
	struct FYInventoryItem m_desiredItem; // 0x00(0x98)
};

// ScriptStruct Prospect.YCollectibleLootBucketRow
// Size: 0x20 (Inherited: 0x10)
struct FYCollectibleLootBucketRow : FYDataTableRowBase {
	struct TArray<struct FDataTableRowHandle> m_bucketItems; // 0x10(0x10)
};

// ScriptStruct Prospect.YCollectibleLootPoolRow
// Size: 0x20 (Inherited: 0x10)
struct FYCollectibleLootPoolRow : FYDataTableRowBase {
	struct TArray<struct FYCollectibleLootBucket> m_lootBuckets; // 0x10(0x10)
};

// ScriptStruct Prospect.YCollectibleLootBucket
// Size: 0x18 (Inherited: 0x00)
struct FYCollectibleLootBucket {
	float m_weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDataTableRowHandle m_bucketRowHandle; // 0x08(0x10)
};

// ScriptStruct Prospect.YCollectibleRow
// Size: 0x360 (Inherited: 0x310)
struct FYCollectibleRow : FYItemDataTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x310(0x28)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x338(0x28)
};

// ScriptStruct Prospect.YKeybindingAnalyticsEvent
// Size: 0xf8 (Inherited: 0xa8)
struct FYKeybindingAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FString input_name; // 0xa8(0x10)
	struct FString primary_old; // 0xb8(0x10)
	struct FString primary_new; // 0xc8(0x10)
	struct FString secondary_old; // 0xd8(0x10)
	struct FString secondary_new; // 0xe8(0x10)
};

// ScriptStruct Prospect.YDurabilityAnalyticsEvent
// Size: 0x118 (Inherited: 0xa8)
struct FYDurabilityAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FString Status; // 0xa8(0x10)
	struct FString item_id; // 0xb8(0x10)
	struct FString item_instance_id; // 0xc8(0x10)
	struct FString item_name; // 0xd8(0x10)
	struct FString item_type; // 0xe8(0x10)
	struct FString item_rarity; // 0xf8(0x10)
	int32_t damage_taken; // 0x108(0x04)
	int32_t used; // 0x10c(0x04)
	int32_t current_durability; // 0x110(0x04)
	int32_t max_durability; // 0x114(0x04)
};

// ScriptStruct Prospect.YMeleeAttackBI
// Size: 0xf0 (Inherited: 0xa8)
struct FYMeleeAttackBI : FYBaseAnalyticsEvent {
	int32_t attack_type; // 0xa8(0x04)
	bool Hit; // 0xac(0x01)
	bool backstab; // 0xad(0x01)
	bool out_of_stamina; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	int32_t damage_done; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString enemy_id; // 0xb8(0x10)
	struct FString enemy_name; // 0xc8(0x10)
	struct FString enemy_status; // 0xd8(0x10)
	int32_t time_since_user_joined; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Prospect.YAccountLinking
// Size: 0xf8 (Inherited: 0xa8)
struct FYAccountLinking : FYBaseAnalyticsEvent {
	struct FString platform_user_id; // 0xa8(0x10)
	struct FString user_name; // 0xb8(0x10)
	struct FString linked_user_id; // 0xc8(0x10)
	struct FString linked_platform_user_id; // 0xd8(0x10)
	struct FString Error; // 0xe8(0x10)
};

// ScriptStruct Prospect.YPopUpEvent
// Size: 0xf0 (Inherited: 0xa8)
struct FYPopUpEvent : FYBaseAnalyticsEvent {
	struct FString pop_up_name; // 0xa8(0x10)
	struct FString action_type; // 0xb8(0x10)
	struct FString player_action; // 0xc8(0x10)
	struct FString Content; // 0xd8(0x10)
	int32_t time_to_action; // 0xe8(0x04)
	int32_t dont_show_again; // 0xec(0x04)
};

// ScriptStruct Prospect.YFriendListBI
// Size: 0xd8 (Inherited: 0xa8)
struct FYFriendListBI : FYBaseAnalyticsEvent {
	struct FString target_user_id; // 0xa8(0x10)
	struct FString action_name; // 0xb8(0x10)
	struct FString screen; // 0xc8(0x10)
};

// ScriptStruct Prospect.YPlayerQuartersLevelUpBI
// Size: 0xb0 (Inherited: 0xa8)
struct FYPlayerQuartersLevelUpBI : FYBaseAnalyticsEvent {
	int32_t quarters_level; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Prospect.YProspectorLevelUp
// Size: 0xb0 (Inherited: 0xa8)
struct FYProspectorLevelUp : FYBaseAnalyticsEvent {
	int32_t prospector_level; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Prospect.YProspectorLevelXpGained
// Size: 0xc8 (Inherited: 0xa8)
struct FYProspectorLevelXpGained : FYBaseAnalyticsEvent {
	int32_t Amount; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString Source; // 0xb0(0x10)
	int32_t prospector_level; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct Prospect.YVanityUsage
// Size: 0xe8 (Inherited: 0xa8)
struct FYVanityUsage : FYBaseAnalyticsEvent {
	int32_t vanity_type; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString Location; // 0xb0(0x10)
	struct FString item_id; // 0xc0(0x10)
	struct FString item_name; // 0xd0(0x10)
	int32_t time_since_match_start; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct Prospect.YButtonClickedEvent
// Size: 0xc8 (Inherited: 0xa8)
struct FYButtonClickedEvent : FYBaseAnalyticsEvent {
	struct FString button_name; // 0xa8(0x10)
	struct FString parent_name; // 0xb8(0x10)
};

// ScriptStruct Prospect.YStationInteractionEvent
// Size: 0xc8 (Inherited: 0xa8)
struct FYStationInteractionEvent : FYBaseAnalyticsEvent {
	struct FString station_id; // 0xa8(0x10)
	struct FString station_name; // 0xb8(0x10)
};

// ScriptStruct Prospect.YStationMessage
// Size: 0xd0 (Inherited: 0xa8)
struct FYStationMessage : FYBaseAnalyticsEvent {
	struct FString message_id; // 0xa8(0x10)
	struct FString message_name; // 0xb8(0x10)
	bool Status; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Prospect.YChallengeCompletedEvent
// Size: 0xb8 (Inherited: 0xa8)
struct FYChallengeCompletedEvent : FYBaseAnalyticsEvent {
	struct FName quest_id; // 0xa8(0x08)
	int32_t quest_category; // 0xb0(0x04)
	int32_t season_xp; // 0xb4(0x04)
};

// ScriptStruct Prospect.YChallengeProgressedEvent
// Size: 0xc0 (Inherited: 0xa8)
struct FYChallengeProgressedEvent : FYBaseAnalyticsEvent {
	struct FName quest_id; // 0xa8(0x08)
	int32_t quest_category; // 0xb0(0x04)
	int32_t progress_count; // 0xb4(0x04)
	int32_t max_progress; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Prospect.YPaymentEvent
// Size: 0xe8 (Inherited: 0xa8)
struct FYPaymentEvent : FYBaseAnalyticsEvent {
	struct FString product_id; // 0xa8(0x10)
	struct FString product_name; // 0xb8(0x10)
	int32_t Price; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString reporting_currency; // 0xd0(0x10)
	int32_t quantity; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct Prospect.YPlayerMutedEvent
// Size: 0xd0 (Inherited: 0xa8)
struct FYPlayerMutedEvent : FYBaseAnalyticsEvent {
	struct FString muted_user; // 0xa8(0x10)
	int32_t Action; // 0xb8(0x04)
	int32_t Location; // 0xbc(0x04)
	struct FString muted_message; // 0xc0(0x10)
};

// ScriptStruct Prospect.YDistanceTravelledAnalyticsEvent
// Size: 0xe8 (Inherited: 0xa8)
struct FYDistanceTravelledAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t position_x; // 0xa8(0x04)
	int32_t position_y; // 0xac(0x04)
	int32_t time_since_match_start; // 0xb0(0x04)
	int32_t time_since_user_joined; // 0xb4(0x04)
	int32_t distance_travelled_total; // 0xb8(0x04)
	float current_bag_weight; // 0xbc(0x04)
	float max_bag_weight; // 0xc0(0x04)
	float max_safe_weight; // 0xc4(0x04)
	float current_safe_weight; // 0xc8(0x04)
	float stamina_below_10_percent; // 0xcc(0x04)
	float stamina_usage; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString loot_area_name; // 0xd8(0x10)
};

// ScriptStruct Prospect.YCreditIncomeAnalyticsData
// Size: 0xe0 (Inherited: 0xa8)
struct FYCreditIncomeAnalyticsData : FYBaseAnalyticsEvent {
	struct FString item_id; // 0xa8(0x10)
	int32_t item_amount; // 0xb8(0x04)
	int32_t credit_source; // 0xbc(0x04)
	bool shared_income; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t location_x; // 0xc4(0x04)
	int32_t location_y; // 0xc8(0x04)
	int32_t time_since_match_start; // 0xcc(0x04)
	struct FString instigator_tags; // 0xd0(0x10)
};

// ScriptStruct Prospect.YLootCollectedAnalyticsEvent
// Size: 0x130 (Inherited: 0xa8)
struct FYLootCollectedAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FString item_id; // 0xa8(0x10)
	struct FString item_name; // 0xb8(0x10)
	int32_t pickup_location_X; // 0xc8(0x04)
	int32_t pickup_location_Y; // 0xcc(0x04)
	int32_t Source; // 0xd0(0x04)
	int32_t item_amount; // 0xd4(0x04)
	int32_t time_since_match_start; // 0xd8(0x04)
	int32_t time_since_user_joined; // 0xdc(0x04)
	struct FString instigator_tags; // 0xe0(0x10)
	float current_bag_weight; // 0xf0(0x04)
	float max_bag_weight; // 0xf4(0x04)
	float max_safe_weight; // 0xf8(0x04)
	float current_safe_weight; // 0xfc(0x04)
	float weight; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FString Action; // 0x108(0x10)
	struct FString item_rarity; // 0x118(0x10)
	bool loot_area; // 0x128(0x01)
	bool in_loot_container; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
};

// ScriptStruct Prospect.YPlayerCommWheelUse
// Size: 0xd0 (Inherited: 0xa8)
struct FYPlayerCommWheelUse : FYBaseAnalyticsEvent {
	int32_t time_since_match_start; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString command_name; // 0xb0(0x10)
	int32_t player_location_x; // 0xc0(0x04)
	int32_t player_location_y; // 0xc4(0x04)
	int32_t player_location_z; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Prospect.YLatencySummaryEvent
// Size: 0x108 (Inherited: 0xa8)
struct FYLatencySummaryEvent : FYBaseAnalyticsEvent {
	int32_t latency_average; // 0xa8(0x04)
	int32_t latency_quantile_26; // 0xac(0x04)
	int32_t latency_quantile_51; // 0xb0(0x04)
	int32_t latency_quantile_76; // 0xb4(0x04)
	int32_t latency_quantile_91; // 0xb8(0x04)
	int32_t latency_quantile_96; // 0xbc(0x04)
	int32_t latency_maximum; // 0xc0(0x04)
	int32_t ue4_ping_average; // 0xc4(0x04)
	int32_t ue4_ping_quantile_26; // 0xc8(0x04)
	int32_t ue4_ping_quantile_51; // 0xcc(0x04)
	int32_t ue4_ping_quantile_76; // 0xd0(0x04)
	int32_t ue4_ping_quantile_91; // 0xd4(0x04)
	int32_t ue4_ping_quantile_96; // 0xd8(0x04)
	int32_t ue4_ping_maximum; // 0xdc(0x04)
	float inPacketsLost; // 0xe0(0x04)
	float outPacketsLost; // 0xe4(0x04)
	int32_t InRate; // 0xe8(0x04)
	int32_t OutRate; // 0xec(0x04)
	float NetSaturated; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString server; // 0xf8(0x10)
};

// ScriptStruct Prospect.YFPSMatchSummaryEvent
// Size: 0x158 (Inherited: 0xa8)
struct FYFPSMatchSummaryEvent : FYBaseAnalyticsEvent {
	int32_t time_seconds; // 0xa8(0x04)
	int32_t time_disregarded_seconds; // 0xac(0x04)
	float fps_average; // 0xb0(0x04)
	float fps_frametime_average; // 0xb4(0x04)
	float fps_frametime_quantile_26; // 0xb8(0x04)
	float fps_frametime_quantile_51; // 0xbc(0x04)
	float fps_frametime_quantile_76; // 0xc0(0x04)
	float fps_percent_missed_vsyncs_thirty; // 0xc4(0x04)
	float fps_percent_missed_vsyncs_sixty; // 0xc8(0x04)
	float thread_game_average; // 0xcc(0x04)
	float thread_draw_average; // 0xd0(0x04)
	float thread_gpu_average; // 0xd4(0x04)
	float bound_percent_thread_game; // 0xd8(0x04)
	float bound_percent_thread_draw; // 0xdc(0x04)
	float bound_percent_thread_gpu; // 0xe0(0x04)
	float fps_frametime_max; // 0xe4(0x04)
	float fps_frametime_min; // 0xe8(0x04)
	int32_t fps_limit; // 0xec(0x04)
	int32_t hitchframecount_game; // 0xf0(0x04)
	int32_t hitchframecount_draw; // 0xf4(0x04)
	int32_t hitchframecount_gpu; // 0xf8(0x04)
	float gc_time_avg; // 0xfc(0x04)
	float gc_time_max; // 0x100(0x04)
	float gc_time_min; // 0x104(0x04)
	float gc_time_percent_over_budget; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FString game_resolution; // 0x110(0x10)
	int32_t display_mode; // 0x120(0x04)
	bool vSync; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	int32_t Preset; // 0x128(0x04)
	int32_t resolution_quality; // 0x12c(0x04)
	int32_t viewDistance_quality; // 0x130(0x04)
	int32_t antialiasing_quality; // 0x134(0x04)
	int32_t shadow_quality; // 0x138(0x04)
	int32_t postprocess_quality; // 0x13c(0x04)
	int32_t texture_quality; // 0x140(0x04)
	int32_t effects_quality; // 0x144(0x04)
	int32_t foliage_quality; // 0x148(0x04)
	int32_t colorblind_type; // 0x14c(0x04)
	float colorblind_severity; // 0x150(0x04)
	bool colorblind_correct_deficiency; // 0x154(0x01)
	bool colorblind_correction_with_deficiency; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
};

// ScriptStruct Prospect.YFPSMatchSummaryServerEvent
// Size: 0xf0 (Inherited: 0xa8)
struct FYFPSMatchSummaryServerEvent : FYBaseAnalyticsEvent {
	int32_t time_seconds; // 0xa8(0x04)
	float frametime_average; // 0xac(0x04)
	float frametime_quantile_26; // 0xb0(0x04)
	float frametime_quantile_51; // 0xb4(0x04)
	float frametime_quantile_76; // 0xb8(0x04)
	float frametime_max; // 0xbc(0x04)
	float frametime_min; // 0xc0(0x04)
	int32_t fps_limit; // 0xc4(0x04)
	uint32_t physical_memory_max; // 0xc8(0x04)
	uint32_t virtual_memory_max; // 0xcc(0x04)
	int32_t players_max; // 0xd0(0x04)
	float players_avg; // 0xd4(0x04)
	int32_t ai_max; // 0xd8(0x04)
	float ai_avg; // 0xdc(0x04)
	float gc_time_avg; // 0xe0(0x04)
	float gc_time_max; // 0xe4(0x04)
	float gc_time_min; // 0xe8(0x04)
	float gc_time_percent_over_budget; // 0xec(0x04)
};

// ScriptStruct Prospect.YCharacterCustomizationSelected
// Size: 0x140 (Inherited: 0xa8)
struct FYCharacterCustomizationSelected : FYBaseAnalyticsEvent {
	bool gender; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString head_id; // 0xb0(0x10)
	int32_t head_color_index; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString boots_id; // 0xc8(0x10)
	int32_t boots_color_index; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FString chest_id; // 0xe0(0x10)
	int32_t chest_color_index; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString gloves_id; // 0xf8(0x10)
	int32_t gloves_color_index; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FString base_suit_id; // 0x110(0x10)
	int32_t base_suit_color_index; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FString archetype_id; // 0x128(0x10)
	int32_t slot_id; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct Prospect.YGenericEmptyBIEvent
// Size: 0xa8 (Inherited: 0xa8)
struct FYGenericEmptyBIEvent : FYBaseAnalyticsEvent {
};

// ScriptStruct Prospect.YTimeInDebugMenus
// Size: 0xb0 (Inherited: 0xa8)
struct FYTimeInDebugMenus : FYBaseAnalyticsEvent {
	float Time; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Prospect.YTutorialFunnelStats
// Size: 0xe0 (Inherited: 0xa8)
struct FYTutorialFunnelStats : FYBaseAnalyticsEvent {
	struct FString tutorial_id; // 0xa8(0x10)
	int32_t time_in_match; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString step_name; // 0xc0(0x10)
	int32_t step; // 0xd0(0x04)
	float position_x; // 0xd4(0x04)
	float position_y; // 0xd8(0x04)
	float position_z; // 0xdc(0x04)
};

// ScriptStruct Prospect.YWeaponAnalyticsEvent
// Size: 0x128 (Inherited: 0xa8)
struct FYWeaponAnalyticsEvent : FYBaseAnalyticsEvent {
	struct FName weapon_id; // 0xa8(0x08)
	struct FString weapon_name; // 0xb0(0x10)
	struct FString item_rarity; // 0xc0(0x10)
	int32_t pickup_time; // 0xd0(0x04)
	int32_t pickup_time_since_user_joined; // 0xd4(0x04)
	int32_t shots_fired; // 0xd8(0x04)
	int32_t damage_to_player; // 0xdc(0x04)
	int32_t damage_to_AI; // 0xe0(0x04)
	int32_t hits; // 0xe4(0x04)
	int32_t hits_pvp; // 0xe8(0x04)
	int32_t weakspot_hits; // 0xec(0x04)
	int32_t weakspot_hits_pvp; // 0xf0(0x04)
	int32_t num_players_kill; // 0xf4(0x04)
	int32_t num_AI_kill; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString weapon_skin_id; // 0x100(0x10)
	struct FString weapon_skin_name; // 0x110(0x10)
	int32_t out_of_ammo; // 0x120(0x04)
	int32_t ammo_left; // 0x124(0x04)
};

// ScriptStruct Prospect.YPlayerReportData
// Size: 0xe8 (Inherited: 0xa8)
struct FYPlayerReportData : FYBaseAnalyticsEvent {
	struct FString reported_player_user_id; // 0xa8(0x10)
	struct FString reported_player_name; // 0xb8(0x10)
	struct FString location_parent; // 0xc8(0x10)
	struct FString Category; // 0xd8(0x10)
};

// ScriptStruct Prospect.YPlayerInitialConnectEvent
// Size: 0xc0 (Inherited: 0xa8)
struct FYPlayerInitialConnectEvent : FYBaseAnalyticsEvent {
	int32_t time_loaded; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString country_code; // 0xb0(0x10)
};

// ScriptStruct Prospect.YEndOfMatchEvent
// Size: 0xc0 (Inherited: 0xa8)
struct FYEndOfMatchEvent : FYBaseAnalyticsEvent {
	struct FString eom_screen_name; // 0xa8(0x10)
	int32_t time_spent; // 0xb8(0x04)
	bool eom_type_evac; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// ScriptStruct Prospect.YCommWheelEntry
// Size: 0x98 (Inherited: 0x08)
struct FYCommWheelEntry : FTableRowBase {
	struct FText m_displayName; // 0x08(0x18)
	struct FText m_textMessageInChat; // 0x20(0x18)
	struct FColor m_colorText; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTexture2D* m_iconTexture; // 0x40(0x08)
	struct UDataTable* m_subCommWheel; // 0x48(0x08)
	struct FDataTableRowHandle m_voiceLine; // 0x50(0x10)
	enum class EYActivityType m_associatedActivity; // 0x60(0x01)
	bool m_onlyVisibleIfDBNO; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<enum class EYPlayerStateBlueprint> m_onlyVisibleIfInPlayerStates; // 0x68(0x10)
	bool m_onlyVisibleIfInATeam; // 0x78(0x01)
	enum class EYCommWheelEntryTutorialSetting m_tutorialVisibility; // 0x79(0x01)
	bool m_colorizeSocialActorWidgetIconByPlayerRole; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	struct FColor m_colorSocialActorWidget; // 0x7c(0x04)
	float m_minSocialActorLifeSpan; // 0x80(0x04)
	float m_maxSocialActorLifeSpan; // 0x84(0x04)
	struct FDataTableRowHandle m_socialActorSpawnAudio; // 0x88(0x10)
};

// ScriptStruct Prospect.YConfigurationRow
// Size: 0x20 (Inherited: 0x10)
struct FYConfigurationRow : FYDataTableRowBase {
	struct FString m_surveyLink; // 0x10(0x10)
};

// ScriptStruct Prospect.YContractsBoardsSettingsRow
// Size: 0x18 (Inherited: 0x10)
struct FYContractsBoardsSettingsRow : FYDataTableRowBase {
	int32_t m_refreshHours24Utc; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YContractRewardUIData
// Size: 0x48 (Inherited: 0x00)
struct FYContractRewardUIData {
	bool showDivider; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYContractReward contractReward; // 0x08(0x40)
};

// ScriptStruct Prospect.YContractUiData
// Size: 0x40 (Inherited: 0x00)
struct FYContractUiData {
	struct FYContractData m_contractData; // 0x00(0x38)
	bool m_contractCanBeInteractedWith; // 0x38(0x01)
	bool m_contractIsLocked; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Prospect.YContractData
// Size: 0x38 (Inherited: 0x00)
struct FYContractData {
	struct FDataTableRowHandle m_contractRowHandle; // 0x00(0x10)
	struct FYContractDynamicData m_contractDynamicData; // 0x10(0x28)
};

// ScriptStruct Prospect.YContractDynamicData
// Size: 0x28 (Inherited: 0x00)
struct FYContractDynamicData {
	struct FString m_contractId; // 0x00(0x10)
	struct TArray<int32_t> m_contractCurrentProgress; // 0x10(0x10)
	enum class EYContractStatus m_contractStatus; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YAnnouncementRequestAysncLoadData
// Size: 0x40 (Inherited: 0x00)
struct FYAnnouncementRequestAysncLoadData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	struct FYAnnouncementPlaybackOptions m_playbackOptions; // 0x10(0x30)
};

// ScriptStruct Prospect.YDelayedAnnouncementData
// Size: 0x48 (Inherited: 0x00)
struct FYDelayedAnnouncementData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	struct FYAnnouncementPlaybackOptions m_playbackOptions; // 0x10(0x30)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Prospect.YKeyOverrideColorData
// Size: 0x30 (Inherited: 0x00)
struct FYKeyOverrideColorData {
	struct FLinearColor m_colorOverride; // 0x00(0x10)
	int32_t m_handle; // 0x10(0x04)
	int32_t m_isOverrideVisible; // 0x14(0x04)
	int32_t m_lerpStartSign; // 0x18(0x04)
	float m_deltaTime; // 0x1c(0x04)
	float m_duration; // 0x20(0x04)
	float m_interval; // 0x24(0x04)
	float m_multiplier; // 0x28(0x04)
	enum class EYLerpBehavior m_lerpBehavior; // 0x2c(0x01)
	bool m_isActive; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Prospect.YKeyHighlight
// Size: 0x50 (Inherited: 0x00)
struct FYKeyHighlight {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Prospect.YStateInputFrameCachedData
// Size: 0x18 (Inherited: 0x00)
struct FYStateInputFrameCachedData {
	struct FRotator m_inputRotation; // 0x00(0x0c)
	struct FRotator m_deltaRotation; // 0x0c(0x0c)
};

// ScriptStruct Prospect.YTravelRequestData
// Size: 0x28 (Inherited: 0x00)
struct FYTravelRequestData {
	struct FString m_context; // 0x00(0x10)
	struct FString m_mapName; // 0x10(0x10)
	enum class EYTravelInstanceType m_instanceType; // 0x20(0x01)
	bool m_loadMapDirectly; // 0x21(0x01)
	bool m_generatedRequest; // 0x22(0x01)
	bool m_evaluateSessionState; // 0x23(0x01)
	bool m_cancelExistingTravel; // 0x24(0x01)
	bool m_waitForResources; // 0x25(0x01)
	enum class EYMatchmakingDebugOption m_debugMatchmakingOption; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct Prospect.YCosmeticStringVisualizationRequest
// Size: 0x50 (Inherited: 0x00)
struct FYCosmeticStringVisualizationRequest {
	struct FString m_finalString; // 0x00(0x10)
	int32_t m_iterationCount; // 0x10(0x04)
	float m_iterationDelay; // 0x14(0x04)
	int32_t m_handle; // 0x18(0x04)
	int32_t m_charPerIteration; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)
	struct FString m_currentString; // 0x30(0x10)
	int32_t m_currentIterationCount; // 0x40(0x04)
	float m_currentIterationDelay; // 0x44(0x04)
	bool m_isFinished; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Prospect.YCurrencyRow
// Size: 0x398 (Inherited: 0x310)
struct FYCurrencyRow : FYItemDataTableRowBase {
	enum class EYCurrencyType m_currencyType; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x318(0x28)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x340(0x28)
	struct FRotator m_relativeMeshRotation; // 0x368(0x0c)
	struct FVector m_relativeMeshLocation; // 0x374(0x0c)
	struct FVector m_scale; // 0x380(0x0c)
	bool m_shouldUseMaterialRepresentation; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	int32_t m_upperCap; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
};

// ScriptStruct Prospect.YSceneCameraData
// Size: 0x28 (Inherited: 0x00)
struct FYSceneCameraData {
	struct TArray<struct FDataTableRowHandle> m_sceneRowHandles; // 0x00(0x10)
	struct FString m_cameraPrefix; // 0x10(0x10)
	bool m_ignoreSceneState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YSceneCameraDataRuntimeData
// Size: 0x20 (Inherited: 0x00)
struct FYSceneCameraDataRuntimeData {
	struct FYSceneCameraDataAssociation m_defaultDataAssociation; // 0x00(0x10)
	struct FString m_desiredSuffix; // 0x10(0x10)
};

// ScriptStruct Prospect.YSceneCameraDataAssociation
// Size: 0x10 (Inherited: 0x00)
struct FYSceneCameraDataAssociation {
	struct TArray<struct FYSceneCameraDataRuntimeEntry> m_runtimeEntries; // 0x00(0x10)
};

// ScriptStruct Prospect.YSceneCameraDataRuntimeEntry
// Size: 0x10 (Inherited: 0x00)
struct FYSceneCameraDataRuntimeEntry {
	struct AActor* m_cameraActor; // 0x00(0x08)
	enum class EYSceneState m_sceneState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Prospect.YCustomizationModeAssociation
// Size: 0x10 (Inherited: 0x00)
struct FYCustomizationModeAssociation {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Prospect.YControllerCustomizationState
// Size: 0x40 (Inherited: 0x00)
struct FYControllerCustomizationState {
	struct FTransform m_worldTransform; // 0x00(0x30)
	enum class EYCustomizationMode m_customizationMode; // 0x30(0x01)
	enum class EYCustomizationCategory m_customizationCategory; // 0x31(0x01)
	bool m_rotationEnabled; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
};

// ScriptStruct Prospect.YDamagePlayerTrackingData
// Size: 0x10 (Inherited: 0x00)
struct FYDamagePlayerTrackingData {
	float m_lastTimeTakeDamageFromPlayer; // 0x00(0x04)
	float m_timeStartedGettingKilledByPlayer; // 0x04(0x04)
	float m_healthStartedKilledByPlayer; // 0x08(0x04)
	float m_staminaStartedKilledByPlayer; // 0x0c(0x04)
};

// ScriptStruct Prospect.YHitflashData
// Size: 0x30 (Inherited: 0x00)
struct FYHitflashData {
	struct TArray<struct UMeshComponent*> m_hitflashComponents; // 0x00(0x10)
	struct FName m_scalarParameter; // 0x10(0x08)
	struct FName m_scalarParameterWeakspot; // 0x18(0x08)
	struct UCurveFloat* m_hitflashCurve; // 0x20(0x08)
	bool m_haveHitflashEnabled; // 0x28(0x01)
	bool m_haveHitflashEnabledForAllDamage; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Prospect.YDOTDamageEntry
// Size: 0x48 (Inherited: 0x00)
struct FYDOTDamageEntry {
	struct AActor* m_initiator; // 0x00(0x08)
	float m_duration; // 0x08(0x04)
	float m_deltaTime; // 0x0c(0x04)
	float m_damageInterval; // 0x10(0x04)
	float m_timeStarted; // 0x14(0x04)
	float m_damagePerInterval; // 0x18(0x04)
	int32_t m_ticks; // 0x1c(0x04)
	struct FYDamageOriginInfo m_dotAppliedFromOriginInfo; // 0x20(0x28)
};

// ScriptStruct Prospect.YHitZoneDataTableRow
// Size: 0x20 (Inherited: 0x10)
struct FYHitZoneDataTableRow : FYDataTableRowBase {
	struct TArray<struct FName> m_bones; // 0x10(0x10)
};

// ScriptStruct Prospect.YFindActorDealDamageRequestData
// Size: 0x58 (Inherited: 0x00)
struct FYFindActorDealDamageRequestData {
	struct AActor* m_damageCauser; // 0x00(0x08)
	struct FVector m_startLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDataTableRowHandle m_transportRowHandle; // 0x18(0x10)
	float m_radius; // 0x28(0x04)
	float m_capsuleHalfHeight; // 0x2c(0x04)
	struct FVector m_CapsuleUpVector; // 0x30(0x0c)
	bool m_skipFindClosestBoneCheck; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct AActor*> m_actorsIgnoreDamage; // 0x40(0x10)
	bool m_skipTraceToVerifyHit; // 0x50(0x01)
	enum class ECollisionChannel m_collisionChannel; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Prospect.YRadialDamageEntry
// Size: 0xb0 (Inherited: 0x00)
struct FYRadialDamageEntry {
	struct AActor* m_hitActor; // 0x00(0x08)
	struct UYDamageComponent* m_hitDamageComponent; // 0x08(0x08)
	struct FVector m_hitLocation; // 0x10(0x0c)
	struct FHitResult m_hitResult; // 0x1c(0x8c)
	char m_surfaceType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct Prospect.YRadialDamageDealingData
// Size: 0x108 (Inherited: 0x00)
struct FYRadialDamageDealingData {
	struct FVector m_origin; // 0x00(0x0c)
	struct FVector m_originDamageLineTraceCheckOverride; // 0x0c(0x0c)
	struct FVector m_impactNormal; // 0x18(0x0c)
	float m_radius; // 0x24(0x04)
	float m_capsuleRadius; // 0x28(0x04)
	float m_capsuleHalfHeight; // 0x2c(0x04)
	float m_falloffStartRange; // 0x30(0x04)
	float m_falloffDamageMultiplier; // 0x34(0x04)
	float m_playerDamageMultiplier; // 0x38(0x04)
	float m_enemyDamageMultiplier; // 0x3c(0x04)
	float m_damageSelfMultiplier; // 0x40(0x04)
	float m_healthDamage; // 0x44(0x04)
	struct FYDamageHelper m_damage; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct AActor* m_damageCauser; // 0x58(0x08)
	struct AActor* m_damageInstigator; // 0x60(0x08)
	struct FName m_boneNameHit; // 0x68(0x08)
	float m_stabilityDamage; // 0x70(0x04)
	float m_radialDamageImpulse; // 0x74(0x04)
	float m_stabilityDamageForDeathRagdoll; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct AActor*> m_ignoredActors; // 0x80(0x10)
	struct FYActorArray m_ignoredActorsForDamage; // 0x90(0x10)
	enum class ENetRole m_roleToReplicate; // 0xa0(0x01)
	enum class ECollisionChannel m_damagePreventionChannel; // 0xa1(0x01)
	bool m_ignoreDamagePrevention; // 0xa2(0x01)
	bool m_canDamageSelf; // 0xa3(0x01)
	bool m_affectEnemyHitreaction; // 0xa4(0x01)
	bool m_useDamageCauserForImpactDirection; // 0xa5(0x01)
	bool m_damageIgnoreShield; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	float m_penetration; // 0xa8(0x04)
	bool m_isFriendlyFireAllowed; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FGameplayTagContainer m_objectTypesAllowedToDamage; // 0xb0(0x20)
	struct FYDamageOverTimeData m_dotData; // 0xd0(0x0c)
	enum class EYDamageApplication m_damageApplication; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0xe0(0x28)
};

// ScriptStruct Prospect.YActorArray
// Size: 0x10 (Inherited: 0x00)
struct FYActorArray {
	struct TArray<struct AActor*> m_actors; // 0x00(0x10)
};

// ScriptStruct Prospect.YDamageInfoRow
// Size: 0x50 (Inherited: 0x10)
struct FYDamageInfoRow : FYDataTableRowBase {
	struct FText m_displayName; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_icon; // 0x28(0x28)
};

// ScriptStruct Prospect.YDamageInfoApplyRow
// Size: 0x50 (Inherited: 0x50)
struct FYDamageInfoApplyRow : FYDamageInfoRow {
};

// ScriptStruct Prospect.YDamageInfoCauserRow
// Size: 0x50 (Inherited: 0x50)
struct FYDamageInfoCauserRow : FYDamageInfoRow {
};

// ScriptStruct Prospect.YRawDamageEventContainer
// Size: 0x18 (Inherited: 0x00)
struct FYRawDamageEventContainer {
	struct TArray<struct FYDamageEvent> m_events; // 0x00(0x10)
	int32_t m_index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YProfanityTableRow
// Size: 0x10 (Inherited: 0x08)
struct FYProfanityTableRow : FTableRowBase {
	struct FName m_name; // 0x08(0x08)
};

// ScriptStruct Prospect.YPlayFabStoreRowBase
// Size: 0x50 (Inherited: 0x08)
struct FYPlayFabStoreRowBase : FTableRowBase {
	bool m_isEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString m_storeId; // 0x10(0x10)
	struct FString m_catalogVersion; // 0x20(0x10)
	struct FText m_displayName; // 0x30(0x18)
	enum class EYGamePlatform m_platform; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Prospect.YBundleDataTableRowBase
// Size: 0xa0 (Inherited: 0x10)
struct FYBundleDataTableRowBase : FYDataTableRowBase {
	bool m_isEntitlement; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FYStoreItemData m_storeData; // 0x18(0x68)
	struct TArray<struct FYPlatformStoreEntry> m_platformStoresData; // 0x80(0x10)
	struct TArray<struct FYBundleEntry> m_itemCollection; // 0x90(0x10)
};

// ScriptStruct Prospect.YBundleEntry
// Size: 0x18 (Inherited: 0x00)
struct FYBundleEntry {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YPlatformStoreEntry
// Size: 0x28 (Inherited: 0x00)
struct FYPlatformStoreEntry {
	enum class EYGamePlatform m_platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_offerId; // 0x08(0x10)
	struct FString m_entitlementId; // 0x18(0x10)
};

// ScriptStruct Prospect.YStoreItemData
// Size: 0x68 (Inherited: 0x00)
struct FYStoreItemData {
	int32_t m_priceSoftCurrency; // 0x00(0x04)
	int32_t m_priceHardCurrency; // 0x04(0x04)
	int32_t m_priceRealMoney; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText m_display_name; // 0x10(0x18)
	struct FText m_description; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_image; // 0x40(0x28)
};

// ScriptStruct Prospect.YLoreItemRowBase
// Size: 0x368 (Inherited: 0x310)
struct FYLoreItemRowBase : FYItemDataTableRowBase {
	struct FText m_description; // 0x310(0x18)
	struct FText m_lore; // 0x328(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x340(0x28)
};

// ScriptStruct Prospect.YItemShopInfo
// Size: 0x10 (Inherited: 0x00)
struct FYItemShopInfo {
	struct TArray<struct FYItemCraftingDataPerShop> m_factions; // 0x00(0x10)
};

// ScriptStruct Prospect.YDeadDropLocationRow
// Size: 0x28 (Inherited: 0x10)
struct FYDeadDropLocationRow : FYDataTableRowBase {
	struct FText m_name; // 0x10(0x18)
};

// ScriptStruct Prospect.YDeveloperCreditsCategoriesDataTableRow
// Size: 0x30 (Inherited: 0x10)
struct FYDeveloperCreditsCategoriesDataTableRow : FYDataTableRowBase {
	struct FString m_categoryHeadline; // 0x10(0x10)
	struct TArray<struct FString> m_developers; // 0x20(0x10)
};

// ScriptStruct Prospect.YDurabilityAnalyticsPerPlayer
// Size: 0x50 (Inherited: 0x00)
struct FYDurabilityAnalyticsPerPlayer {
	struct TMap<struct FString, struct FYDurabilityAnalyticsEvent> m_itemAnalytics; // 0x00(0x50)
};

// ScriptStruct Prospect.YStatProperty
// Size: 0x20 (Inherited: 0x00)
struct FYStatProperty {
	struct FString m_propertyKey; // 0x00(0x10)
	struct FString m_propertyName; // 0x10(0x10)
};

// ScriptStruct Prospect.YExperienceRow
// Size: 0x318 (Inherited: 0x310)
struct FYExperienceRow : FYItemDataTableRowBase {
	enum class EYExperienceType m_experienceType; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
};

// ScriptStruct Prospect.YLastAcknowledgedFactionProgress
// Size: 0x18 (Inherited: 0x00)
struct FYLastAcknowledgedFactionProgress {
	struct FString m_factionId; // 0x00(0x10)
	int32_t m_factionLevel; // 0x10(0x04)
	int32_t m_factionLevelXP; // 0x14(0x04)
};

// ScriptStruct Prospect.YCraftingDiscountDataTableReference
// Size: 0x18 (Inherited: 0x00)
struct FYCraftingDiscountDataTableReference {
	struct UDataTable* m_dataTable; // 0x00(0x08)
	struct FString m_sourceFileName; // 0x08(0x10)
};

// ScriptStruct Prospect.YFactionUnlockRewards
// Size: 0x20 (Inherited: 0x00)
struct FYFactionUnlockRewards {
	struct TArray<struct FYUnlockedShopItem> m_unlockedShopItems; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> m_unlockedContracts; // 0x10(0x10)
};

// ScriptStruct Prospect.YFactionProgressionReward
// Size: 0x18 (Inherited: 0x00)
struct FYFactionProgressionReward {
	struct FDataTableRowHandle m_currencyTableRowHandle; // 0x00(0x10)
	int32_t m_amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YUpdateFactionProgressionLocal
// Size: 0x18 (Inherited: 0x00)
struct FYUpdateFactionProgressionLocal {
	struct FString m_faction; // 0x00(0x10)
	int32_t m_factionProgression; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YFilterRuntimeSettings
// Size: 0x28 (Inherited: 0x00)
struct FYFilterRuntimeSettings {
	struct FString m_archetypeID; // 0x00(0x10)
	struct FString m_userId; // 0x10(0x10)
	enum class EYCustomizationModelType m_modelState; // 0x20(0x01)
	enum class EYSortingRequestType m_sortingRequest; // 0x21(0x01)
	bool m_sortAlphabetical; // 0x22(0x01)
	bool m_onlyShowReleasedItems; // 0x23(0x01)
	bool m_checkItemStates; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Prospect.YFilterItemEntry
// Size: 0x28 (Inherited: 0x00)
struct FYFilterItemEntry {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	struct FYItemVisualAcquisitionData m_acquisitionState; // 0x10(0x14)
	bool m_isEquippedTemporary; // 0x24(0x01)
	bool m_isEquippedPersistent; // 0x25(0x01)
	bool m_isOwned; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct Prospect.YItemVisualAcquisitionData
// Size: 0x14 (Inherited: 0x00)
struct FYItemVisualAcquisitionData {
	struct FName m_seasonId; // 0x00(0x08)
	char m_level; // 0x08(0x01)
	bool m_paidPass; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName m_shopOfferId; // 0x0c(0x08)
};

// ScriptStruct Prospect.YFilterCategoriesDataEntry
// Size: 0x38 (Inherited: 0x00)
struct FYFilterCategoriesDataEntry {
	struct TArray<enum class EYCustomizationCategory> m_customizationCategories; // 0x00(0x10)
	struct TArray<enum class EYItemType> m_itemTypes; // 0x10(0x10)
	struct TArray<enum class EYModificationSlotType> m_modSlotTypes; // 0x20(0x10)
	bool m_filterForTools; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Prospect.YFindDropLocationData
// Size: 0x58 (Inherited: 0x00)
struct FYFindDropLocationData {
	struct UObject* m_worldContextObject; // 0x00(0x08)
	struct AActor* m_actorContext; // 0x08(0x08)
	struct FVector m_locationReachableFrom; // 0x10(0x0c)
	struct FVector m_preferredDropLocation; // 0x1c(0x0c)
	struct FVector m_choosenSuitableDropLocation; // 0x28(0x0c)
	int32_t m_navMeshRadius; // 0x34(0x04)
	struct FString m_contextInfo; // 0x38(0x10)
	struct TArray<struct FYDebugFindDropLocationVectorInfo> m_additionalDebugInfo; // 0x48(0x10)
};

// ScriptStruct Prospect.YDebugFindDropLocationVectorInfo
// Size: 0x30 (Inherited: 0x00)
struct FYDebugFindDropLocationVectorInfo {
	struct FVector m_locationContextOrigin; // 0x00(0x0c)
	struct FVector m_location; // 0x0c(0x0c)
	struct FString m_description; // 0x18(0x10)
	struct FColor m_color; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YCurrentlyOverlappingFoliage
// Size: 0x28 (Inherited: 0x00)
struct FYCurrentlyOverlappingFoliage {
	enum class EPhysicalSurface m_surface; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAudioComponent* m_audioComponent; // 0x08(0x08)
	struct FDataTableRowHandle m_effect; // 0x10(0x10)
	float m_timeElapsed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YClientDisconnectedEvent
// Size: 0xf8 (Inherited: 0xa8)
struct FYClientDisconnectedEvent : FYBaseAnalyticsEvent {
	struct FString GameVersion; // 0xa8(0x10)
	struct FString FailureType; // 0xb8(0x10)
	struct FString errorString; // 0xc8(0x10)
	struct FString lastRoomId; // 0xd8(0x10)
	struct FString lastState; // 0xe8(0x10)
};

// ScriptStruct Prospect.YChatLog
// Size: 0x20 (Inherited: 0x00)
struct FYChatLog {
	struct FString m_sender; // 0x00(0x10)
	struct FString m_message; // 0x10(0x10)
};

// ScriptStruct Prospect.YPlayerSlot
// Size: 0x38 (Inherited: 0x00)
struct FYPlayerSlot {
	struct FUniqueNetIdRepl m_uniqueId; // 0x00(0x28)
	struct FString m_playerName; // 0x28(0x10)
};

// ScriptStruct Prospect.YPlayerStartScoreRule
// Size: 0x08 (Inherited: 0x00)
struct FYPlayerStartScoreRule {
	float m_radius; // 0x00(0x04)
	int32_t m_scorePerPlayerInRadius; // 0x04(0x04)
};

// ScriptStruct Prospect.YSelectPlayerStart
// Size: 0x28 (Inherited: 0x00)
struct FYSelectPlayerStart {
	struct FString m_incommingName; // 0x00(0x10)
	struct UObject* m_defaultPawnClass; // 0x10(0x08)
	struct UWorld* m_world; // 0x18(0x08)
	struct AController* Player; // 0x20(0x08)
};

// ScriptStruct Prospect.YGameModeTuning
// Size: 0x90 (Inherited: 0x10)
struct FYGameModeTuning : FYDataTableRowBase {
	struct FGameplayTagContainer m_gameplayTagsModifiedXP; // 0x10(0x20)
	float m_xpModificationOnGameplayTagsMultiplier; // 0x30(0x04)
	int32_t m_questVictoryConditionQuestList; // 0x34(0x04)
	float m_addQuestTimerDelay; // 0x38(0x04)
	int32_t m_amountOfHardQuests; // 0x3c(0x04)
	int32_t m_amountOfMediumQuests; // 0x40(0x04)
	float m_scoreSharingMultiplier; // 0x44(0x04)
	float m_currencySharingMultiplier; // 0x48(0x04)
	float m_xpSharingMultiplier; // 0x4c(0x04)
	float m_pactBreakInteractionTime; // 0x50(0x04)
	bool m_heatmapEnabled; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float m_ownPlayerHeatScore; // 0x58(0x04)
	float m_pactMateHeatScore; // 0x5c(0x04)
	float m_nonPlayerHeatScore; // 0x60(0x04)
	float m_playerHeatScore; // 0x64(0x04)
	float m_vehicleHeatScore; // 0x68(0x04)
	float m_recentlyDealtDamageScore; // 0x6c(0x04)
	float m_recentlyDealDamageHeatMapTimeSpan; // 0x70(0x04)
	float m_sessionTimeoutCallbackRewards; // 0x74(0x04)
	bool m_sessionManagesResources; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float m_interactionMultiplier; // 0x7c(0x04)
	float m_interactionTraceSphere; // 0x80(0x04)
	bool m_checkRecursiveTrace; // 0x84(0x01)
	bool m_prioritizeNonPlayerCharacters; // 0x85(0x01)
	bool m_useSessionTimerShutdown; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	float m_damageOutlineHostilePlayersDuration; // 0x88(0x04)
	int32_t m_DBNOCharges; // 0x8c(0x04)
};

// ScriptStruct Prospect.YGameModeUIData
// Size: 0x110 (Inherited: 0x10)
struct FYGameModeUIData : FYDataTableRowBase {
	enum class EYMatchmakeGameModeType m_matchmakingGameModeType; // 0x10(0x01)
	bool m_isRanked; // 0x11(0x01)
	bool m_isTournamentMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FText m_gameModeName; // 0x18(0x18)
	struct FText m_gameModeDescription; // 0x30(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_gameModeIcon; // 0x48(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_gameModeImage; // 0x70(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_gameModeBackgroundImage; // 0x98(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_gameModeSelectedBackgroundImageOverride; // 0xc0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_gameModeHoverBackgroundImageOverride; // 0xe8(0x28)
};

// ScriptStruct Prospect.YGamePingEntry
// Size: 0x38 (Inherited: 0x00)
struct FYGamePingEntry {
	char pad_0[0x20]; // 0x00(0x20)
	struct UPingIP* m_pinger; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Prospect.YChainReactionDataEntry
// Size: 0x0c (Inherited: 0x00)
struct FYChainReactionDataEntry {
	float m_chainReactionRadius; // 0x00(0x04)
	float m_chainReactionDamageReduction; // 0x04(0x04)
	bool m_applyChainReaction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Prospect.YPlayerStartCluster
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerStartCluster {
	struct TArray<struct AActor*> m_locations; // 0x00(0x10)
	struct FVector m_centroid; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YEquippedPlayerLoadout
// Size: 0x20 (Inherited: 0x00)
struct FYEquippedPlayerLoadout {
	struct FDataTableRowHandle m_weapon; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> m_abilities; // 0x10(0x10)
};

// ScriptStruct Prospect.YShardData
// Size: 0x10 (Inherited: 0x00)
struct FYShardData {
	struct AActor* m_actor; // 0x00(0x08)
	int32_t m_shardIndex; // 0x08(0x04)
	bool m_onlyRelevantToSelf; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Prospect.YItemDetailOverviewData
// Size: 0x30 (Inherited: 0x00)
struct FYItemDetailOverviewData {
	bool m_isItemBlueprint; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_itemRowHandle; // 0x08(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString m_shopItemBelongsTo; // 0x20(0x10)
};

// ScriptStruct Prospect.YVanityItem
// Size: 0x18 (Inherited: 0x00)
struct FYVanityItem {
	struct FDataTableRowHandle m_vanityHandle; // 0x00(0x10)
	int32_t m_amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YUIDailyCrateTimerInfo
// Size: 0x10 (Inherited: 0x00)
struct FYUIDailyCrateTimerInfo {
	bool m_generatorRewardCanBeCollected; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTimespan m_timeUntilNextReward; // 0x08(0x08)
};

// ScriptStruct Prospect.YDailyCrateGeneratorInfo
// Size: 0x28 (Inherited: 0x00)
struct FYDailyCrateGeneratorInfo {
	struct FYGeneratorInfo m_generatorInfo; // 0x00(0x10)
	int32_t m_crateLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FYRewardDataTableRow> m_crateItems; // 0x18(0x10)
};

// ScriptStruct Prospect.YRewardDataTableRow
// Size: 0x28 (Inherited: 0x10)
struct FYRewardDataTableRow : FYDataTableRowBase {
	enum class EYRewardType m_rewardType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName m_rewardId; // 0x14(0x08)
	int32_t m_amount; // 0x1c(0x04)
	float m_weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YGeneratorInfo
// Size: 0x10 (Inherited: 0x00)
struct FYGeneratorInfo {
	int32_t m_currentAmount; // 0x00(0x04)
	int32_t m_maxAmount; // 0x04(0x04)
	struct FName m_generatorId; // 0x08(0x08)
};

// ScriptStruct Prospect.YPassiveGeneratorType
// Size: 0x48 (Inherited: 0x10)
struct FYPassiveGeneratorType : FYDataTableRowBase {
	struct FName m_generatorId; // 0x10(0x08)
	struct FText m_generatorName; // 0x18(0x18)
	enum class EYPassiveGeneratorRewardType m_generatorType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t m_baseGenIntervalMinutes; // 0x34(0x04)
	int32_t m_baseGenRate; // 0x38(0x04)
	int32_t m_baseCap; // 0x3c(0x04)
	enum class EYTechTreeNodePerkType m_capPerkEffector; // 0x40(0x01)
	enum class EYTechTreeNodePerkType m_genRatePerkEffector; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Prospect.YGenericDebuggerShapeEntry
// Size: 0x30 (Inherited: 0x00)
struct FYGenericDebuggerShapeEntry {
	struct FVector m_start; // 0x00(0x0c)
	struct FVector m_end; // 0x0c(0x0c)
	float m_thickness; // 0x18(0x04)
	struct FColor m_color; // 0x1c(0x04)
	struct FString m_info; // 0x20(0x10)
};

// ScriptStruct Prospect.YRequestNewHeatMapData
// Size: 0x20 (Inherited: 0x00)
struct FYRequestNewHeatMapData {
	struct FVector2D m_worldLocation; // 0x00(0x08)
	struct FVector2D m_gridLocation; // 0x08(0x08)
	float m_duration; // 0x10(0x04)
	float m_timestampActivated; // 0x14(0x04)
	int32_t m_runtimeHandle; // 0x18(0x04)
	char m_type; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Prospect.YHeatMapSettings
// Size: 0x10 (Inherited: 0x00)
struct FYHeatMapSettings {
	struct FVector2D m_min; // 0x00(0x08)
	struct FVector2D m_max; // 0x08(0x08)
};

// ScriptStruct Prospect.YImpactData
// Size: 0x130 (Inherited: 0x00)
struct FYImpactData {
	struct FDataTableRowHandle m_fxCategoryRowHandle; // 0x00(0x10)
	struct UObject* m_worldContextObject; // 0x10(0x08)
	struct AActor* m_actorHitOptional; // 0x18(0x08)
	struct USceneComponent* m_componentHit; // 0x20(0x08)
	struct FVector m_location; // 0x28(0x0c)
	struct FVector m_impactSurfaceNormal; // 0x34(0x0c)
	struct FVector m_direction; // 0x40(0x0c)
	enum class EPhysicalSurface m_surfaceType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FDataTableRowHandle m_impactEffectPerSurfaceTypeRow; // 0x50(0x10)
	struct FYWeaponImpactEffectsAssociation m_defaultEffect; // 0x60(0x90)
	struct FYDamageOriginInfo m_damageOriginInfo; // 0xf0(0x28)
	struct AActor* m_soundOwningActor; // 0x118(0x08)
	struct FVector m_visualOriginTrailLocation; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct Prospect.YWeaponImpactEffectsAssociation
// Size: 0x90 (Inherited: 0x00)
struct FYWeaponImpactEffectsAssociation {
	struct FYWeaponDecalData m_impactDecal; // 0x00(0x20)
	struct UParticleSystem* m_impactVfx; // 0x20(0x08)
	struct UParticleSystem* m_additionalImpactVfx; // 0x28(0x08)
	bool m_attachImpactVfx; // 0x30(0x01)
	bool m_playImpactVfxOnLocallyControlledPawn; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float m_slerpMaxImpactDirectionValue; // 0x34(0x04)
	float m_slerpMinImpactDirectionValue; // 0x38(0x04)
	float m_maxRandomImpactDirectionConeAngle; // 0x3c(0x04)
	struct FYWeaponDecalData m_takeDamageDecal; // 0x40(0x20)
	bool m_playImpactSfxOnOwner; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FDataTableRowHandle m_impactSfxHandle; // 0x68(0x10)
	struct FDataTableRowHandle m_hitMarkerSfxHandle; // 0x78(0x10)
	bool m_tryProjectImpactLocationOnSkeletalMesh; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Prospect.YWeaponDecalData
// Size: 0x20 (Inherited: 0x00)
struct FYWeaponDecalData {
	struct UMaterialInterface* m_impactMaterial; // 0x00(0x08)
	float m_decalSize; // 0x08(0x04)
	float m_lifeSpan; // 0x0c(0x04)
	float m_startDelay; // 0x10(0x04)
	float m_fadeOutDuration; // 0x14(0x04)
	float m_fadeScreenSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YImpactEffectsRow
// Size: 0x70 (Inherited: 0x10)
struct FYImpactEffectsRow : FYDataTableRowBase {
	bool m_enableFallbackToGenericRow; // 0x10(0x01)
	bool m_alwaysUseDefaultSurfaceType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TMap<enum class EPhysicalSurface, struct FYWeaponImpactEffectsAssociation> m_effects; // 0x18(0x50)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Prospect.YOverrideImpactEffectsRow
// Size: 0x70 (Inherited: 0x70)
struct FYOverrideImpactEffectsRow : FYImpactEffectsRow {
};

// ScriptStruct Prospect.YImpactEffectReceiverData
// Size: 0x20 (Inherited: 0x00)
struct FYImpactEffectReceiverData {
	struct TArray<struct FYFXCategoryMaterialParemeterEntry> m_fxVectorParameters; // 0x00(0x10)
	struct TArray<struct FYFXCategoryMaterialFloatParemeterEntry> m_fxFloatParameters; // 0x10(0x10)
};

// ScriptStruct Prospect.YFXCategoryMaterialFloatParemeterEntry
// Size: 0x0c (Inherited: 0x00)
struct FYFXCategoryMaterialFloatParemeterEntry {
	float m_floatParameter; // 0x00(0x04)
	struct FName m_name; // 0x04(0x08)
};

// ScriptStruct Prospect.YFXCategoryMaterialParemeterEntry
// Size: 0x14 (Inherited: 0x00)
struct FYFXCategoryMaterialParemeterEntry {
	struct FVector m_vectorParameter; // 0x00(0x0c)
	struct FName m_name; // 0x0c(0x08)
};

// ScriptStruct Prospect.YBaseFXCategoryRow
// Size: 0xd0 (Inherited: 0x10)
struct FYBaseFXCategoryRow : FYDataTableRowBase {
	struct TArray<struct FYFXCategoryMaterialParemeterEntry> m_materialParameters; // 0x10(0x10)
	struct TArray<struct FYFXCategoryMaterialFloatParemeterEntry> m_materialFloatParameters; // 0x20(0x10)
	struct FDataTableRowHandle m_impactEffectsDataTableRow; // 0x30(0x10)
	struct FYWeaponImpactEffectsAssociation m_defaultEffect; // 0x40(0x90)
};

// ScriptStruct Prospect.YFXCategoryRow
// Size: 0x1f8 (Inherited: 0xd0)
struct FYFXCategoryRow : FYBaseFXCategoryRow {
	struct FName m_trailTargetParameter; // 0xd0(0x08)
	struct UParticleSystem* m_trailFX; // 0xd8(0x08)
	bool m_playTrailVFXEmitterForProjectiles; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FYWeaponParticleSystemSelector m_trailVFXEmitter; // 0xe8(0x28)
	struct UParticleSystem* m_defaultBeamFX; // 0x110(0x08)
	struct UParticleSystem* m_defaultSpinupFx; // 0x118(0x08)
	struct UParticleSystem* m_projectileParticleSystem; // 0x120(0x08)
	struct FYWeaponParticleSystemSelector m_projectileVFXEmitter; // 0x128(0x28)
	struct FName m_muzzleSocketName; // 0x150(0x08)
	struct FYWeaponParticleSystemSelector m_muzzleVFXEmitter; // 0x158(0x28)
	struct FYWeaponParticleSystemSelector m_muzzleVFXEmitter3rdPerson; // 0x180(0x28)
	struct FName m_shellEjectSocketName; // 0x1a8(0x08)
	struct FYWeaponParticleSystemSelector m_shellEjectVFXEmitter; // 0x1b0(0x28)
	struct FName m_beamEndPointParameter; // 0x1d8(0x08)
	bool m_playImpactEffectOnAutonomous; // 0x1e0(0x01)
	bool m_fireFxIsLooping; // 0x1e1(0x01)
	bool m_fireFxIsBeamEndPoint; // 0x1e2(0x01)
	char pad_1E3[0x5]; // 0x1e3(0x05)
	struct UCameraShakeBase* m_impactCameraShake; // 0x1e8(0x08)
	float m_impactShakeInnerRadius; // 0x1f0(0x04)
	float m_impactShakeOuterRadius; // 0x1f4(0x04)
};

// ScriptStruct Prospect.YWeaponParticleSystemSelector
// Size: 0x28 (Inherited: 0x00)
struct FYWeaponParticleSystemSelector {
	struct UParticleSystem* m_defaultPS; // 0x00(0x08)
	struct TArray<struct FYWeaponParticleSystemOverrideByWeaponType> m_overridePsByWeaponType; // 0x08(0x10)
	struct TArray<struct FYWeaponParticleSystemOverrideByDataRowHandle> m_overridePsByDataRowHandle; // 0x18(0x10)
};

// ScriptStruct Prospect.YWeaponParticleSystemOverrideByDataRowHandle
// Size: 0x18 (Inherited: 0x00)
struct FYWeaponParticleSystemOverrideByDataRowHandle {
	struct FDataTableRowHandle m_weaponDataTableRowHandle; // 0x00(0x10)
	struct UParticleSystem* m_particleSystem; // 0x10(0x08)
};

// ScriptStruct Prospect.YWeaponParticleSystemOverrideByWeaponType
// Size: 0x10 (Inherited: 0x00)
struct FYWeaponParticleSystemOverrideByWeaponType {
	enum class EYVFX_WeaponType m_weaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UParticleSystem* m_particleSystem; // 0x08(0x08)
};

// ScriptStruct Prospect.YImpactDataTableRow
// Size: 0x20 (Inherited: 0x10)
struct FYImpactDataTableRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_fxDefaultDataTableRow; // 0x10(0x10)
};

// ScriptStruct Prospect.YWeaponImpactDataTableRow
// Size: 0xa0 (Inherited: 0x20)
struct FYWeaponImpactDataTableRow : FYImpactDataTableRow {
	enum class EYImpactActorRotation m_actorSpawnRotation; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDataTableRowHandle m_tuningDataTableRow; // 0x28(0x10)
	struct FDataTableRowHandle m_spawnedActorAssociatedRow; // 0x38(0x10)
	SoftClassProperty m_replicatedActorToSpawn; // 0x48(0x28)
	struct AActor* m_nonReplicatedActorToSpawn; // 0x70(0x08)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesToAddOnImpact; // 0x78(0x10)
	bool m_shouldHaveFxCategory; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FDataTableRowHandle m_aiSenseTriggerRowHandle; // 0x90(0x10)
};

// ScriptStruct Prospect.YInventoryLink
// Size: 0x10 (Inherited: 0x00)
struct FYInventoryLink {
	int32_t m_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UYStateInventoryComponent* m_inventoryComponent; // 0x08(0x08)
};

// ScriptStruct Prospect.YActiveInventoryInsurance
// Size: 0x20 (Inherited: 0x00)
struct FYActiveInventoryInsurance {
	struct TArray<struct FYInsuredItems> m_insured; // 0x00(0x10)
	struct TArray<struct FYInsuredItems> m_pending; // 0x10(0x10)
};

// ScriptStruct Prospect.YInsuredItems
// Size: 0x20 (Inherited: 0x00)
struct FYInsuredItems {
	struct FDataTableRowHandle m_handle; // 0x00(0x10)
	struct TArray<struct FString> m_items; // 0x10(0x10)
};

// ScriptStruct Prospect.YInventoryInsuranceOffer
// Size: 0x0c (Inherited: 0x00)
struct FYInventoryInsuranceOffer {
	int32_t m_cost; // 0x00(0x04)
	int32_t m_payout; // 0x04(0x04)
	bool m_canAfford; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Prospect.YInventoryInsuranceDataTableRow
// Size: 0x18 (Inherited: 0x10)
struct FYInventoryInsuranceDataTableRow : FYDataTableRowBase {
	float m_cost; // 0x10(0x04)
	float m_payout; // 0x14(0x04)
};

// ScriptStruct Prospect.YItemIncrementData
// Size: 0x50 (Inherited: 0x00)
struct FYItemIncrementData {
	struct TMap<struct FName, int32_t> m_idToIncrement; // 0x00(0x50)
};

// ScriptStruct Prospect.YMatchInventoryUpdate
// Size: 0x30 (Inherited: 0x00)
struct FYMatchInventoryUpdate {
	struct TArray<struct FString> m_idsToRemove; // 0x00(0x10)
	struct TArray<struct FYInventoryItem> m_itemsToUpdate; // 0x10(0x10)
	struct TArray<struct FYInventoryItem> m_itemsToAdd; // 0x20(0x10)
};

// ScriptStruct Prospect.YInventorySnapshot
// Size: 0x78 (Inherited: 0x00)
struct FYInventorySnapshot {
	struct FYInventoryInfo m_inventoryInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYPlayerInventory m_playerInventory; // 0x18(0x18)
	struct FYPlayerInventory m_playerStash; // 0x30(0x18)
	struct FYPlayerDataSet m_playerSet; // 0x48(0x28)
	int32_t m_playerPickaxeLevel; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Prospect.YPlayerDataSet
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerDataSet {
	int32_t m_permutationIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString m_id; // 0x08(0x10)
	struct TArray<struct FYPlayerItemEntry> m_setItems; // 0x18(0x10)
};

// ScriptStruct Prospect.YPlayerItemEntry
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerItemEntry {
	enum class EYPlayerSetType m_setType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_id; // 0x08(0x10)
};

// ScriptStruct Prospect.YInventoryInfo
// Size: 0x14 (Inherited: 0x00)
struct FYInventoryInfo {
	int32_t m_inventoryLimit; // 0x00(0x04)
	int32_t m_stashLimit; // 0x04(0x04)
	int32_t m_safeLimit; // 0x08(0x04)
	int32_t m_baseStashLimit; // 0x0c(0x04)
	int32_t m_baseSafeLimit; // 0x10(0x04)
};

// ScriptStruct Prospect.YNetPlayerInventoryUpdate
// Size: 0x30 (Inherited: 0x00)
struct FYNetPlayerInventoryUpdate {
	struct TArray<struct FYInventoryItem> m_itemsToAdd; // 0x00(0x10)
	struct TArray<struct FYInventoryItem> m_itemsToUpdate; // 0x10(0x10)
	struct TArray<struct FString> m_itemsToRemove; // 0x20(0x10)
};

// ScriptStruct Prospect.YBagItems
// Size: 0x10 (Inherited: 0x00)
struct FYBagItems {
	struct TArray<struct FString> m_bagItemsIds; // 0x00(0x10)
};

// ScriptStruct Prospect.YLootListAssetPath
// Size: 0x20 (Inherited: 0x00)
struct FYLootListAssetPath {
	struct FName m_gameModeName; // 0x00(0x08)
	struct FSoftObjectPath m_listDefinitionsDTAssetPath; // 0x08(0x18)
};

// ScriptStruct Prospect.YItemSetUIData
// Size: 0x98 (Inherited: 0x00)
struct FYItemSetUIData {
	struct FText m_name; // 0x00(0x18)
	struct FText m_description; // 0x18(0x18)
	struct FText m_flavorDescription; // 0x30(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_largeIcon; // 0x48(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_smallIcon; // 0x70(0x28)
};

// ScriptStruct Prospect.YItemPickUpLightData
// Size: 0x1c (Inherited: 0x00)
struct FYItemPickUpLightData {
	bool m_isLightEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_intensity; // 0x04(0x04)
	float m_attenuationRadius; // 0x08(0x04)
	struct FVector m_relativeTranslationOffset; // 0x0c(0x0c)
	struct FColor m_color; // 0x18(0x04)
};

// ScriptStruct Prospect.YItemScrapingRow
// Size: 0x38 (Inherited: 0x10)
struct FYItemScrapingRow : FYDataTableRowBase {
	struct TArray<struct FYScrapingResultRow> m_scrapingResults; // 0x10(0x10)
	struct TArray<struct FYScrapingResultRow> m_currencyRewards; // 0x20(0x10)
	float m_factionReward; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Prospect.YScrapingResultRow
// Size: 0x28 (Inherited: 0x10)
struct FYScrapingResultRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_material; // 0x10(0x10)
	float m_percentageInReturn; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YItemStatsSettingsRow
// Size: 0x60 (Inherited: 0x10)
struct FYItemStatsSettingsRow : FYDataTableRowBase {
	struct TMap<enum class EYItemStatsCategory, struct FYItemStatsAssociationCollection> m_statsDefinitions; // 0x10(0x50)
};

// ScriptStruct Prospect.YItemStatsAssociationCollection
// Size: 0x50 (Inherited: 0x00)
struct FYItemStatsAssociationCollection {
	SoftClassProperty m_defaultItemContainer; // 0x00(0x28)
	struct TArray<struct FYItemStatsAssociationEntry> m_data; // 0x28(0x10)
	struct TArray<enum class EYItemStatsType> m_detailedStatisticsTypes; // 0x38(0x10)
	bool m_wantsToShowDetailStatistics; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Prospect.YItemStatsAssociationEntry
// Size: 0x18 (Inherited: 0x00)
struct FYItemStatsAssociationEntry {
	enum class EYItemStatsType m_type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_maxValue; // 0x04(0x04)
	float m_minValue; // 0x08(0x04)
	bool m_inversePercent; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct UCurveFloat* m_curveTranspose; // 0x10(0x08)
};

// ScriptStruct Prospect.YStatTypeEntryAssociation
// Size: 0x18 (Inherited: 0x00)
struct FYStatTypeEntryAssociation {
	struct TArray<enum class EYGameplayAttribute> m_attributes; // 0x00(0x10)
	float m_baseValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YDetailedStatisticsDataSettingData
// Size: 0x28 (Inherited: 0x00)
struct FYDetailedStatisticsDataSettingData {
	struct TArray<struct FYStatsTypeDataEntry> m_entires; // 0x00(0x10)
	struct FDataTableRowHandle m_rowHandle; // 0x10(0x10)
	enum class EYItemStatsCategory m_category; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YStatsTypeDataEntry
// Size: 0x30 (Inherited: 0x00)
struct FYStatsTypeDataEntry {
	enum class EYItemStatsType m_type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText m_name; // 0x08(0x18)
	float m_baseValue; // 0x20(0x04)
	float m_modifiedValue; // 0x24(0x04)
	float m_difference; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YItemTooltipData
// Size: 0x120 (Inherited: 0x00)
struct FYItemTooltipData {
	enum class EYItemTooltipType m_itemTooltipType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName m_baseItemId; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText m_itemName; // 0x10(0x18)
	struct FText m_itemType; // 0x28(0x18)
	struct FText m_itemSubType; // 0x40(0x18)
	struct FText m_itemDescription; // 0x58(0x18)
	struct FText m_itemFlavorText; // 0x70(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_itemImage; // 0x88(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_itemImageBig; // 0xb0(0x28)
	int32_t m_itemPrice; // 0xd8(0x04)
	int32_t m_itemAmount; // 0xdc(0x04)
	struct FYStoredModData m_mods; // 0xe0(0x10)
	struct TArray<enum class EYModificationSlotType> m_modSlots; // 0xf0(0x10)
	struct FYWeaponTooltipData m_weaponTooltipData; // 0x100(0x18)
	bool m_isCompatibleMod; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct Prospect.YWeaponTooltipData
// Size: 0x18 (Inherited: 0x00)
struct FYWeaponTooltipData {
	float m_weaponDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> m_weaponMods; // 0x08(0x10)
};

// ScriptStruct Prospect.YKeybindings
// Size: 0x78 (Inherited: 0x00)
struct FYKeybindings {
	struct TMap<struct FName, struct FYKeybindingData> Keybindings; // 0x00(0x50)
	bool HasUpdates; // 0x50(0x01)
	bool IsNew; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FYKeybindingData> m_addedKeybindings; // 0x58(0x10)
	struct TArray<struct FYKeybindingData> m_removedKeybindings; // 0x68(0x10)
};

// ScriptStruct Prospect.YKeyPlatformData
// Size: 0x78 (Inherited: 0x10)
struct FYKeyPlatformData : FYDataTableRowBase {
	struct FKey Key; // 0x10(0x18)
	struct TMap<enum class EYKeybindingInputDeviceType, struct TSoftObjectPtr<struct UTexture2D>> Icons; // 0x28(0x50)
};

// ScriptStruct Prospect.YMaterialRow
// Size: 0x438 (Inherited: 0x310)
struct FYMaterialRow : FYItemDataTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x310(0x28)
	struct FYActorUIWidgetData m_uiWidgetData; // 0x338(0xa0)
	struct FText m_materialLocationDescription; // 0x3d8(0x18)
	struct TArray<struct TSoftObjectPtr<struct UObject>> m_meshes; // 0x3f0(0x10)
	struct FYItemPickUpLightData m_pickUpLightData; // 0x400(0x1c)
	struct FVector m_meshScale; // 0x41c(0x0c)
	struct FDataTableRowHandle m_pickUpSoundRowHandle; // 0x428(0x10)
};

// ScriptStruct Prospect.YKeyDataTableRow
// Size: 0x438 (Inherited: 0x438)
struct FYKeyDataTableRow : FYMaterialRow {
};

// ScriptStruct Prospect.YConnectionLatencyData
// Size: 0x28 (Inherited: 0x00)
struct FYConnectionLatencyData {
	int32_t m_totalSamplesNetSaturated; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> m_ue4ExactPing; // 0x08(0x10)
	struct TArray<float> m_latencySamples; // 0x18(0x10)
};

// ScriptStruct Prospect.YPlayerLeaningData
// Size: 0x1c (Inherited: 0x00)
struct FYPlayerLeaningData {
	float m_leanAngleFirstPerson; // 0x00(0x04)
	float m_leanAngleThirdPerson; // 0x04(0x04)
	float m_leaningTranslationFirstPerson; // 0x08(0x04)
	float m_leaningTranslationThirdPerson; // 0x0c(0x04)
	float m_leaningMaxAngleFirstPerson; // 0x10(0x04)
	float m_leaningMaxAngleThirdPerson; // 0x14(0x04)
	bool m_isLeaning; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Prospect.YLootContainerDefinitionRow
// Size: 0x130 (Inherited: 0x10)
struct FYLootContainerDefinitionRow : FYAssetVariationDefinitionRow {
	struct FText m_containerName; // 0x10(0x18)
	struct TSoftObjectPtr<struct USoundBase> m_soundOpen; // 0x28(0x28)
	struct TSoftObjectPtr<struct USoundBase> m_soundClose; // 0x50(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> m_skeletalMesh; // 0x78(0x28)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInterface>> m_skeletalMeshMaterialOverrides; // 0xa0(0x10)
	struct TSoftObjectPtr<struct UAnimSequenceBase> m_openAnimation; // 0xb0(0x28)
	int32_t m_weightLimit; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<enum class EYLootContainerTier, struct FDataTableRowHandle> m_lootTiers; // 0xe0(0x50)
};

// ScriptStruct Prospect.YLootItemAmountRow
// Size: 0x28 (Inherited: 0x10)
struct FYLootItemAmountRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_itemRowHandle; // 0x10(0x10)
	int32_t m_amountMin; // 0x20(0x04)
	int32_t m_amountMax; // 0x24(0x04)
};

// ScriptStruct Prospect.YLootItemAmount
// Size: 0x18 (Inherited: 0x00)
struct FYLootItemAmount {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YLootCountRow
// Size: 0x20 (Inherited: 0x10)
struct FYLootCountRow : FYDataTableRowBase {
	struct TArray<struct FYLootCountData> m_lootRolls; // 0x10(0x10)
};

// ScriptStruct Prospect.YLootCountData
// Size: 0x18 (Inherited: 0x00)
struct FYLootCountData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	int32_t m_rollCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YLootRollRow
// Size: 0x20 (Inherited: 0x10)
struct FYLootRollRow : FYDataTableRowBase {
	struct TArray<struct FYWeightedRowHandle> m_rowHandles; // 0x10(0x10)
};

// ScriptStruct Prospect.YWeightedRowHandle
// Size: 0x18 (Inherited: 0x00)
struct FYWeightedRowHandle {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	float m_spawnWeight; // 0x10(0x04)
	float m_spawnChanceInPercent; // 0x14(0x04)
};

// ScriptStruct Prospect.YLootTuningRow
// Size: 0x270 (Inherited: 0x10)
struct FYLootTuningRow : FYDataTableRowBase {
	struct TMap<enum class EYLootSourceType, struct FYDespawnPickUpInfo> m_pickUpTypesToDestroyWhenNoPlayerIsClose; // 0x10(0x50)
	float m_serverPickUpDestructionSafeTime; // 0x60(0x04)
	float m_pickUpInteractionTimeDefault; // 0x64(0x04)
	float m_pickUpInteractionTimeWeapon; // 0x68(0x04)
	float m_pickUpInteractionTimeAbility; // 0x6c(0x04)
	struct TMap<enum class EYLootSourceType, float> m_exclusivePickUpTimes; // 0x70(0x50)
	int32_t m_autoPickupRadius; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FDataTableRowHandle m_moneyDropRow; // 0xc8(0x10)
	struct TMap<enum class EYPickupType, struct UParticleSystem*> m_highlightParticles; // 0xd8(0x50)
	struct TMap<enum class EYPickupType, struct UParticleSystem*> m_legendaryHighlightParticles; // 0x128(0x50)
	struct TMap<enum class EYPickupType, struct FDataTableRowHandle> m_scannableRows; // 0x178(0x50)
	struct TSoftObjectPtr<struct UStaticMesh> m_defaultAbilityLootMesh; // 0x1c8(0x28)
	SoftClassProperty m_widgetClass; // 0x1f0(0x28)
	int32_t m_navMeshRandomPointInRadiusForLootDrops; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TMap<enum class EYLootVelocityType, struct FYRarityLootVelocitySettings> m_lootVelocitySettings; // 0x220(0x50)
};

// ScriptStruct Prospect.YRarityLootVelocitySettings
// Size: 0x50 (Inherited: 0x00)
struct FYRarityLootVelocitySettings {
	struct TMap<enum class EYItemRarityType, struct FYLootVelocitySettings> m_rarityVelocitySettings; // 0x00(0x50)
};

// ScriptStruct Prospect.YLootVelocitySettings
// Size: 0x0c (Inherited: 0x00)
struct FYLootVelocitySettings {
	float m_maxLootSpeed; // 0x00(0x04)
	float m_minLootSpeed; // 0x04(0x04)
	float m_lootSpawnAngleDegrees; // 0x08(0x04)
};

// ScriptStruct Prospect.YDespawnPickUpInfo
// Size: 0x08 (Inherited: 0x00)
struct FYDespawnPickUpInfo {
	float m_minAlivePickUpTime; // 0x00(0x04)
	float m_minPlayerDistance; // 0x04(0x04)
};

// ScriptStruct Prospect.YLootItemDataTableRow
// Size: 0x450 (Inherited: 0x310)
struct FYLootItemDataTableRow : FYItemDataTableRowBase {
	enum class EYPickupType m_type; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	SoftClassProperty m_pickupActorClass; // 0x318(0x28)
	struct FDataTableRowHandle m_additionalRowHandle; // 0x340(0x10)
	bool m_disableAfterInteractionCompleted; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TArray<struct TSoftObjectPtr<struct UObject>> m_meshes; // 0x358(0x10)
	bool m_showInteractionWidget; // 0x368(0x01)
	bool m_showNotificationMessage; // 0x369(0x01)
	bool m_displayItemAmount; // 0x36a(0x01)
	bool m_showActorUIComponent; // 0x36b(0x01)
	char pad_36C[0x4]; // 0x36c(0x04)
	SoftClassProperty m_widgetClass; // 0x370(0x28)
	struct FYActorUIWidgetData m_uiWidgetData; // 0x398(0xa0)
	bool m_blockMovementWhileInteracting; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FDataTableRowHandle m_pickUpSoundRowHandle; // 0x440(0x10)
};

// ScriptStruct Prospect.YGameplayTagToLootPoolAssociation
// Size: 0x18 (Inherited: 0x00)
struct FYGameplayTagToLootPoolAssociation {
	struct FGameplayTag m_gameplayTag; // 0x00(0x08)
	struct TArray<struct FString> m_lootTags; // 0x08(0x10)
};

// ScriptStruct Prospect.YMapInfoRow
// Size: 0x118 (Inherited: 0x08)
struct FYMapInfoRow : FTableRowBase {
	struct FText m_name; // 0x08(0x18)
	struct FText m_description; // 0x20(0x18)
	struct FText m_tooltip; // 0x38(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_image; // 0x50(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_mapSelectionImage; // 0x78(0x28)
	struct TSoftObjectPtr<struct UObject> m_persistentMap; // 0xa0(0x28)
	enum class EYMatchMapDifficulty m_difficulty; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TSoftObjectPtr<struct UMaterialInterface> m_hologramMaterial; // 0xd0(0x28)
	struct FYVFXNiagaraMapInfo m_VFXNiagaraMapInfo; // 0xf8(0x20)
};

// ScriptStruct Prospect.YVFXNiagaraMapInfo
// Size: 0x20 (Inherited: 0x00)
struct FYVFXNiagaraMapInfo {
	struct FVector StormOccusionCenter01; // 0x00(0x0c)
	float StormOcclusionRadius01; // 0x0c(0x04)
	struct FVector StormOccusionCenter02; // 0x10(0x0c)
	float StormOcclusionRadius02; // 0x1c(0x04)
};

// ScriptStruct Prospect.YMatchmakingSetupRow
// Size: 0x90 (Inherited: 0x08)
struct FYMatchmakingSetupRow : FTableRowBase {
	struct FYMatchmakingSetupEntry stationSetup; // 0x08(0x1c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FYMatchmakingSetupMatchEntry> matchSetups; // 0x28(0x10)
	enum class EYMatchmakingMapOptions matchMapChoiceOption; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FYMatchmakingBeginnerFlagSetup beginnerFlagRules; // 0x3c(0x10)
	int32_t rejoinOnDeathCooldownMinutes; // 0x4c(0x04)
	bool enableJoinConcurrencyTempLock; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t shardsPerStationServer; // 0x54(0x04)
	struct FYMatchmakingRegionSetup regionsSetup; // 0x58(0x20)
	struct FYMatchmakingNVRSetup nvrSetup; // 0x78(0x14)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Prospect.YMatchmakingNVRSetup
// Size: 0x14 (Inherited: 0x00)
struct FYMatchmakingNVRSetup {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t userNVRSamples; // 0x04(0x04)
	float sessionFillRatioThreshold; // 0x08(0x04)
	int32_t decayIntervalDays; // 0x0c(0x04)
	float decayEffectPerInterval; // 0x10(0x04)
};

// ScriptStruct Prospect.YMatchmakingRegionSetup
// Size: 0x20 (Inherited: 0x00)
struct FYMatchmakingRegionSetup {
	struct FString defaultRegion; // 0x00(0x10)
	struct TArray<struct FYMatchmakingRegionSetupEntry> Overrides; // 0x10(0x10)
};

// ScriptStruct Prospect.YMatchmakingRegionSetupEntry
// Size: 0x18 (Inherited: 0x00)
struct FYMatchmakingRegionSetupEntry {
	struct FString Region; // 0x00(0x10)
	enum class EYMatchmakingRegionOverrideOptions Option; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YMatchmakingBeginnerFlagSetup
// Size: 0x10 (Inherited: 0x00)
struct FYMatchmakingBeginnerFlagSetup {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t matchesPlayedThreshold; // 0x04(0x04)
	int32_t evacsThreshold; // 0x08(0x04)
	int32_t consecutiveDeathsThreshold; // 0x0c(0x04)
};

// ScriptStruct Prospect.YMatchmakingSetupEntry
// Size: 0x1c (Inherited: 0x00)
struct FYMatchmakingSetupEntry {
	int32_t maxAmountOfPlayers; // 0x00(0x04)
	int32_t maxAmountOfPlayersBeginner; // 0x04(0x04)
	enum class EYMatchmakingUsersAmountOptions usersAmountOption; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t m_sessionTotalLengthUntilShutdown; // 0x0c(0x04)
	int32_t m_sessionUntilNoMatchmaking; // 0x10(0x04)
	int32_t m_sessionUntilClientWarning; // 0x14(0x04)
	int32_t m_sessionNoPlayerConnectServerShutdown; // 0x18(0x04)
};

// ScriptStruct Prospect.YMatchmakingSetupMatchEntry
// Size: 0x30 (Inherited: 0x1c)
struct FYMatchmakingSetupMatchEntry : FYMatchmakingSetupEntry {
	bool Enabled; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString fullMapName; // 0x20(0x10)
};

// ScriptStruct Prospect.YSetAllowJoinRequest
// Size: 0x18 (Inherited: 0x00)
struct FYSetAllowJoinRequest {
	struct FString SessionId; // 0x00(0x10)
	bool allowJoin; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Prospect.YMatchPhaseData
// Size: 0x28 (Inherited: 0x00)
struct FYMatchPhaseData {
	struct FDataTableRowHandle m_matchFlowRowHandle; // 0x00(0x10)
	struct FDataTableRowHandle m_matchPhaseDefinitionRowHandle; // 0x10(0x10)
	bool m_shouldForcePhaseTransition; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YMatchPhaseGameplayRow
// Size: 0x30 (Inherited: 0x10)
struct FYMatchPhaseGameplayRow : FYDataTableRowBase {
	bool m_isStormActive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float m_cycleSpikeSpawnProbability; // 0x14(0x04)
	bool m_isPlayerSpawningEnabled; // 0x18(0x01)
	bool m_isEscapeActivityEnabled; // 0x19(0x01)
	bool m_isAIUsingStormLoot; // 0x1a(0x01)
	bool m_useAIStormSquads; // 0x1b(0x01)
	bool m_isStormMineralsActivityActive; // 0x1c(0x01)
	bool m_isStormDepositActive; // 0x1d(0x01)
	bool m_isPowerUpResetAllowed; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct TArray<struct FDataTableRowHandle> m_activeLightingTypes; // 0x20(0x10)
};

// ScriptStruct Prospect.YMatchPhaseVisualRow
// Size: 0x140 (Inherited: 0x10)
struct FYMatchPhaseVisualRow : FYDataTableRowBase {
	float m_blendingDuration; // 0x10(0x04)
	float m_normalizedWindIntensity; // 0x14(0x04)
	float m_exponentialHeightFog_FogDensity; // 0x18(0x04)
	float m_exponentialHeightFog_MaxOpacity; // 0x1c(0x04)
	float m_exponentialHeightFog_ExtinctionScale; // 0x20(0x04)
	float m_exponentialHeightFog_HeightFalloff; // 0x24(0x04)
	struct FLinearColor m_exponentialHeightFog_InscatteringColor; // 0x28(0x10)
	struct FLinearColor m_exponentialHeightFog_DirectionalInscatteringColor; // 0x38(0x10)
	struct FLinearColor m_exponentialHeightFog_Albedo; // 0x48(0x10)
	float m_directionalLight_Intensity; // 0x58(0x04)
	struct FLinearColor m_directionalLight_LightColor; // 0x5c(0x10)
	struct FLinearColor m_directionalLight_BloomColor; // 0x6c(0x10)
	float m_directionalLight_BloomScale; // 0x7c(0x04)
	float m_directionalLight_SourceSoftAngle; // 0x80(0x04)
	struct FLinearColor m_directionalLight_CloudScatteredLuminanceScale; // 0x84(0x10)
	float m_skyLight_Intensity; // 0x94(0x04)
	float m_skyLight_OcclusionExponent; // 0x98(0x04)
	struct FLinearColor m_skyLight_LightColor; // 0x9c(0x10)
	struct FLinearColor m_skyLight_LowerHemisphereColor; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UTextureCube* m_skyLight_Cubemap; // 0xc0(0x08)
	struct FLinearColor m_skyAtmosphere_MieScattering; // 0xc8(0x10)
	float m_skyAtmosphere_MieScatteringScale; // 0xd8(0x04)
	float m_skyAtmosphere_HeightFogContribution; // 0xdc(0x04)
	float m_postProcess_ColorGradingLUTIntensity; // 0xe0(0x04)
	float m_postProcess_GrainIntensity; // 0xe4(0x04)
	float m_postProcess_LensFlareIntensity; // 0xe8(0x04)
	float m_postProcess_ExposureCompensation; // 0xec(0x04)
	float m_postProcess_ExposureMinBrightness; // 0xf0(0x04)
	float m_postProcess_BloomIntensity; // 0xf4(0x04)
	float m_postProcess_ChromaticAberrationIntensity; // 0xf8(0x04)
	struct FLinearColor m_postProcess_IndirectLightingColor; // 0xfc(0x10)
	float m_cloudManager_CloudAnim; // 0x10c(0x04)
	float m_cloudManager_LightningAmount; // 0x110(0x04)
	float m_rainManager_NormalizedRainAmount; // 0x114(0x04)
	float m_rainManager_Opacity; // 0x118(0x04)
	float m_stormAmbientManager_NormalizedAtmosphereSpawnRate; // 0x11c(0x04)
	float m_stormAmbientManager_NormalizedDebrisSpawnRate; // 0x120(0x04)
	float m_stormLightning_DistantLightningSpawnRate; // 0x124(0x04)
	float m_mpc_normalizedStormIntensity; // 0x128(0x04)
	float m_mpc_normalizedStormEmissiveIntensity; // 0x12c(0x04)
	float m_mpc_normalizedWetnessAmount; // 0x130(0x04)
	float m_mpc_skyBackgroundObjectsOpacity; // 0x134(0x04)
	float m_mpc_globalTimeMultiplier; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct Prospect.YMatchPhaseDefinitionRow
// Size: 0x38 (Inherited: 0x10)
struct FYMatchPhaseDefinitionRow : FYDataTableRowBase {
	float m_phaseDuration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDataTableRowHandle m_visualRowHandle; // 0x18(0x10)
	struct FDataTableRowHandle m_gameplayRowHandle; // 0x28(0x10)
};

// ScriptStruct Prospect.YMatchFlowRow
// Size: 0x20 (Inherited: 0x10)
struct FYMatchFlowRow : FYDataTableRowBase {
	struct TArray<struct FDataTableRowHandle> m_matchFlow; // 0x10(0x10)
};

// ScriptStruct Prospect.YTrackedMessageUser
// Size: 0x18 (Inherited: 0x00)
struct FYTrackedMessageUser {
	struct FString m_userId; // 0x00(0x10)
	float m_lastTimeSentMessage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YMetaDataTableRowSettings
// Size: 0x30 (Inherited: 0x10)
struct FYMetaDataTableRowSettings : FYDataTableRowBase {
	int32_t m_maximumGenericAwaredSoftCurrency; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDataTableRowHandle m_defaultScrappingRow; // 0x18(0x10)
	float m_softCurrencyRerollCost; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YMineralDefinitionRow
// Size: 0xa8 (Inherited: 0x10)
struct FYMineralDefinitionRow : FYAssetVariationDefinitionRow {
	struct TSoftObjectPtr<struct UDestructibleMesh> m_destructibleMesh; // 0x10(0x28)
	struct FDataTableRowHandle m_scannableRowHandle; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInterface>> m_destructibleMaterialOverrides; // 0x48(0x10)
	struct TMap<enum class EYMineralTier, struct FDataTableRowHandle> m_lootListRoll; // 0x58(0x50)
};

// ScriptStruct Prospect.YMissionDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FYMissionDataTableRow : FYDataTableRowBase {
	struct UYMetaQuestPlayerInstanceComponent* m_missionObject; // 0x10(0x08)
	struct FText m_missionName; // 0x18(0x18)
	struct TArray<struct FYMissionRuntimeData> m_missionStepEntriesData; // 0x30(0x10)
	struct FDataTableRowHandle m_rewards; // 0x40(0x10)
	struct FDataTableRowHandle m_nextMissionRow; // 0x50(0x10)
};

// ScriptStruct Prospect.YMissionStepEntry
// Size: 0x48 (Inherited: 0x10)
struct FYMissionStepEntry : FYDataTableRowBase {
	struct FYMissionInitializationData m_missionInitData; // 0x10(0x38)
};

// ScriptStruct Prospect.YMissionInitializationData
// Size: 0x38 (Inherited: 0x00)
struct FYMissionInitializationData {
	struct FText m_missionStepDescription; // 0x00(0x18)
	struct FText m_missionStepNpcText; // 0x18(0x18)
	struct UYMetaQuestPlayerInstanceComponent* m_metaQuestInstanceComponent; // 0x30(0x08)
};

// ScriptStruct Prospect.YOnboardingRewardRow
// Size: 0x20 (Inherited: 0x10)
struct FYOnboardingRewardRow : FYDataTableRowBase {
	struct TArray<struct FYOnboardingRewardEntry> m_rewards; // 0x10(0x10)
};

// ScriptStruct Prospect.YOnboardingRewardEntry
// Size: 0x20 (Inherited: 0x00)
struct FYOnboardingRewardEntry {
	enum class EYRewardType m_rewardType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_rewardRowHandle; // 0x08(0x10)
	int32_t m_amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YOnboardingBlockedFeaturesDataTableRow
// Size: 0x78 (Inherited: 0x10)
struct FYOnboardingBlockedFeaturesDataTableRow : FYDataTableRowBase {
	struct FText m_featureName; // 0x10(0x18)
	struct FText m_headerText; // 0x28(0x18)
	struct FText m_bodyText; // 0x40(0x18)
	struct FDataTableRowHandle m_relatedScene; // 0x58(0x10)
	struct FDataTableRowHandle m_sceneToShow; // 0x68(0x10)
};

// ScriptStruct Prospect.YQuestDataDataTableRow
// Size: 0x58 (Inherited: 0x10)
struct FYQuestDataDataTableRow : FYDataTableRowBase {
	struct FText m_questName; // 0x10(0x18)
	struct TArray<struct FDataTableRowHandle> m_questTaskData; // 0x28(0x10)
	struct FDataTableRowHandle m_reward; // 0x38(0x10)
	struct FDataTableRowHandle m_followQuest; // 0x48(0x10)
};

// ScriptStruct Prospect.YQuestTaskDataDataTableRow
// Size: 0x48 (Inherited: 0x10)
struct FYQuestTaskDataDataTableRow : FYDataTableRowBase {
	enum class EYOnboardingQuestType m_questType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText m_questTaskText; // 0x18(0x18)
	struct FString customData; // 0x30(0x10)
	int32_t currentProgress; // 0x40(0x04)
	int32_t maxProgress; // 0x44(0x04)
};

// ScriptStruct Prospect.YMissionRuntimeInitializationData
// Size: 0x30 (Inherited: 0x00)
struct FYMissionRuntimeInitializationData {
	struct FYMissionState m_missionState; // 0x00(0x28)
	int32_t m_progress; // 0x28(0x04)
	bool m_shouldShowPopup; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Prospect.YMissionStepProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FYMissionStepProgressEntry {
	int32_t m_stepHandle; // 0x00(0x04)
	enum class EYMissionResultType m_result; // 0x04(0x01)
	char pad_5[0x13]; // 0x05(0x13)
};

// ScriptStruct Prospect.YUIMissionLineStepInfo
// Size: 0x98 (Inherited: 0x00)
struct FYUIMissionLineStepInfo {
	struct FString m_stepId; // 0x00(0x10)
	struct FText m_title; // 0x10(0x18)
	struct FText m_stepTitle; // 0x28(0x18)
	struct FText m_popupDescription; // 0x40(0x18)
	struct FText m_missionStepNpcText; // 0x58(0x18)
	struct FDataTableRowHandle m_stepEntry; // 0x70(0x10)
	int32_t m_startProgress; // 0x80(0x04)
	int32_t m_maxProgress; // 0x84(0x04)
	struct UTexture2D* m_stepIcon; // 0x88(0x08)
	bool shouldShowPopup; // 0x90(0x01)
	bool m_initialized; // 0x91(0x01)
	bool m_ismissionCompletedEntry; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
};

// ScriptStruct Prospect.YMockAIWorldWrapper
// Size: 0x08 (Inherited: 0x00)
struct FYMockAIWorldWrapper {
	struct UWorld* m_world; // 0x00(0x08)
};

// ScriptStruct Prospect.YMockPlayerActor_Test
// Size: 0x08 (Inherited: 0x00)
struct FYMockPlayerActor_Test {
	struct UWorld* m_world; // 0x00(0x08)
};

// ScriptStruct Prospect.YModSettingsDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FYModSettingsDataTableRow : FYDataTableRowBase {
	struct TMap<enum class EYModificationSlotType, struct FYModSettingsEntry> m_modSettings; // 0x10(0x50)
};

// ScriptStruct Prospect.YModSettingsEntry
// Size: 0x38 (Inherited: 0x00)
struct FYModSettingsEntry {
	struct TSoftObjectPtr<struct UTexture2D> m_icon; // 0x00(0x28)
	struct FDataTableRowHandle m_noDataTableRowHandle; // 0x28(0x10)
};

// ScriptStruct Prospect.YItemStatAndPossibleRange
// Size: 0x10 (Inherited: 0x00)
struct FYItemStatAndPossibleRange {
	enum class EYItemStatsType m_itemStatType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_currentVal; // 0x04(0x04)
	float m_worstVal; // 0x08(0x04)
	float m_bestVal; // 0x0c(0x04)
};

// ScriptStruct Prospect.YCraftedItemModsData
// Size: 0x20 (Inherited: 0x00)
struct FYCraftedItemModsData {
	struct TArray<struct FString> modsIds; // 0x00(0x10)
	struct TArray<struct FString> modsRoll; // 0x10(0x10)
};

// ScriptStruct Prospect.YModEntryRollEntry
// Size: 0x08 (Inherited: 0x00)
struct FYModEntryRollEntry {
	int32_t m_modRollValue; // 0x00(0x04)
	enum class EYItemRarityType m_modRollRarity; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Prospect.YBaseModRow
// Size: 0x370 (Inherited: 0x310)
struct FYBaseModRow : FYItemDataTableRowBase {
	int32_t m_shortModId; // 0x310(0x04)
	enum class EYModificationSlotType m_modType; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeMods; // 0x318(0x10)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x328(0x28)
	struct FDataTableRowHandle m_perkRowHandle; // 0x350(0x10)
	struct TArray<struct FYOverridenModInstanceData> m_perHandlePropertyDefinition; // 0x360(0x10)
};

// ScriptStruct Prospect.YOverridenModInstanceData
// Size: 0x90 (Inherited: 0x00)
struct FYOverridenModInstanceData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	struct TArray<struct FYModAttachEntry> m_meshAttachments; // 0x10(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeMods; // 0x20(0x10)
	struct FDataTableRowHandle m_fxCategoryHandle; // 0x30(0x10)
	struct FDataTableRowHandle m_transportHandle; // 0x40(0x10)
	struct UCurveFloat* m_overridenRecoilCurve; // 0x50(0x08)
	struct FYFullscreenCrosshairData m_crosshairData; // 0x58(0x30)
	bool m_shouldOffsetScope; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float m_scopeOffset; // 0x8c(0x04)
};

// ScriptStruct Prospect.YFullscreenCrosshairData
// Size: 0x30 (Inherited: 0x00)
struct FYFullscreenCrosshairData {
	SoftClassProperty m_widget; // 0x00(0x28)
	enum class EYOverrideShowWeapon m_weaponVisibilityWhileTargetingOverride; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YModAttachEntry
// Size: 0x30 (Inherited: 0x00)
struct FYModAttachEntry {
	struct TSoftObjectPtr<struct USkeletalMesh> m_mesh; // 0x00(0x28)
	struct FName m_socketAttachmentName; // 0x28(0x08)
};

// ScriptStruct Prospect.YUpgradeRow
// Size: 0x3d0 (Inherited: 0x370)
struct FYUpgradeRow : FYBaseModRow {
	struct TMap<enum class EYItemRarityType, struct FYRaritySettingsEntry> m_raritySettings; // 0x370(0x50)
	struct FYDataTableRowBase m_modTuningDataTableRow; // 0x3c0(0x10)
};

// ScriptStruct Prospect.YRaritySettingsEntry
// Size: 0x18 (Inherited: 0x00)
struct FYRaritySettingsEntry {
	float m_seedChance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FYRarityItemRoll> m_rarityItemRolls; // 0x08(0x10)
};

// ScriptStruct Prospect.YRarityItemRoll
// Size: 0x10 (Inherited: 0x00)
struct FYRarityItemRoll {
	enum class EYGameplayAttribute m_attribute; // 0x00(0x01)
	enum class EYGPAModifierType m_modifierType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float m_minValue; // 0x04(0x04)
	float m_maxValue; // 0x08(0x04)
	int32_t m_randomizationSteps; // 0x0c(0x04)
};

// ScriptStruct Prospect.YModRow
// Size: 0x468 (Inherited: 0x370)
struct FYModRow : FYBaseModRow {
	struct FText m_modName; // 0x370(0x18)
	struct TArray<struct FDataTableRowHandle> m_scopeTuningRow; // 0x388(0x10)
	struct TArray<enum class EYDeviceCategory> m_compatibleDeviceCategories; // 0x398(0x10)
	struct TArray<enum class EYAmmoType> m_compatibleAmmoCategories; // 0x3a8(0x10)
	bool m_compatibleAll; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FGameplayTagContainer m_compatibleModSlots; // 0x3c0(0x20)
	struct FDataTableRowHandle m_fxCategoryHandle; // 0x3e0(0x10)
	bool m_isFlashlight; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FDataTableRowHandle m_overridenBaseHandle; // 0x3f8(0x10)
	struct FDataTableRowHandle m_transportHandle; // 0x408(0x10)
	struct UCurveFloat* m_overridenRecoilCurve; // 0x418(0x08)
	struct FYFullscreenCrosshairData m_crosshairData; // 0x420(0x30)
	struct FName m_socketLocation; // 0x450(0x08)
	struct TArray<struct FDataTableRowHandle> m_scannableRowHandles; // 0x458(0x10)
};

// ScriptStruct Prospect.YOverridenModData
// Size: 0x58 (Inherited: 0x00)
struct FYOverridenModData {
	struct UCurveFloat* m_overridenRecoilCurve; // 0x00(0x08)
	struct FDataTableRowHandle m_transportHandle; // 0x08(0x10)
	struct FDataTableRowHandle m_fxCategory; // 0x18(0x10)
	struct FYFullscreenCrosshairData m_crosshairData; // 0x28(0x30)
};

// ScriptStruct Prospect.YModAttachmentInfo
// Size: 0x38 (Inherited: 0x00)
struct FYModAttachmentInfo {
	struct FYModAttachEntry m_modAttachEntryInfo; // 0x00(0x30)
	bool m_isDefaultAttachment; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Prospect.YNotificiationDataRequest
// Size: 0x50 (Inherited: 0x00)
struct FYNotificiationDataRequest {
	struct FText m_message; // 0x00(0x18)
	float m_duration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSlateColor m_color; // 0x20(0x28)
	enum class EYNotificationType m_type; // 0x48(0x01)
	enum class EYNotificationPlacement m_placement; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Prospect.YSpawnNPCRequestData
// Size: 0x60 (Inherited: 0x00)
struct FYSpawnNPCRequestData {
	struct FTransform m_baseTransform; // 0x00(0x30)
	struct AActor* m_owner; // 0x30(0x08)
	struct FDataTableRowHandle m_rowHandle; // 0x38(0x10)
	struct FDataTableRowHandle m_animationHandle; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Prospect.YNPCDataTableRow
// Size: 0x198 (Inherited: 0x10)
struct FYNPCDataTableRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_sceneToSpawn; // 0x10(0x10)
	SoftClassProperty m_classToSpawn; // 0x20(0x28)
	struct FDataTableRowHandle m_customizationRowHandle; // 0x48(0x10)
	bool m_randomizeCustomization; // 0x58(0x01)
	bool m_canBeToggledForPerfomance; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t m_interactionDistance; // 0x5c(0x04)
	struct FText m_name; // 0x60(0x18)
	struct FText m_title; // 0x78(0x18)
	struct FYActorPlateWidgetCreationData m_plateWidgetData; // 0x90(0x90)
	struct TSoftObjectPtr<struct UTexture2D> m_minimapIcon; // 0x120(0x28)
	bool m_canInteractWith; // 0x148(0x01)
	bool m_haveMinimapIcon; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
	struct FDataTableRowHandle m_factionRowHandle; // 0x150(0x10)
	struct FDataTableRowHandle m_voiceOver; // 0x160(0x10)
	struct FDataTableRowHandle m_interactVoiceOver; // 0x170(0x10)
	struct FDataTableRowHandle m_interactFinishedVoiceOver; // 0x180(0x10)
	float m_baseTranslationOffset; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// ScriptStruct Prospect.YActorPlateWidgetCreationData
// Size: 0x90 (Inherited: 0x00)
struct FYActorPlateWidgetCreationData {
	struct UYWidget_ActorPlate* m_widgetClass; // 0x00(0x08)
	struct FYWidgetActorPlateInitializationData m_initializationData; // 0x08(0x88)
};

// ScriptStruct Prospect.YWidgetActorPlateInitializationData
// Size: 0x88 (Inherited: 0x00)
struct FYWidgetActorPlateInitializationData {
	struct FVector m_offsetToActorLocation; // 0x00(0x0c)
	float m_maxRenderDistance; // 0x0c(0x04)
	float m_widgetScaleDistance; // 0x10(0x04)
	float m_dotProduct; // 0x14(0x04)
	float m_dotStartRangeDistanceScale; // 0x18(0x04)
	float m_dotScalingDistancePerMeterMultiplier; // 0x1c(0x04)
	float m_dotMaxmimumThreshold; // 0x20(0x04)
	float m_damageTakenVisibilityTime; // 0x24(0x04)
	float m_forceNonVisibileDurationOnTeleport; // 0x28(0x04)
	float m_minScaleValue; // 0x2c(0x04)
	float m_healthBarShowThreshold; // 0x30(0x04)
	struct FName m_socket; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FText m_NPCName; // 0x40(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_NPCIcon; // 0x58(0x28)
	bool m_alwaysShowLabel; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Prospect.YNPCAnimationAssetDataRow
// Size: 0x28 (Inherited: 0x10)
struct FYNPCAnimationAssetDataRow : FYDataTableRowBase {
	bool m_randomizeEmoteAnimation; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FSingleAnimationPlayData> m_animationPlayData; // 0x18(0x10)
};

// ScriptStruct Prospect.YRotationObjectEntry
// Size: 0x18 (Inherited: 0x00)
struct FYRotationObjectEntry {
	struct FRotator m_originalRotation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USceneComponent* m_component; // 0x10(0x08)
};

// ScriptStruct Prospect.YServerPerformanceTuningRow
// Size: 0x88 (Inherited: 0x10)
struct FYServerPerformanceTuningRow : FYDataTableRowBase {
	int32_t m_maxServerTickRate; // 0x10(0x04)
	int32_t m_playerUpdateFrequency; // 0x14(0x04)
	float m_serverGCInterval; // 0x18(0x04)
	float m_serverGCBudget; // 0x1c(0x04)
	float m_clientGCInterval; // 0x20(0x04)
	float m_clientGCBudget; // 0x24(0x04)
	float m_streamingTimeout; // 0x28(0x04)
	float m_streamingExtraLoadingTime; // 0x2c(0x04)
	float m_priorityLevelStreamingActorsTimeDroppod; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct FName, struct FYPreloadEntry> m_nameToPreloadClass; // 0x38(0x50)
};

// ScriptStruct Prospect.YPreloadEntry
// Size: 0x30 (Inherited: 0x00)
struct FYPreloadEntry {
	bool m_isServer; // 0x00(0x01)
	bool m_isClient; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	SoftClassProperty m_class; // 0x08(0x28)
};

// ScriptStruct Prospect.YPerkActivationData
// Size: 0x30 (Inherited: 0x00)
struct FYPerkActivationData {
	struct FVector m_contextLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UYGameplayAttributesComponent* m_gpaComponent; // 0x10(0x08)
	struct AActor* m_contextActor; // 0x18(0x08)
	struct AActor* m_instigator; // 0x20(0x08)
	enum class EYGameplayContextType m_contextType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YPlayerAwarenessTuningDataTableRow
// Size: 0x30 (Inherited: 0x10)
struct FYPlayerAwarenessTuningDataTableRow : FYDataTableRowBase {
	int32_t m_maxNotificationDistance; // 0x10(0x04)
	int32_t m_targetingMaxNotificationDistance; // 0x14(0x04)
	float m_dotProduct; // 0x18(0x04)
	float m_dotScalingDistancePerMeterMultiplier; // 0x1c(0x04)
	float m_dotMaxmimumThreshold; // 0x20(0x04)
	float m_requiredAimAtDuration; // 0x24(0x04)
	float m_requiredAimAtDurationTargeting; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YPlayerAwarenessNotificationDataTableRow
// Size: 0x48 (Inherited: 0x10)
struct FYPlayerAwarenessNotificationDataTableRow : FYDataTableRowBase {
	bool m_ignoreLocallyControlled; // 0x10(0x01)
	enum class EYPlayerAwarenessNotificationType m_notficationType; // 0x11(0x01)
	bool m_shouldPlayVo; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FDataTableRowHandle m_notificationVoRowHandle; // 0x18(0x10)
	bool m_shouldPlaySound; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDataTableRowHandle m_notificationSoundRowHandle; // 0x30(0x10)
	float m_notificationCooldown; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Prospect.YSetViewTargetData
// Size: 0x1c (Inherited: 0x00)
struct FYSetViewTargetData {
	struct TWeakObjectPtr<struct AActor> m_newViewTarget; // 0x00(0x08)
	struct FViewTargetTransitionParams m_newTargetTransitionParams; // 0x08(0x10)
	float m_lockTime; // 0x18(0x04)
};

// ScriptStruct Prospect.YPlayerEquippedWeaponData
// Size: 0x03 (Inherited: 0x00)
struct FYPlayerEquippedWeaponData {
	enum class EYEquipedWeaponPoseType m_equippedWeaponPoseType; // 0x00(0x01)
	enum class EYEquipedAnimationWeaponType m_equippedAnimationWeaponType; // 0x01(0x01)
	enum class EYDeviceCategory m_equippedDeviceCategory; // 0x02(0x01)
};

// ScriptStruct Prospect.YPlayerAimDirectionData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerAimDirectionData {
	struct FRotator m_aimRotation; // 0x00(0x0c)
	struct FRotator m_capsuleRotation; // 0x0c(0x0c)
	struct FRotator m_actorRotation; // 0x18(0x0c)
	bool m_isTargeting; // 0x24(0x01)
	bool m_isPendingTargeting; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Prospect.YPlayerMovementData
// Size: 0x2c (Inherited: 0x00)
struct FYPlayerMovementData {
	bool m_isSprinting; // 0x00(0x01)
	bool m_isCrouching; // 0x01(0x01)
	bool m_isSliding; // 0x02(0x01)
	bool m_isProning; // 0x03(0x01)
	bool m_isFalling; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector m_velocity; // 0x08(0x0c)
	struct FVector m_lastInputVector; // 0x14(0x0c)
	struct FVector m_actorForwardVector; // 0x20(0x0c)
};

// ScriptStruct Prospect.YStateDebugData
// Size: 0x18 (Inherited: 0x00)
struct FYStateDebugData {
	struct FString m_output; // 0x00(0x10)
	struct FColor m_color; // 0x10(0x04)
	bool m_isActive; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Prospect.YStateChangedData
// Size: 0x10 (Inherited: 0x00)
struct FYStateChangedData {
	int64_t m_state; // 0x00(0x08)
	int64_t m_eventCounter; // 0x08(0x08)
};

// ScriptStruct Prospect.YAuthorithyPlayerState
// Size: 0x30 (Inherited: 0x00)
struct FYAuthorithyPlayerState {
	struct TArray<int64_t> m_acknowledgedPredictedEventCounters; // 0x00(0x10)
	struct TArray<int64_t> m_serverEventAuthorithyCounter; // 0x10(0x10)
	int64_t m_stateBitmask; // 0x20(0x08)
	int64_t m_lastStateChangeWasInterrupted; // 0x28(0x08)
};

// ScriptStruct Prospect.YPlayerCharacterStateDelegateBinding
// Size: 0x48 (Inherited: 0x00)
struct FYPlayerCharacterStateDelegateBinding {
	struct FMulticastInlineDelegate OnStateDeActivated; // 0x00(0x10)
	struct FMulticastInlineDelegate OnStateActivated; // 0x10(0x10)
	struct TArray<struct FDelegate> m_activationDelegates; // 0x20(0x10)
	struct TArray<struct FDelegate> m_deactivationDelegates; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Prospect.YPlayerCharacterState
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerCharacterState {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Prospect.YEventArray
// Size: 0x10 (Inherited: 0x00)
struct FYEventArray {
	struct TArray<struct FString> m_entries; // 0x00(0x10)
};

// ScriptStruct Prospect.YRegisteredStackInput
// Size: 0x18 (Inherited: 0x00)
struct FYRegisteredStackInput {
	struct TArray<struct FYInputStackRuntimeContext> m_runtimeMinorStack; // 0x00(0x10)
	enum class EYInputUIStackType m_stackType; // 0x10(0x01)
	bool m_isActive; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Prospect.YInputStackRuntimeContext
// Size: 0x28 (Inherited: 0x00)
struct FYInputStackRuntimeContext {
	struct UWidget* m_widget; // 0x00(0x08)
	struct FDataTableRowHandle m_rowHandleAssociation; // 0x08(0x10)
	bool m_uiOnly; // 0x18(0x01)
	bool m_showCursor; // 0x19(0x01)
	bool m_isActive; // 0x1a(0x01)
	bool m_needToBeForcedClosed; // 0x1b(0x01)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct Prospect.YInputWidget
// Size: 0x20 (Inherited: 0x00)
struct FYInputWidget {
	struct TWeakObjectPtr<struct UWidget> m_widget; // 0x00(0x08)
	struct FString m_context; // 0x08(0x10)
	bool m_showCursor; // 0x18(0x01)
	bool m_uiOnly; // 0x19(0x01)
	bool m_hideCursorDuringCapture; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct Prospect.YMovementGroundAttackInfo
// Size: 0x24 (Inherited: 0x00)
struct FYMovementGroundAttackInfo {
	struct FVector m_impactLocation; // 0x00(0x0c)
	struct FVector m_impactDirection; // 0x0c(0x0c)
	struct FVector m_impactNormal; // 0x18(0x0c)
};

// ScriptStruct Prospect.YDEPRECATED_PullUpData
// Size: 0x10 (Inherited: 0x00)
struct FYDEPRECATED_PullUpData {
	struct FVector m_relativePullUpLocation; // 0x00(0x0c)
	bool m_isActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Prospect.YMovementImpulseData
// Size: 0x10 (Inherited: 0x00)
struct FYMovementImpulseData {
	struct FVector m_impulseToApply; // 0x00(0x0c)
	bool m_isActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Prospect.YMovementStateData
// Size: 0x0c (Inherited: 0x00)
struct FYMovementStateData {
	float m_currentSpeedReductionPerSecond; // 0x00(0x04)
	float m_cooldown; // 0x04(0x04)
	bool m_isActive; // 0x08(0x01)
	bool m_wantToBeActive; // 0x09(0x01)
	bool m_haveBeenReset; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Prospect.YRewardEntry
// Size: 0x30 (Inherited: 0x00)
struct FYRewardEntry {
	enum class EYRewardType m_rewardType; // 0x00(0x01)
	enum class EYPlayerRewardSource m_rewardSource; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText m_displayText; // 0x08(0x18)
	struct FName m_rewardId; // 0x20(0x08)
	int32_t m_amount; // 0x28(0x04)
	int32_t m_fromAmount; // 0x2c(0x04)
};

// ScriptStruct Prospect.YPlayerTuningDataTableRow
// Size: 0xaa0 (Inherited: 0x10)
struct FYPlayerTuningDataTableRow : FYDataTableRowBase {
	float m_wheelSelectionTapTime; // 0x10(0x04)
	float m_wheelMouseMoveDelay; // 0x14(0x04)
	struct FDataTableRowHandle m_damageInfoApplyForDamageSelf; // 0x18(0x10)
	struct FDataTableRowHandle m_weaponCharmRowHandle; // 0x28(0x10)
	int32_t m_amountOfToolSlots; // 0x38(0x04)
	bool m_cancelReloadWhenStartSprinting; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t m_heatMapMaxPositionElement; // 0x40(0x04)
	float m_durationDamagePlayerCountsa; // 0x44(0x04)
	float m_walkSpeedMaximum; // 0x48(0x04)
	float m_sprintSpeedModifier; // 0x4c(0x04)
	float m_walkSpeedMaximumInStation; // 0x50(0x04)
	float m_sprintSpeedModifierInStation; // 0x54(0x04)
	float m_sprintDashSpeedModifier; // 0x58(0x04)
	bool m_switchToToolState; // 0x5c(0x01)
	bool m_switchBackAutomatically; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float m_onlyFallingVelocityZReduction; // 0x60(0x04)
	float m_dotTresholdConsideredSprinting; // 0x64(0x04)
	float m_doubleTapTimeMoveKeys; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TMap<enum class EYPlayerStateBlueprint, struct FYMovementCosmeticDataPerState> m_stateChangedCosmeticData; // 0x70(0x50)
	float m_doubleTapSprintDashKeyTime; // 0xc0(0x04)
	bool m_sprintDashToggleUsesDoubleTapKeyTime; // 0xc4(0x01)
	bool m_canStartSlidingFromFalling; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	float m_slideVelocityReduction; // 0xc8(0x04)
	float m_minSlideSpeed; // 0xcc(0x04)
	float m_maxSlideSpeed; // 0xd0(0x04)
	float m_startSlideSpeed; // 0xd4(0x04)
	float m_startSlideSpeedFatgiued; // 0xd8(0x04)
	float m_slideFatgiueDuration; // 0xdc(0x04)
	struct UCurveFloat* m_slideVelocityChangeBasedOnSlope; // 0xe0(0x08)
	float m_slideStrafeInputMultiplier; // 0xe8(0x04)
	float m_slideCooldown; // 0xec(0x04)
	float m_slideSlopeEffect; // 0xf0(0x04)
	float m_slideBufferTime; // 0xf4(0x04)
	bool m_cameraTraceComplexCollision; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float m_cameraBoxThirdPersonCollision; // 0xfc(0x04)
	float m_climbingVerticalDistance; // 0x100(0x04)
	float m_climbingHorizontalDistance; // 0x104(0x04)
	float m_climbingMaxWallDistance; // 0x108(0x04)
	float m_climbingDesiredWallDistance; // 0x10c(0x04)
	float m_additionalEndLocationZOffset; // 0x110(0x04)
	float m_additionalVerticalLocationZOffset; // 0x114(0x04)
	float m_additionalViewDirectionOffset; // 0x118(0x04)
	float m_colliderScalarDuringMove; // 0x11c(0x04)
	struct TMap<enum class EYClimbingStateInternal, struct FYClimbingCosmeticDataPerState> m_climbingCosmeticsPerState; // 0x120(0x50)
	struct TMap<enum class EYObstacleType, float> m_obstacleHeightData; // 0x170(0x50)
	float m_climbingDefaultSpeed; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct TMap<enum class EYClimbingStateInternal, float> m_climbingSpeedPerState; // 0x1c8(0x50)
	struct TMap<enum class EYClimbingStateInternal, float> m_vaultingSpeedPerState; // 0x218(0x50)
	struct UCurveFloat* m_movementSpeedMultiplierByVelocity; // 0x268(0x08)
	struct UCurveFloat* m_movementLerpCurve; // 0x270(0x08)
	float m_climbingStaminaEmptyMovementMultiplier; // 0x278(0x04)
	float m_climbingCooldownTime; // 0x27c(0x04)
	float m_climbingDotThreshold; // 0x280(0x04)
	float m_climbingSurfaceSteepnessDotThreshold; // 0x284(0x04)
	float m_climbingCancelStateDotThreshold; // 0x288(0x04)
	bool m_climbingCancelStateBasedOnDotThreshold; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	float m_ledgeClimbingFallDistanceMultiplier; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct FName> m_excludedTags; // 0x298(0x10)
	bool m_lockViewDirection; // 0x2a8(0x01)
	bool m_softLockViewDirection; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	float m_softLockToleranceAngle; // 0x2ac(0x04)
	bool m_vaultingEnabled; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float m_vaultingVerticalDistance; // 0x2b4(0x04)
	bool m_vaultingRequiresGround; // 0x2b8(0x01)
	bool m_vaultingApplyDownVelocity; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	float m_maxLeaningAngleFirstPerson; // 0x2bc(0x04)
	float m_maxLeaningAngleThirdPerson; // 0x2c0(0x04)
	float m_maxLeaningTranslationFirstPerson; // 0x2c4(0x04)
	float m_maxLeaningTranslationThirdPerson; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<enum class EYPlayerStateBlueprint> m_leaningCancelStates; // 0x2d0(0x10)
	bool m_leaningLerpMethod; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float m_leaningRotationSpeed; // 0x2e4(0x04)
	struct UCurveFloat* m_leaningLerpMapping; // 0x2e8(0x08)
	bool m_leaningVelocityMethod; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float m_leaningMaxVelocity; // 0x2f4(0x04)
	float m_leaningAcceleration; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UCurveFloat* m_leaningMaxVelocityCurve; // 0x300(0x08)
	bool m_leaningEnabledCollisionCheck; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float m_leaningTraceHeight; // 0x30c(0x04)
	float m_leaningTraceDistance; // 0x310(0x04)
	float m_leaningSphereTraceRadius; // 0x314(0x04)
	float m_leaningAngleOffset; // 0x318(0x04)
	float m_minFOV; // 0x31c(0x04)
	float m_maxFOV; // 0x320(0x04)
	float m_cameraSprintingFOV; // 0x324(0x04)
	float m_cameraSprintDashFOV; // 0x328(0x04)
	float m_cameraSlideFOV; // 0x32c(0x04)
	float m_cameraDefaultFOV; // 0x330(0x04)
	float m_backwardMovementSpeedReduction; // 0x334(0x04)
	float m_sideMovementSpeedMultiplier; // 0x338(0x04)
	float m_cameraInterpolationTargetingReturnFOVSpeed; // 0x33c(0x04)
	float m_cameraInterpolationSprintingReturnFOVSpeed; // 0x340(0x04)
	float m_cameraInterpolationSprintDashReturnFOVSpeed; // 0x344(0x04)
	float m_cameraInterpolationSlideReturnFOVSpeed; // 0x348(0x04)
	float m_cameraInterpolationSprintingFOVSpeed; // 0x34c(0x04)
	float m_cameraInterpolationSprintDashFOVSpeed; // 0x350(0x04)
	float m_cameraInterpolationTargetingFOVSpeed; // 0x354(0x04)
	float m_cameraInterpolationSlideFOVSpeed; // 0x358(0x04)
	float m_cameraInterpolationDefaultFOVSpeed; // 0x35c(0x04)
	float m_defaultFOVAdjustmentSpeed; // 0x360(0x04)
	float m_TurnInputMultiplierSprinting; // 0x364(0x04)
	float m_TurnInputMultiplierSprintDashing; // 0x368(0x04)
	float m_fireInputBufferTime; // 0x36c(0x04)
	float m_firstPersonWeaponFOVDefaultType; // 0x370(0x04)
	int32_t m_numWeaponSlots; // 0x374(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> m_meleeAttackSkeletalMesh; // 0x378(0x28)
	struct FName m_meleeFirstPersonSocketAttachName; // 0x3a0(0x08)
	struct FName m_meleeThirdPersonSocketAttachName; // 0x3a8(0x08)
	struct FName m_meleeWeaponCosmeticAttachmentName; // 0x3b0(0x08)
	struct FName m_meleeWeaponSocketAttackPointName; // 0x3b8(0x08)
	struct FYPlayerMeleeData m_normalMeleeData; // 0x3c0(0x20)
	float m_interactionDamageInterupTime; // 0x3e0(0x04)
	float m_interactionTraceDistance; // 0x3e4(0x04)
	int32_t m_maxTeamSize; // 0x3e8(0x04)
	int32_t m_socialInviteSpamCount; // 0x3ec(0x04)
	float m_socialInviteMaxDistance; // 0x3f0(0x04)
	float m_socialInviteCounterDecrementTime; // 0x3f4(0x04)
	float m_pactCancellationSafeTimer; // 0x3f8(0x04)
	float m_pactInviteExpireTime; // 0x3fc(0x04)
	float m_pactBetrayalSwitchTime; // 0x400(0x04)
	float m_teamPactDuration; // 0x404(0x04)
	float m_pactInviteTraceDistance; // 0x408(0x04)
	float m_pactInvitePlayerSphereRadius; // 0x40c(0x04)
	float m_pactInviteMaxAngle; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesSolo; // 0x418(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesInPact; // 0x428(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesInPrePact; // 0x438(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesInSquad; // 0x448(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesReload; // 0x458(0x10)
	struct TArray<struct FYGameplayAttributeModifier> m_gameplayAttributesToApplyInRevive; // 0x468(0x10)
	struct FDataTableRowHandle m_dbnoAbility; // 0x478(0x10)
	float m_timeBetweenEachAnnouncement; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UYDefaultInventoryDataAsset* m_defaultPIEinventoryDataAsset; // 0x490(0x08)
	struct UYDefaultInventoryDataAsset* m_tutorialInventory; // 0x498(0x08)
	int32_t m_maxAbilityUpgrades; // 0x4a0(0x04)
	struct FVector m_localSpaceThirdPersonCameraOffset; // 0x4a4(0x0c)
	struct FVector m_overridenTestTHirdPersonCameraOffset; // 0x4b0(0x0c)
	float m_defaultTimeMoveToThirdPersonCamera; // 0x4bc(0x04)
	struct FVector m_localSpaceCrouchOffset; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FDataTableRowHandle m_defaultHealthRow; // 0x4d0(0x10)
	float m_cameraDeathOffset; // 0x4e0(0x04)
	float m_spectateDistanceStep; // 0x4e4(0x04)
	float m_minSpectateDistance; // 0x4e8(0x04)
	float m_maxSpectateDistance; // 0x4ec(0x04)
	struct FVector m_cameraSpectate3rdPersonViewOffset; // 0x4f0(0x0c)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct FDataTableRowHandle m_leavingMatchDamageInfoRowHandle; // 0x500(0x10)
	float m_fallingDamageStartDistance; // 0x510(0x04)
	float m_fallingDamageUUToDamagee; // 0x514(0x04)
	struct FDataTableRowHandle m_fallingDamageInfoApplyRowHandle; // 0x518(0x10)
	bool m_fallingDamageIgnoresShield; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	float m_hardLandingFallingDistanceMin; // 0x52c(0x04)
	float m_hardLandingStateActiveDuration; // 0x530(0x04)
	float m_hardLandingResetCameraPitchAndRollTime; // 0x534(0x04)
	struct UCurveVector* m_hardLandingMovementAndLookSpeedCurve; // 0x538(0x08)
	struct UCurveVector* m_mediumLandingMovementAndLookSpeedCurve; // 0x540(0x08)
	float m_mediumLandingFallingDistanceMin; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct UMatineeCameraShake* m_mediumLandingCameraShake; // 0x550(0x08)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifierDBMO; // 0x558(0x10)
	struct FYGameplayAttributeModifier m_attributeModifierWhileGettingExexcuted; // 0x568(0x70)
	float m_DBNODuration; // 0x5d8(0x04)
	float m_DBNODurationPact; // 0x5dc(0x04)
	float m_healthPercentAfterDBNO; // 0x5e0(0x04)
	float m_reviveDurationBase; // 0x5e4(0x04)
	float m_reviveDurationCameraTransition; // 0x5e8(0x04)
	float m_reviveBlockMovementDuration; // 0x5ec(0x04)
	float m_reviveCameraTransitionHeadSafeZoneRadius; // 0x5f0(0x04)
	float m_dbnoShieldMaxHealth; // 0x5f4(0x04)
	float m_recoilCompensationPitchValueDeadzone; // 0x5f8(0x04)
	float m_recoilCompensationYawValueDeadzone; // 0x5fc(0x04)
	float m_timeToRevealPlayersExecuted; // 0x600(0x04)
	float m_timeToTeleportDBNO; // 0x604(0x04)
	float m_DBNOCooldownUsedTeleport; // 0x608(0x04)
	float m_DBNOTeleportBlackScreenDuration; // 0x60c(0x04)
	float m_DBNOTeleportFadeFromBlackDuration; // 0x610(0x04)
	float m_spectateDeadPawnTime; // 0x614(0x04)
	float m_spectateRotationAnimationTime; // 0x618(0x04)
	float m_spectateRotationAnimationRadius; // 0x61c(0x04)
	float m_spectateRotationAnimationStartZOffset; // 0x620(0x04)
	float m_specateEaseOutTime; // 0x624(0x04)
	float m_spectateEaseOutMultiplier; // 0x628(0x04)
	float m_socialActorTraceDistance; // 0x62c(0x04)
	float m_pingableActorMaxAngle; // 0x630(0x04)
	int32_t m_commWheelMaxEvents; // 0x634(0x04)
	float m_commWheelRecuceEventCountSpamDuration; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct FSlateColor m_teamMateNotificationDiedColor; // 0x640(0x28)
	struct FSlateColor m_teamMateNotificationLeftColor; // 0x668(0x28)
	struct FSlateColor m_teamMateNotificationCancelledColor; // 0x690(0x28)
	struct FSlateColor m_pickupItemNotificationColor; // 0x6b8(0x28)
	struct FSlateColor m_gearStorePurchaseNotificationColor; // 0x6e0(0x28)
	float m_damageNumberLocationZOffset; // 0x708(0x04)
	struct FYPlayerUIHealthBarDeltaSettings m_uiHealthBarAdjustmentDeltaSettings; // 0x70c(0x30)
	char pad_73C[0x4]; // 0x73c(0x04)
	struct AYPlacementActor* m_placementActorVisualization; // 0x740(0x08)
	struct TArray<struct FYWeaponFireDelayStateData> m_fireDelaysAfterStateTransitions; // 0x748(0x10)
	float m_damageOverTimeAccumulativeMultiplier; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct UPhysicsAsset* m_thirdPersonBasePhysicsAsset; // 0x760(0x08)
	struct UObject* m_thirdPersonAnimationClass; // 0x768(0x08)
	struct UObject* m_stationAnimationClass; // 0x770(0x08)
	struct UObject* m_alternativeAnimationClass; // 0x778(0x08)
	struct UPhysicsAsset* m_firstPersonBasePhysicsAsset; // 0x780(0x08)
	struct USkeleton* m_baseSkeletonToUse; // 0x788(0x08)
	struct UObject* m_firstPersonAnimationClass; // 0x790(0x08)
	float m_cameraCustomizationRotatingAngleRotatingSpeed; // 0x798(0x04)
	float m_cameraCustomizationRotationMomentumSlowdown; // 0x79c(0x04)
	float m_cameraCustomizationAutoRotationSpeed; // 0x7a0(0x04)
	int32_t m_maxDamageEventsToStore; // 0x7a4(0x04)
	int32_t m_timeToLookBackForDamageEvents; // 0x7a8(0x04)
	int32_t m_maxNumEventsToUseForDamageRecap; // 0x7ac(0x04)
	int32_t m_maxNumCondensedEventsToShow; // 0x7b0(0x04)
	int32_t m_maxNumDetailsEntriesToShow; // 0x7b4(0x04)
	float m_maxHealthPercentWipeData; // 0x7b8(0x04)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct FText m_damageRecapDoTSuffix; // 0x7c0(0x18)
	int32_t m_timeToLookBackForDamageEventsDebug; // 0x7d8(0x04)
	int32_t m_maxNumEventsToUseForDamageRecapDebug; // 0x7dc(0x04)
	float m_findFloorWhileInAirTraceOffsetZEnd; // 0x7e0(0x04)
	float m_findFloorForPreferredDropLocationOffsetZStart; // 0x7e4(0x04)
	float m_findFloorForPreferredDropLocationOffsetZEnd; // 0x7e8(0x04)
	float m_findFloorForDropsOffsetZStart; // 0x7ec(0x04)
	float m_findFloorForDropsOffsetZEnd; // 0x7f0(0x04)
	float m_offsetZNavMeshProjectedReachableCheck; // 0x7f4(0x04)
	float m_vehicleMoveToThirdPersonPerspectiveTime; // 0x7f8(0x04)
	float m_vehicleMoveBackToFirstPersonTime; // 0x7fc(0x04)
	float m_vehicleLeavingTime; // 0x800(0x04)
	float m_vehicleBoostFOV; // 0x804(0x04)
	float m_vehicleMovingFOV; // 0x808(0x04)
	float m_vehicleSpeedFOV; // 0x80c(0x04)
	float m_vehicleIdleFOV; // 0x810(0x04)
	float m_vehicleHeightAlignmentRollAngleMax; // 0x814(0x04)
	float m_vehicleHeightAlignmentPitchAngleMax; // 0x818(0x04)
	float m_vehicleInterpRotationSpeed; // 0x81c(0x04)
	float m_boostDuration; // 0x820(0x04)
	float m_boostCooldown; // 0x824(0x04)
	float m_vehicleMaxPitch; // 0x828(0x04)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct FDataTableRowHandle m_boostLackingCooldownSound; // 0x830(0x10)
	SoftClassProperty m_defaultVehicleAsset; // 0x840(0x28)
	struct FRotator m_vehicleCustomizationRotation; // 0x868(0x0c)
	float m_vehicleStopMovementAtPossession; // 0x874(0x04)
	float m_lootMovementSpeedStart; // 0x878(0x04)
	float m_lootMovementSpeedIncreasePerSecond; // 0x87c(0x04)
	float m_lootDistanceCollectDistance; // 0x880(0x04)
	float m_maxDistanceLootingContainerBeforeCancel; // 0x884(0x04)
	bool m_blockPlayerMovementInputWhileLootingContainer; // 0x888(0x01)
	bool m_blockPlayerLookInputWhileLootingContainer; // 0x889(0x01)
	char pad_88A[0x2]; // 0x88a(0x02)
	float m_durationInBannerState; // 0x88c(0x04)
	float m_timeToSpawnBanner; // 0x890(0x04)
	char pad_894[0x4]; // 0x894(0x04)
	struct AYBannerActor* m_bannerPlacementActor; // 0x898(0x08)
	struct AYVehicle* m_vehiclePlacementActor; // 0x8a0(0x08)
	struct FVector m_bannerPlacementOffsetLocalSpace; // 0x8a8(0x0c)
	float m_bannerTransitionBackTime; // 0x8b4(0x04)
	float m_bannerTransitionBackDuration; // 0x8b8(0x04)
	float m_bannerSpawnCooldownTimer; // 0x8bc(0x04)
	struct AYMeleeActor* m_meleePlacementActor; // 0x8c0(0x08)
	struct AYSprayActor* m_sprayPlacementActor; // 0x8c8(0x08)
	float m_sprayDistance; // 0x8d0(0x04)
	int32_t m_amountOfSpraysToPlace; // 0x8d4(0x04)
	float m_emoteTransitionBackToFirstPersonDuration; // 0x8d8(0x04)
	struct FName m_meshSocketAttachBanner; // 0x8dc(0x08)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct UCurveFloat* m_recoilCompensationEaseIn; // 0x8e8(0x08)
	struct FLinearColor m_defaultControllerKeyboardLighting; // 0x8f0(0x10)
	int32_t m_numRandomizedMissions; // 0x900(0x04)
	int32_t m_numMissionShowedUpAsTracked; // 0x904(0x04)
	struct FName m_firstPersonWeaponAttachmentName; // 0x908(0x08)
	struct FName m_thirdPersonWeaponAttachmentName; // 0x910(0x08)
	struct FName m_thirdPersonCosmeticSocketAttachNameDefault; // 0x918(0x08)
	struct FName m_thirdPersonCosmeticSecondaryWeaponDefault; // 0x920(0x08)
	struct FName m_firstPersonCarryingItemAttachmentName; // 0x928(0x08)
	struct FName m_thirdPersonCarryingItemAttachmentName; // 0x930(0x08)
	float m_spawnOffsetMagnitude; // 0x938(0x04)
	struct FVector m_heightOffsetSpawn; // 0x93c(0x0c)
	float m_fadeInDurationAtSpawn; // 0x948(0x04)
	char pad_94C[0x4]; // 0x94c(0x04)
	struct TArray<struct FYPlayerStartScoreRule> m_playerStartScoreRules; // 0x950(0x10)
	float m_seamlessTravelTimeout; // 0x960(0x04)
	float m_transitionToMapCosmeticFadeTime; // 0x964(0x04)
	float m_timeoutStationSingleplayerNoConnect; // 0x968(0x04)
	float m_timeoutServerNoConnection; // 0x96c(0x04)
	struct FString m_defaultSeamlessMatchMap; // 0x970(0x10)
	struct FString m_defaultStationMap; // 0x980(0x10)
	struct FString m_defaultOutpostMap; // 0x990(0x10)
	struct FString m_defaultTutorialMap; // 0x9a0(0x10)
	struct FString m_tutorialIdentifier; // 0x9b0(0x10)
	struct TArray<struct FString> m_tutorialAdditionalURLOptions; // 0x9c0(0x10)
	struct FDataTableRowHandle m_quickMatchInfoHandle; // 0x9d0(0x10)
	struct FDataTableRowHandle m_missionSelectionSceneHandle; // 0x9e0(0x10)
	struct FDataTableRowHandle m_inboxSelectionSceneHandle; // 0x9f0(0x10)
	struct FViewTargetTransitionParams m_stationViewTargetParameter; // 0xa00(0x10)
	struct FViewTargetTransitionParams m_stationQuickMathInfoViewParameter; // 0xa10(0x10)
	float m_minImpulseZ; // 0xa20(0x04)
	float m_defaultAbilityPlacementVisualizationTraceDistance; // 0xa24(0x04)
	float m_abilityStateDuration; // 0xa28(0x04)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	struct TArray<enum class EYPlayerStateBlueprint> m_statesAllowedInStation; // 0xa30(0x10)
	struct UYWidget* m_transitionClass; // 0xa40(0x08)
	int32_t m_consumableSlotAmount; // 0xa48(0x04)
	char pad_A4C[0x4]; // 0xa4c(0x04)
	struct TMap<enum class EYContractObjectiveType, struct FText> m_defaultContractObjectiveTexts; // 0xa50(0x50)
};

// ScriptStruct Prospect.YWeaponFireDelayStateData
// Size: 0x08 (Inherited: 0x00)
struct FYWeaponFireDelayStateData {
	float m_fireDelay; // 0x00(0x04)
	enum class EYPlayerStateBlueprint m_playerState; // 0x04(0x01)
	enum class EYGameplayAttribute m_gameplayAttribute; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Prospect.YPlayerUIHealthBarDeltaSettings
// Size: 0x30 (Inherited: 0x00)
struct FYPlayerUIHealthBarDeltaSettings {
	struct FYPlayerUIHealthBarDeltaSettingsDetails m_healthOwn; // 0x00(0x0c)
	struct FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOwn; // 0x0c(0x0c)
	struct FYPlayerUIHealthBarDeltaSettingsDetails m_healthOnCharacterPlates; // 0x18(0x0c)
	struct FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOnCharacterPlates; // 0x24(0x0c)
};

// ScriptStruct Prospect.YPlayerUIHealthBarDeltaSettingsDetails
// Size: 0x0c (Inherited: 0x00)
struct FYPlayerUIHealthBarDeltaSettingsDetails {
	float m_deltaAdjustmentSpeed; // 0x00(0x04)
	float m_deltaAdjustmentInitialDelay; // 0x04(0x04)
	int32_t m_segmentSize; // 0x08(0x04)
};

// ScriptStruct Prospect.YPlayerMeleeData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerMeleeData {
	float m_attackDuration; // 0x00(0x04)
	float m_meleeAttackStrikeTime; // 0x04(0x04)
	struct FDataTableRowHandle m_meleeTransportHandle; // 0x08(0x10)
	enum class EYGameplayContextType m_damageContextType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YClimbingCosmeticDataPerState
// Size: 0x08 (Inherited: 0x00)
struct FYClimbingCosmeticDataPerState {
	struct UMatineeCameraShake* m_cameraShakeStateStarted; // 0x00(0x08)
};

// ScriptStruct Prospect.YMovementCosmeticDataPerState
// Size: 0x10 (Inherited: 0x00)
struct FYMovementCosmeticDataPerState {
	struct UMatineeCameraShake* m_cameraShakeStateActivated; // 0x00(0x08)
	struct UMatineeCameraShake* m_cameraShakeStateDeactivated; // 0x08(0x08)
};

// ScriptStruct Prospect.YProjectileInititalizationData
// Size: 0xa8 (Inherited: 0x00)
struct FYProjectileInititalizationData {
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x00(0x28)
	struct FVector m_initialVelocity; // 0x28(0x0c)
	struct FVector m_spawnPosition; // 0x34(0x0c)
	struct FDataTableRowHandle m_impactHandleRow; // 0x40(0x10)
	struct FDataTableRowHandle m_transportHandleRow; // 0x50(0x10)
	struct FDataTableRowHandle m_fxHandleRow; // 0x60(0x10)
	float m_overrideGravity; // 0x70(0x04)
	int32_t m_transportHandle; // 0x74(0x04)
	struct USceneComponent* m_homingToComponet; // 0x78(0x08)
	float m_armingTime; // 0x80(0x04)
	bool m_clientSideProjectile; // 0x84(0x01)
	bool m_isTargeting; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct FVector m_visualOriginTrailLocation; // 0x88(0x0c)
	struct FGuid m_shotGuid; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Prospect.YScoreData
// Size: 0x08 (Inherited: 0x00)
struct FYScoreData {
	int32_t m_placement; // 0x00(0x04)
	int32_t m_victoryPoints; // 0x04(0x04)
};

// ScriptStruct Prospect.YGameDebugState
// Size: 0x06 (Inherited: 0x00)
struct FYGameDebugState {
	bool m_infiniteAmmo; // 0x00(0x01)
	bool m_hitboxDebug; // 0x01(0x01)
	bool m_hitscanDebug; // 0x02(0x01)
	bool m_infiniteAbilityActive; // 0x03(0x01)
	bool m_haveGodmodeEnabled; // 0x04(0x01)
	bool m_haveInfiniteClipEnabled; // 0x05(0x01)
};

// ScriptStruct Prospect.YProspectorBadgeRow
// Size: 0x360 (Inherited: 0x310)
struct FYProspectorBadgeRow : FYItemDataTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x310(0x28)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x338(0x28)
};

// ScriptStruct Prospect.YProspectorLevelProgressionDataTableRow
// Size: 0x48 (Inherited: 0x10)
struct FYProspectorLevelProgressionDataTableRow : FYDataTableRowBase {
	int32_t m_forLevel; // 0x10(0x04)
	int32_t m_xpIncrement; // 0x14(0x04)
	struct FDataTableRowHandle m_baseRewardRow; // 0x18(0x10)
	struct FDataTableRowHandle m_evacRewardRow; // 0x28(0x10)
	struct FDataTableRowHandle m_baseXPPerMinuteRewardRow; // 0x38(0x10)
};

// ScriptStruct Prospect.YProspectorLevelRewardsDataTableRow
// Size: 0x3e8 (Inherited: 0x378)
struct FYProspectorLevelRewardsDataTableRow : FYVanityItemRowBase {
	int32_t m_startLevel; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FText m_title; // 0x380(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_borderPath; // 0x398(0x28)
	struct TSoftObjectPtr<struct UTexture2D> m_iconPath; // 0x3c0(0x28)
};

// ScriptStruct Prospect.YQuestItemRow
// Size: 0x360 (Inherited: 0x310)
struct FYQuestItemRow : FYItemDataTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> m_hudIconBig; // 0x310(0x28)
	struct TSoftObjectPtr<struct UObject> m_mesh; // 0x338(0x28)
};

// ScriptStruct Prospect.YItemRarityDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FYItemRarityDataTableRow : FYDataTableRowBase {
	struct TMap<enum class EYItemRarityType, struct FYRarityVisualizationData> m_visualizationData; // 0x10(0x50)
};

// ScriptStruct Prospect.YRarityVisualizationData
// Size: 0x50 (Inherited: 0x00)
struct FYRarityVisualizationData {
	struct TSoftObjectPtr<struct UTexture2D> m_texture; // 0x00(0x28)
	struct FSlateColor m_color; // 0x28(0x28)
};

// ScriptStruct Prospect.YRebindableInputAction
// Size: 0x50 (Inherited: 0x10)
struct FYRebindableInputAction : FYDataTableRowBase {
	enum class EYInputKeyType m_keyType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName m_axisNegativeInputAction; // 0x14(0x08)
	bool m_isRebindable; // 0x1c(0x01)
	bool m_isRequired; // 0x1d(0x01)
	enum class EYInputBindingCategory m_inputBindingCategory; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FText m_keyBindingText; // 0x20(0x18)
	struct FText m_keyBindingTextAxisNegative; // 0x38(0x18)
};

// ScriptStruct Prospect.YReplayMarker
// Size: 0x30 (Inherited: 0x00)
struct FYReplayMarker {
	struct FString m_nameID; // 0x00(0x10)
	int32_t m_timeInSeconds; // 0x10(0x04)
	struct FVector m_cameraLocation; // 0x14(0x0c)
	struct FRotator m_cameraRotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YResourceSessionRequestData
// Size: 0x28 (Inherited: 0x00)
struct FYResourceSessionRequestData {
	struct FYSessionResourceUserEntry m_sessionUserEntry; // 0x00(0x20)
	bool m_clearResources; // 0x20(0x01)
	bool m_forceRefreshEvaluateState; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Prospect.YSessionResourceUserEntry
// Size: 0x20 (Inherited: 0x00)
struct FYSessionResourceUserEntry {
	struct FString m_userId; // 0x00(0x10)
	struct FGuid m_instanceId; // 0x10(0x10)
};

// ScriptStruct Prospect.YResourceManagementState
// Size: 0x20 (Inherited: 0x00)
struct FYResourceManagementState {
	char pad_0[0x18]; // 0x00(0x18)
	enum class EYResourceAtomicState m_state; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YCachedPreloadData
// Size: 0x18 (Inherited: 0x00)
struct FYCachedPreloadData {
	struct FName m_name; // 0x00(0x08)
	struct UObject* m_instance; // 0x08(0x08)
	struct UObject* m_class; // 0x10(0x08)
};

// ScriptStruct Prospect.YResourceSpawnActorRequest
// Size: 0x120 (Inherited: 0x00)
struct FYResourceSpawnActorRequest {
	SoftClassProperty m_actorClass; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform m_transform; // 0x30(0x30)
	struct AActor* m_owner; // 0x60(0x08)
	struct FYInventoryItem m_inventoryItem; // 0x68(0x98)
	struct TArray<struct FDataTableRowHandle> m_rowHandles; // 0x100(0x10)
	struct UObject* m_specificClass; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct Prospect.YResourceManagerRequestEntry
// Size: 0x0c (Inherited: 0x00)
struct FYResourceManagerRequestEntry {
	int32_t m_handle; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)
};

// ScriptStruct Prospect.YRetentionBonusRequest
// Size: 0x01 (Inherited: 0x00)
struct FYRetentionBonusRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Prospect.YRetentionBonusResult
// Size: 0x30 (Inherited: 0x00)
struct FYRetentionBonusResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FYRetentionProgress playerData; // 0x20(0x10)
};

// ScriptStruct Prospect.YRetentionBonusRow
// Size: 0x28 (Inherited: 0x10)
struct FYRetentionBonusRow : FYDataTableRowBase {
	struct TArray<struct FYRetentionBonusEntry> m_rewards; // 0x10(0x10)
	bool m_active; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Prospect.YRetentionBonusEntry
// Size: 0x30 (Inherited: 0x00)
struct FYRetentionBonusEntry {
	enum class EYRetentionBonusEntryType m_rewardType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_rewardHandle; // 0x08(0x10)
	struct TArray<struct FDataTableRowHandle> m_rewardHandles; // 0x18(0x10)
	bool m_persistent; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YGeneratorCrateLevelToRewardsDataTableRow
// Size: 0x68 (Inherited: 0x10)
struct FYGeneratorCrateLevelToRewardsDataTableRow : FYDataTableRowBase {
	struct FText m_rewardsPackageName; // 0x10(0x18)
	int32_t m_level; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UDataTable> m_rewardsDropTablePath; // 0x30(0x28)
	struct TArray<struct FYRewardsPoolGrantTupleRow> m_rewardsGrants; // 0x58(0x10)
};

// ScriptStruct Prospect.YRewardsPoolGrantTupleRow
// Size: 0x10 (Inherited: 0x08)
struct FYRewardsPoolGrantTupleRow : FTableRowBase {
	enum class EYRewardType m_rewardType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t m_grantAmount; // 0x0c(0x04)
};

// ScriptStruct Prospect.YLeaderboardPlacementToRewardsDataTableRow
// Size: 0x80 (Inherited: 0x10)
struct FYLeaderboardPlacementToRewardsDataTableRow : FYDataTableRowBase {
	struct FText m_rewardsPackageName; // 0x10(0x18)
	int32_t m_leaderboardRank; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UDataTable> m_rewardsDropTablePath; // 0x30(0x28)
	struct TSoftObjectPtr<struct UDataTable> m_prospectorLevelVprewardsTablePath; // 0x58(0x28)
};

// ScriptStruct Prospect.YVPToRewarsdDataTableRow
// Size: 0x58 (Inherited: 0x10)
struct FYVPToRewarsdDataTableRow : FYDataTableRowBase {
	struct FText m_rewardsPackageName; // 0x10(0x18)
	int32_t m_vpThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UDataTable> m_rewardsDropTablePath; // 0x30(0x28)
};

// ScriptStruct Prospect.YLeadboardPlacementRewardDropTableEntry
// Size: 0x30 (Inherited: 0x00)
struct FYLeadboardPlacementRewardDropTableEntry {
	struct FText m_rewardsPackageName; // 0x00(0x18)
	int32_t m_leaderboardRank; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UDataTable* m_rewardsDT; // 0x20(0x08)
	struct UDataTable* m_prospectorLevelVPRewardsDT; // 0x28(0x08)
};

// ScriptStruct Prospect.YRewardDropTableEntry
// Size: 0x28 (Inherited: 0x00)
struct FYRewardDropTableEntry {
	struct FText m_rewardsPackageName; // 0x00(0x18)
	int32_t m_vpThreshold; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UDataTable* m_rewardsDT; // 0x20(0x08)
};

// ScriptStruct Prospect.RichHyperlinkRow
// Size: 0x508 (Inherited: 0x08)
struct FRichHyperlinkRow : FTableRowBase {
	struct FHyperlinkStyle HyperlinkStyle; // 0x08(0x500)
};

// ScriptStruct Prospect.YScanParameters
// Size: 0x28 (Inherited: 0x00)
struct FYScanParameters {
	struct UObject* m_worldContextObject; // 0x00(0x08)
	struct FVector m_scanLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDataTableRowHandle> m_exclusiveScanTypes; // 0x18(0x10)
};

// ScriptStruct Prospect.YScannableRow
// Size: 0x30 (Inherited: 0x10)
struct FYScannableRow : FYDataTableRowBase {
	float m_minScanDistance; // 0x10(0x04)
	float m_maxScanDistance; // 0x14(0x04)
	struct FString m_debugString; // 0x18(0x10)
	struct FColor m_color; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YSceneCompleteInitializationData
// Size: 0xb0 (Inherited: 0x00)
struct FYSceneCompleteInitializationData {
	struct FYSceneRuntimeInitializationData m_runtimeInitializationData; // 0x00(0x90)
	struct FYSceneRuntimeData m_runtimeData; // 0x90(0x10)
	int32_t m_uidHandle; // 0xa0(0x04)
	char pad_A4[0xc]; // 0xa4(0x0c)
};

// ScriptStruct Prospect.YSceneRuntimeData
// Size: 0x10 (Inherited: 0x00)
struct FYSceneRuntimeData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Prospect.YSceneRuntimeInitializationData
// Size: 0x90 (Inherited: 0x00)
struct FYSceneRuntimeInitializationData {
	struct FDataTableRowHandle m_rowHandle; // 0x00(0x10)
	struct FYSceneSetupData m_setupData; // 0x10(0x18)
	struct FViewTargetTransitionParams m_viewTargetParameters; // 0x28(0x10)
	bool m_requireTransitionOverlay; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTransform m_baseDetailTransformData; // 0x40(0x30)
	bool m_doCameraTransition; // 0x70(0x01)
	enum class EYSceneState m_startingSceneState; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FString m_contextActivationString; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Prospect.YSceneSetupData
// Size: 0x18 (Inherited: 0x00)
struct FYSceneSetupData {
	struct ACameraActor* m_detailCameraActor; // 0x00(0x08)
	struct ACameraActor* m_cameraActor; // 0x08(0x08)
	struct AActor* m_customizationPlacementLocation; // 0x10(0x08)
};

// ScriptStruct Prospect.YSceneDataTableRow
// Size: 0x78 (Inherited: 0x10)
struct FYSceneDataTableRow : FYDataTableRowBase {
	struct AYScene* m_bpClass; // 0x10(0x08)
	SoftClassProperty m_widgetClass; // 0x18(0x28)
	SoftClassProperty m_alternativeWidgetClass; // 0x40(0x28)
	struct FName m_preloadDataWidgetName; // 0x68(0x08)
	bool m_doNotActivateNonVisibleWidget; // 0x70(0x01)
	bool m_wantTransitionStateChange; // 0x71(0x01)
	bool m_wantTransitionChangeOnClearing; // 0x72(0x01)
	bool m_hideCharacterOnTransition; // 0x73(0x01)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Prospect.YServerPerformanceData
// Size: 0x18 (Inherited: 0x00)
struct FYServerPerformanceData {
	float m_frameTime; // 0x00(0x04)
	float m_frameTimeHighest; // 0x04(0x04)
	uint32_t m_memory; // 0x08(0x04)
	uint32_t m_memoryHighest; // 0x0c(0x04)
	uint32_t m_numPlayers; // 0x10(0x04)
	uint32_t m_numAIs; // 0x14(0x04)
};

// ScriptStruct Prospect.YGameSessionSettings
// Size: 0x18 (Inherited: 0x10)
struct FYGameSessionSettings : FYDataTableRowBase {
	int32_t m_sessionLengthSeconds; // 0x10(0x04)
	int32_t m_sessionUntilWarning; // 0x14(0x04)
};

// ScriptStruct Prospect.YFetchEGSEntitlementsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYFetchEGSEntitlementsRequest {
	struct FString epicAccessToken; // 0x00(0x10)
};

// ScriptStruct Prospect.YWeaponShopRow
// Size: 0x10 (Inherited: 0x10)
struct FYWeaponShopRow : FYDataTableRowBase {
};

// ScriptStruct Prospect.YUiPopupItemSuccessfulTunedPreviewData
// Size: 0x40 (Inherited: 0x00)
struct FYUiPopupItemSuccessfulTunedPreviewData {
	struct FDataTableRowHandle m_blueprintHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString m_itemBackendId; // 0x18(0x10)
	struct FString m_baseItemId; // 0x28(0x10)
	int32_t m_oldValue; // 0x38(0x04)
	int32_t m_newValue; // 0x3c(0x04)
};

// ScriptStruct Prospect.YUiPopupItemSuccessfulActionPreviewData
// Size: 0x50 (Inherited: 0x00)
struct FYUiPopupItemSuccessfulActionPreviewData {
	struct FDataTableRowHandle m_blueprintHandle; // 0x00(0x10)
	enum class EYItemRarityType m_itemRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString m_itemBackendId; // 0x18(0x10)
	struct FString m_baseItemId; // 0x28(0x10)
	struct FString m_shopItemBelongsTo; // 0x38(0x10)
	int32_t m_repeatTimes; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Prospect.YCraftSuccessfulPopupText
// Size: 0x30 (Inherited: 0x00)
struct FYCraftSuccessfulPopupText {
	struct FText m_itemName; // 0x00(0x18)
	struct FText m_deviceTypeText; // 0x18(0x18)
};

// ScriptStruct Prospect.YCraftingStationItemDetailOverviewData
// Size: 0x18 (Inherited: 0x00)
struct FYCraftingStationItemDetailOverviewData {
	enum class EYItemRarityType m_itemRarity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_bpName; // 0x08(0x10)
};

// ScriptStruct Prospect.YButtonAudio
// Size: 0x40 (Inherited: 0x00)
struct FYButtonAudio {
	struct FDataTableRowHandle m_pressedDTSound; // 0x00(0x10)
	struct FDataTableRowHandle m_releasedDTSound; // 0x10(0x10)
	struct FDataTableRowHandle m_hoveredDTSound; // 0x20(0x10)
	struct FDataTableRowHandle m_unhoveredDTSound; // 0x30(0x10)
};

// ScriptStruct Prospect.YSocialActionRequestEntry
// Size: 0x28 (Inherited: 0x00)
struct FYSocialActionRequestEntry {
	bool m_useLocalUID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_overwriteUID; // 0x08(0x10)
	struct TArray<struct FYFriendAction> m_actions; // 0x18(0x10)
};

// ScriptStruct Prospect.YQueryFriendsListResponse
// Size: 0x10 (Inherited: 0x00)
struct FYQueryFriendsListResponse {
	struct TArray<struct FYPlayFabFriendWithState> Friends; // 0x00(0x10)
};

// ScriptStruct Prospect.YPlayerActionHistoryData
// Size: 0x60 (Inherited: 0x00)
struct FYPlayerActionHistoryData {
	struct TMap<struct FString, int32_t> m_timeSameActionTowardsUser; // 0x00(0x50)
	int32_t m_currentTimeMuted; // 0x50(0x04)
	int32_t m_amountOfTimesMuted; // 0x54(0x04)
	bool m_currentlyMuted; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float m_lastTimeTracked; // 0x5c(0x04)
};

// ScriptStruct Prospect.YFriendActionMuteSettings
// Size: 0x10 (Inherited: 0x00)
struct FYFriendActionMuteSettings {
	int32_t m_maxActionTowardsUser; // 0x00(0x04)
	int32_t m_minActionCount; // 0x04(0x04)
	float m_timeAllowanceAdditionalAction; // 0x08(0x04)
	float m_resetActionTracking; // 0x0c(0x04)
};

// ScriptStruct Prospect.YNotificationItemDataTableRow
// Size: 0x58 (Inherited: 0x10)
struct FYNotificationItemDataTableRow : FYDataTableRowBase {
	enum class EYNotificationMessageType m_messageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float m_duration; // 0x14(0x04)
	struct TSoftObjectPtr<struct UTexture2D> m_textureToShow; // 0x18(0x28)
	struct FText m_message; // 0x40(0x18)
};

// ScriptStruct Prospect.YRecentPlayedEntry
// Size: 0xa8 (Inherited: 0x00)
struct FYRecentPlayedEntry {
	struct FYPlatformEntry m_platformEntry; // 0x00(0x18)
	struct FYOutpostFriendInfo m_friendInfo; // 0x18(0x80)
	int64_t m_timeRegistered; // 0x98(0x08)
	bool m_friendInfoPending; // 0xa0(0x01)
	bool m_isDebugEntry; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// ScriptStruct Prospect.YSocialItemRowBase
// Size: 0x378 (Inherited: 0x378)
struct FYSocialItemRowBase : FYVanityItemRowBase {
};

// ScriptStruct Prospect.YSortingRequest
// Size: 0x28 (Inherited: 0x00)
struct FYSortingRequest {
	struct TArray<struct FDataTableRowHandle> m_items; // 0x00(0x10)
	struct FString m_userId; // 0x10(0x10)
	enum class EYSortingRequestType m_type; // 0x20(0x01)
	bool m_sortAlphabetical; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Prospect.YModulatorContinuousParams
// Size: 0xb0 (Inherited: 0x00)
struct FYModulatorContinuousParams {
	bool m_enableDebugLogging; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FModulatorContinuousParams m_parameter; // 0x04(0x20)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve m_optionalParameterValueTransformCurve; // 0x28(0x88)
};

// ScriptStruct Prospect.YSpawnActivityActorTokenData
// Size: 0x28 (Inherited: 0x00)
struct FYSpawnActivityActorTokenData {
	enum class EYActivityType m_activityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AYActivityLocation* m_activityLocation; // 0x08(0x08)
	struct AYActivityActorManager* m_activityActorManager; // 0x10(0x08)
	struct AActor* m_actorClass; // 0x18(0x08)
	struct UYActivityRegisterComponent* m_registerComponentOverride; // 0x20(0x08)
};

// ScriptStruct Prospect.YReplicatedMovementData
// Size: 0x0c (Inherited: 0x00)
struct FYReplicatedMovementData {
	float m_serverDistance; // 0x00(0x04)
	float m_serverSpeed; // 0x04(0x04)
	float m_predictedServerSpeed; // 0x08(0x04)
};

// ScriptStruct Prospect.YReplicatedMovementActor
// Size: 0x10 (Inherited: 0x00)
struct FYReplicatedMovementActor {
	struct AActor* m_actorBase; // 0x00(0x08)
	float m_actorOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Prospect.YSquadInfo
// Size: 0x28 (Inherited: 0x00)
struct FYSquadInfo {
	struct TArray<struct AYPlayerState*> m_members; // 0x00(0x10)
	struct FString m_squadId; // 0x10(0x10)
	int32_t m_size; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Prospect.YPlayerUITeamInfo
// Size: 0x08 (Inherited: 0x00)
struct FYPlayerUITeamInfo {
	struct FColor m_teamColorID; // 0x00(0x04)
	int32_t m_teamID; // 0x04(0x04)
};

// ScriptStruct Prospect.YStaminaDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FYStaminaDataTableRow : FYDataTableRowBase {
	float m_maxStamina; // 0x10(0x04)
	float m_regenerationRate; // 0x14(0x04)
	float m_regenerationDelay; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FYStaminaStateOverrides> m_stateOverrides; // 0x20(0x10)
	float m_jumpConsumption; // 0x30(0x04)
	float m_jumpNoStaminaScalar; // 0x34(0x04)
	float m_sprintConsumptionRate; // 0x38(0x04)
	float m_sprintDashConsumptionRate; // 0x3c(0x04)
	float m_sprintMinStamina; // 0x40(0x04)
	float m_sprintDashMinStamina; // 0x44(0x04)
	float m_slideConsumptionRate; // 0x48(0x04)
	float m_slideMinStamina; // 0x4c(0x04)
	float m_climbingInstantConsumption; // 0x50(0x04)
	float m_climbingDegenerationRate; // 0x54(0x04)
	bool m_allowMeleeWithoutStamina; // 0x58(0x01)
	bool m_allowMeleeHeavyWithoutStamina; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float m_StaminaReducedOnTakingHit; // 0x5c(0x04)
};

// ScriptStruct Prospect.YStaminaStateOverrides
// Size: 0x18 (Inherited: 0x00)
struct FYStaminaStateOverrides {
	struct TArray<enum class EYPlayerStateBlueprint> m_states; // 0x00(0x10)
	float m_regenerationRateScalar; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YStaminaMeleeMontageData
// Size: 0x20 (Inherited: 0x00)
struct FYStaminaMeleeMontageData {
	struct UAnimMontage* m_weakenedMeleeMissMontageTPP; // 0x00(0x08)
	struct UAnimMontage* m_weakenedMeleeMissMontageFPP; // 0x08(0x08)
	struct UAnimMontage* m_weakenedMeleeImpactMontageTPP; // 0x10(0x08)
	struct UAnimMontage* m_weakenedMeleeImpactMontageFPP; // 0x18(0x08)
};

// ScriptStruct Prospect.YRuntimeInventoryWeightInfo
// Size: 0x10 (Inherited: 0x00)
struct FYRuntimeInventoryWeightInfo {
	float m_maxBagContainerWeight; // 0x00(0x04)
	float m_currentBagContainerWeight; // 0x04(0x04)
	float m_maxSafeContainerWeight; // 0x08(0x04)
	float m_currentSafeContainerWeight; // 0x0c(0x04)
};

// ScriptStruct Prospect.YCachedFactionLevel
// Size: 0x20 (Inherited: 0x00)
struct FYCachedFactionLevel {
	struct TArray<struct FYUnlockedShopItem> m_unlockedShopItems; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> m_unlockedContracts; // 0x10(0x10)
};

// ScriptStruct Prospect.YUIRankedSeasonData
// Size: 0x60 (Inherited: 0x00)
struct FYUIRankedSeasonData {
	struct FString m_seasonName; // 0x00(0x10)
	struct TMap<enum class EYMatchmakeGameModeType, struct FYRankEntries> m_rankDataPerGameMode; // 0x10(0x50)
};

// ScriptStruct Prospect.YRankedSeasonData
// Size: 0x30 (Inherited: 0x00)
struct FYRankedSeasonData {
	struct FString m_rankedSeasonName; // 0x00(0x10)
	struct FDateTime m_endDateTime; // 0x10(0x08)
	struct FTimespan m_remainingTime; // 0x18(0x08)
	bool m_isValidData; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName m_rowName; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YProspectorRankRow
// Size: 0x30 (Inherited: 0x10)
struct FYProspectorRankRow : FYDataTableRowBase {
	struct FText m_rankAsText; // 0x10(0x18)
	int32_t m_startRank; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Prospect.YRankedSeasonRow
// Size: 0x68 (Inherited: 0x10)
struct FYRankedSeasonRow : FYDataTableRowBase {
	struct FText m_rankedSeasonName; // 0x10(0x18)
	struct FString m_startDateTime; // 0x28(0x10)
	struct FString m_endDateTime; // 0x38(0x10)
	int64_t m_utcStartDateTimeTicks; // 0x48(0x08)
	int64_t m_utcEndDateTimeTicks; // 0x50(0x08)
	struct TArray<struct FYEndOfSeasonReward> m_endSeasonRewards; // 0x58(0x10)
};

// ScriptStruct Prospect.YEndOfSeasonReward
// Size: 0x20 (Inherited: 0x00)
struct FYEndOfSeasonReward {
	struct FDataTableRowHandle m_messageId; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> m_grants; // 0x10(0x10)
};

// ScriptStruct Prospect.YStatWidgets
// Size: 0x10 (Inherited: 0x00)
struct FYStatWidgets {
	struct TArray<struct UYWidget*> m_widgets; // 0x00(0x10)
};

// ScriptStruct Prospect.YStatCombinationData
// Size: 0x48 (Inherited: 0x30)
struct FYStatCombinationData : FYEOSStatData {
	struct TArray<struct FYStatCombinationPair> m_statCalculation; // 0x30(0x10)
	bool m_anyGameMode; // 0x40(0x01)
	bool m_anyActivity; // 0x41(0x01)
	enum class EYMatchmakeGameModeType m_gameModeType; // 0x42(0x01)
	enum class EYActivityType m_activityType; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Prospect.YStatCombinationPair
// Size: 0x18 (Inherited: 0x00)
struct FYStatCombinationPair {
	struct FDataTableRowHandle m_statRowHandle; // 0x00(0x10)
	enum class EYMatchmakeGameModeType m_gameMode; // 0x10(0x01)
	enum class EYActivityType m_activityType; // 0x11(0x01)
	enum class EYStatOperator m_statOperator; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Prospect.YTechTreeUIData
// Size: 0x18 (Inherited: 0x00)
struct FYTechTreeUIData {
	struct TArray<struct FYTechTreeNodeType> columnNodes; // 0x00(0x10)
	int32_t nodeAmount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YTechTreeNodeType
// Size: 0xc8 (Inherited: 0x10)
struct FYTechTreeNodeType : FYDataTableRowBase {
	struct FText m_perkName; // 0x10(0x18)
	struct FText m_perkDescription; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_nodeIcon; // 0x40(0x28)
	struct FText m_nodeBonusDescription; // 0x68(0x18)
	struct FName m_nodeId; // 0x80(0x08)
	struct TArray<enum class EYTechtreeCategoryType> m_categories; // 0x88(0x10)
	int32_t m_playerQuarterLevelRequired; // 0x98(0x04)
	int32_t m_tier; // 0x9c(0x04)
	enum class EYTechTreeNodePerkType m_nodePerkType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FYTechTreeNodeUpgradeLevelRow> m_perkLevels; // 0xa8(0x10)
	struct TArray<struct FYTechTreeNodeUpgradeDependencyRow> m_upgradeDependencies; // 0xb8(0x10)
};

// ScriptStruct Prospect.YTechTreeNodeUpgradeDependencyRow
// Size: 0x20 (Inherited: 0x08)
struct FYTechTreeNodeUpgradeDependencyRow : FTableRowBase {
	struct FDataTableRowHandle m_relatedDependencyRowHandle; // 0x08(0x10)
	int32_t m_requiredLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YTechTreeNodeUpgradeLevelRow
// Size: 0x38 (Inherited: 0x08)
struct FYTechTreeNodeUpgradeLevelRow : FTableRowBase {
	int32_t m_perkAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FYTechTreeCostEntryRow> m_upgradeCosts; // 0x10(0x10)
	int32_t m_upgradeTimeMinutes; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FYTechTreeCostEntryRow> m_initialRushCosts; // 0x28(0x10)
};

// ScriptStruct Prospect.YTechTreeCostEntryRow
// Size: 0x20 (Inherited: 0x08)
struct FYTechTreeCostEntryRow : FTableRowBase {
	struct FDataTableRowHandle m_costType; // 0x08(0x10)
	int32_t m_costAmount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Prospect.YTechTreeCategory
// Size: 0x68 (Inherited: 0x10)
struct FYTechTreeCategory : FYDataTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> m_categoryNodeIcon; // 0x10(0x28)
	struct FText m_categoryNodeName; // 0x38(0x18)
	enum class EYTechtreeCategoryType m_category; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t m_amountOfNodes; // 0x54(0x04)
	struct TArray<enum class EYTechTreeNodePerkType> m_perkTypeOrder; // 0x58(0x10)
};

// ScriptStruct Prospect.YPlayerQuarterUpgradeType
// Size: 0x70 (Inherited: 0x10)
struct FYPlayerQuarterUpgradeType : FYDataTableRowBase {
	struct FText m_name; // 0x10(0x18)
	struct FText m_description; // 0x28(0x18)
	int32_t m_level; // 0x40(0x04)
	int32_t m_nodeUpgradesRequired; // 0x44(0x04)
	struct TArray<struct FYTechTreeCostEntryRow> m_costs; // 0x48(0x10)
	int32_t m_upgradeTimeMinutes; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FYTechTreeCostEntryRow> m_initialRushCosts; // 0x60(0x10)
};

// ScriptStruct Prospect.YTransitionRuntimeData
// Size: 0x28 (Inherited: 0x00)
struct FYTransitionRuntimeData {
	struct FYTransitionRequestData m_initData; // 0x00(0x28)
};

// ScriptStruct Prospect.YTransitionRequestData
// Size: 0x28 (Inherited: 0x00)
struct FYTransitionRequestData {
	enum class EYTransitionRequest m_requestType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* m_viewTarget; // 0x08(0x08)
	struct FViewTargetTransitionParams m_viewTargetParams; // 0x10(0x10)
	float m_lockTime; // 0x20(0x04)
	bool m_withViewTargetParams; // 0x24(0x01)
	bool m_withTransition; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Prospect.YGfxQualityData
// Size: 0x20 (Inherited: 0x00)
struct FYGfxQualityData {
	struct FText m_label; // 0x00(0x18)
	enum class EYGfxQualityPreset m_gfxQuality; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Prospect.YDefaultDirectXVersion
// Size: 0x28 (Inherited: 0x00)
struct FYDefaultDirectXVersion {
	struct FText m_label; // 0x00(0x18)
	struct FString m_defaultDirectXVersion; // 0x18(0x10)
};

// ScriptStruct Prospect.YActiveVanityCustomizationInitializatonData
// Size: 0x100 (Inherited: 0x00)
struct FYActiveVanityCustomizationInitializatonData {
	struct TSoftObjectPtr<struct UStaticMesh> m_staticMesh; // 0x00(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> m_skeletalMesh; // 0x28(0x28)
	struct FDataTableRowHandle m_rowHandle; // 0x50(0x10)
	struct FYInventoryItem m_desiredInventoryItem; // 0x60(0x98)
	enum class EYVanityType m_vanityType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct Prospect.YItemUsingVanityInfo
// Size: 0x20 (Inherited: 0x00)
struct FYItemUsingVanityInfo {
	struct FString m_baseItemId; // 0x00(0x10)
	struct FString m_customItemID; // 0x10(0x10)
};

// ScriptStruct Prospect.YPetVanityItemRowBase
// Size: 0x378 (Inherited: 0x378)
struct FYPetVanityItemRowBase : FYVanityItemRowBase {
};

// ScriptStruct Prospect.YWeaponCharmVanityItemRowBase
// Size: 0x3a0 (Inherited: 0x378)
struct FYWeaponCharmVanityItemRowBase : FYVanityItemRowBase {
	struct TSoftObjectPtr<struct USkeletalMesh> m_weaponCharmMesh; // 0x378(0x28)
};

// ScriptStruct Prospect.YSprayVanityItemRowBase
// Size: 0x3a0 (Inherited: 0x378)
struct FYSprayVanityItemRowBase : FYVanityItemRowBase {
	struct TSoftObjectPtr<struct USoundBase> m_sound; // 0x378(0x28)
};

// ScriptStruct Prospect.YDroppodDataTableRow
// Size: 0x3a0 (Inherited: 0x378)
struct FYDroppodDataTableRow : FYVanityItemRowBase {
	SoftClassProperty m_desiredDroppodPath; // 0x378(0x28)
};

// ScriptStruct Prospect.YVehicleVanityDataTableRow
// Size: 0x3c0 (Inherited: 0x378)
struct FYVehicleVanityDataTableRow : FYVanityItemRowBase {
	struct FDataTableRowHandle m_overrideVehicleMovementAudioSoundQueue; // 0x378(0x10)
	struct FDataTableRowHandle m_overrideVehicleBoostAudioSoundQueue; // 0x388(0x10)
	SoftClassProperty m_overridenVehicleSubclass; // 0x398(0x28)
};

// ScriptStruct Prospect.YGlobalVanityDefaultsData
// Size: 0x70 (Inherited: 0x10)
struct FYGlobalVanityDefaultsData : FYDataTableRowBase {
	struct FDataTableRowHandle m_defaultBanner; // 0x10(0x10)
	struct FDataTableRowHandle m_defaultDeathEmote; // 0x20(0x10)
	struct FDataTableRowHandle m_defaultNormalEmote; // 0x30(0x10)
	struct FDataTableRowHandle m_defaultDroppod; // 0x40(0x10)
	struct FDataTableRowHandle m_defaultSpray; // 0x50(0x10)
	struct FDataTableRowHandle m_defaultPet; // 0x60(0x10)
};

// ScriptStruct Prospect.YVehicleRowBase
// Size: 0x408 (Inherited: 0x310)
struct FYVehicleRowBase : FYItemDataTableRowBase {
	struct FDataTableRowHandle m_healthRow; // 0x310(0x10)
	float m_lifetimeAfterDeath; // 0x320(0x04)
	float m_MovementSpeedBackwardsMovement; // 0x324(0x04)
	float m_vehicleSideDirectionFrictionDirection; // 0x328(0x04)
	float m_vehicleBackwardFrictionDirection; // 0x32c(0x04)
	float m_vehicleBackwardSpeedMultiplierAccel; // 0x330(0x04)
	float m_angularAccelerationMultiplierLeft; // 0x334(0x04)
	float m_vehicleSideMovementSpeedMultiplierAccel; // 0x338(0x04)
	float m_vehicleTurnSpeedMultiplier; // 0x33c(0x04)
	float m_vehicleAdditionalMovementSpeedBank; // 0x340(0x04)
	float m_MovementSpeedSideMovement; // 0x344(0x04)
	float m_vehicleRotationMaxSpeed; // 0x348(0x04)
	float m_vehicleGlobalAccelerationModifier; // 0x34c(0x04)
	float m_vehicleFriction; // 0x350(0x04)
	float m_vehicleBreaking; // 0x354(0x04)
	float m_vehicleRotationIncrementSpeed; // 0x358(0x04)
	float m_vehicleDecrementRotationRate; // 0x35c(0x04)
	float m_vehicleDeltaPitchRollRotationRate; // 0x360(0x04)
	float m_vehicleMovementSpeedBackwardsMovement; // 0x364(0x04)
	float m_vehicleMovementSpeedSideMovement; // 0x368(0x04)
	float m_vehicleMovementSpeedAccelerationBackwardsMovement; // 0x36c(0x04)
	float m_vehicleMovementSpeedAccelerationSideMovement; // 0x370(0x04)
	float m_vehicleMovementSpeed; // 0x374(0x04)
	float m_vehicleBoostMovementSpeed; // 0x378(0x04)
	float m_vehicleStandaloneBackwardsFriction; // 0x37c(0x04)
	float m_vehicleStandaloneMaxSpeed; // 0x380(0x04)
	float m_vehicleStandaloneJumpOffVelocityMultiplier; // 0x384(0x04)
	float m_vehicleDamageAtDestruction; // 0x388(0x04)
	float m_vehicleRadiusDamageAtDestruction; // 0x38c(0x04)
	float m_vehicleRadiusDamageFallofStartRange; // 0x390(0x04)
	float m_vehicleRadiusDamageFalloffMultiplier; // 0x394(0x04)
	float m_vehicleOwnedInteractionTimeMultiplier; // 0x398(0x04)
	float m_vehicleNotOwnedInteractionTimeMultiplier; // 0x39c(0x04)
	struct FVector m_vehicleIdleBaseLocationOffset; // 0x3a0(0x0c)
	struct FVector m_vehiclePossedLocationOffset; // 0x3ac(0x0c)
	struct FName m_vehicleAttachSocketName; // 0x3b8(0x08)
	struct FDataTableRowHandle m_vehicleImpactRow; // 0x3c0(0x10)
	float m_minVelocityMaxSpeedInterpDealDamage; // 0x3d0(0x04)
	float m_damageVelocityStartInterpolate; // 0x3d4(0x04)
	float m_damageVelocityMaxInterpolate; // 0x3d8(0x04)
	float m_minimumPerDamageIntervalTime; // 0x3dc(0x04)
	float m_vehicleTurnBoostSpeedModifier; // 0x3e0(0x04)
	float m_vehicleJumpVelocity; // 0x3e4(0x04)
	struct FDataTableRowHandle m_movementAudioSoundQueue; // 0x3e8(0x10)
	struct FDataTableRowHandle m_boostAudioSoundQueue; // 0x3f8(0x10)
};

// ScriptStruct Prospect.YDropWeaponAnalyticsPerPlayer
// Size: 0xd0 (Inherited: 0xa8)
struct FYDropWeaponAnalyticsPerPlayer : FYBaseAnalyticsEvent {
	struct FName weapon_id; // 0xa8(0x08)
	struct FString weapon_name; // 0xb0(0x10)
	int32_t time_since_match_start; // 0xc0(0x04)
	int32_t drop_location_X; // 0xc4(0x04)
	int32_t drop_location_Y; // 0xc8(0x04)
	int32_t Source; // 0xcc(0x04)
};

// ScriptStruct Prospect.YWeaponAnalyticsPerPlayer
// Size: 0xa0 (Inherited: 0x00)
struct FYWeaponAnalyticsPerPlayer {
	struct TMap<struct FName, struct FYWeaponAnalyticsEvent> m_weaponAnalytics; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
};

// ScriptStruct Prospect.YDetailCamera
// Size: 0x10 (Inherited: 0x00)
struct FYDetailCamera {
	struct UChildActorComponent* m_childActorComponent; // 0x00(0x08)
	struct AActor* m_spawnedCameraActor; // 0x08(0x08)
};

// ScriptStruct Prospect.YCustomizationVisualizationState
// Size: 0x70 (Inherited: 0x00)
struct FYCustomizationVisualizationState {
	struct FString m_baseWeaponID; // 0x00(0x10)
	struct FString m_customWeaponID; // 0x10(0x10)
	struct FYActiveWeaponCharacterInitializationData m_initializationData; // 0x20(0x50)
};

// ScriptStruct Prospect.YMeleeWeaponDataTableRow
// Size: 0xa48 (Inherited: 0xa48)
struct FYMeleeWeaponDataTableRow : FYWeaponDataTableBase {
};

// ScriptStruct Prospect.YScopeTuningRow
// Size: 0x28 (Inherited: 0x10)
struct FYScopeTuningRow : FYDataTableRowBase {
	enum class EYScopeType m_scopeType; // 0x10(0x01)
	bool ShouldCreateGlint; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeMods; // 0x18(0x10)
};

// ScriptStruct Prospect.YWeaponTuningDataTableRow
// Size: 0x328 (Inherited: 0x10)
struct FYWeaponTuningDataTableRow : FYDataTableRowBase {
	struct FDataTableRowHandle m_AISenseTriggeredOnFire; // 0x10(0x10)
	float m_staminaConsumptionPerFire; // 0x20(0x04)
	float m_minNegativeRecoilX; // 0x24(0x04)
	float m_maxNegativeRecoilX; // 0x28(0x04)
	float m_minPositiveRecoilX; // 0x2c(0x04)
	float m_maxPositiveRecoilX; // 0x30(0x04)
	float m_minRecoilY; // 0x34(0x04)
	float m_maxRecoilY; // 0x38(0x04)
	float m_CameraRecoilCompensationSpeedX; // 0x3c(0x04)
	float m_cameraRecoilCompensationSpeedY; // 0x40(0x04)
	float m_automaticFireCrosshairRecoilCompensationSpeedX; // 0x44(0x04)
	float m_automaticFireCrosshairRecoilCompensationSpeedY; // 0x48(0x04)
	float m_targetingRecoilCompensationSpeedMultiplier; // 0x4c(0x04)
	float m_singleFireRecoilMultiplierX; // 0x50(0x04)
	float m_singleFireRecoilMultiplierY; // 0x54(0x04)
	bool m_useRecoilCompensation; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float m_recoilCompensationStartTime; // 0x5c(0x04)
	struct UCameraShakeBase* m_firingCameraShake; // 0x60(0x08)
	float m_fireWeaponDelay; // 0x68(0x04)
	float m_unequipTime; // 0x6c(0x04)
	float m_equipTime; // 0x70(0x04)
	float m_animationEquipTime; // 0x74(0x04)
	float m_defaultWeaponSpread; // 0x78(0x04)
	float m_weaponSpreadIncreaseSpeed; // 0x7c(0x04)
	float m_weaponSpreadDecreaseSpeed; // 0x80(0x04)
	float m_weaponSpreadMax; // 0x84(0x04)
	struct FDataTableRowHandle m_scopeTuningRow; // 0x88(0x10)
	float m_targetingTime; // 0x98(0x04)
	float m_untargetingTimeMultiplier; // 0x9c(0x04)
	float m_retargetingMinimumNormalizedTime; // 0xa0(0x04)
	float m_targetingSpreadDefaultMultiplier; // 0xa4(0x04)
	float m_targetingWeaponSpreadMaxMultiplier; // 0xa8(0x04)
	float m_targetingSpreadIncreaseMultiplier; // 0xac(0x04)
	float m_targetingSpreadJumpingMultiplier; // 0xb0(0x04)
	float m_inAirSpreadMultiplier; // 0xb4(0x04)
	float m_targetingSpreadInAirMultiplier; // 0xb8(0x04)
	float m_targetingMovementSpeedMultiplier; // 0xbc(0x04)
	float m_crouchSpreadDefaultMultiplier; // 0xc0(0x04)
	float m_movementSpreadDefaultMultiplier; // 0xc4(0x04)
	float m_movementSpreadTargetingMultiplier; // 0xc8(0x04)
	float m_sprintingMovementSpreadDefaultMultiplier; // 0xcc(0x04)
	float m_crouchSpreadIncreaseMultiplier; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UCurveFloat* m_spreadCurve; // 0xd8(0x08)
	float m_spreadCurveIncreasePerShot; // 0xe0(0x04)
	float m_spreadCurveDecreasePerSecond; // 0xe4(0x04)
	float m_targetingRecoilMultiplier; // 0xe8(0x04)
	float m_crouchingRecoilMultiplier; // 0xec(0x04)
	float m_fireInAirRecoilMultiplier; // 0xf0(0x04)
	float m_reloadAddAmmoTime; // 0xf4(0x04)
	float m_reloadTime; // 0xf8(0x04)
	float m_animationReloadTime; // 0xfc(0x04)
	float m_ammoConsumptionPerShot; // 0x100(0x04)
	bool m_useSingleReload; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float m_reloadAddFirstAmmoStateTime; // 0x108(0x04)
	float m_reloadAddFirstAmmoTime; // 0x10c(0x04)
	float m_reloadAddLoopAmmoTime; // 0x110(0x04)
	float m_animationReloadAddFirstAmmoTime; // 0x114(0x04)
	float m_animationReloadAddLoopAmmoTime; // 0x118(0x04)
	float m_refireTime; // 0x11c(0x04)
	float m_targetingRefireTime; // 0x120(0x04)
	float m_weakAreaDamageMultiplier; // 0x124(0x04)
	float m_weakAreaDamageMultiplierEnemy; // 0x128(0x04)
	float m_penetration; // 0x12c(0x04)
	float m_directDamage; // 0x130(0x04)
	float m_targetingDirectDamage; // 0x134(0x04)
	float m_directDamagePlayerMultiplier; // 0x138(0x04)
	float m_directDamageEnemyMultiplier; // 0x13c(0x04)
	float m_directDamageImpulse; // 0x140(0x04)
	float m_stabilityDamageForDeathRagdoll; // 0x144(0x04)
	float m_stabilityDamage; // 0x148(0x04)
	float m_radialDamage; // 0x14c(0x04)
	float m_radialDamagePlayerMultiplier; // 0x150(0x04)
	float m_radialDamageEnemyMultiplier; // 0x154(0x04)
	float m_radialDamageImpulse; // 0x158(0x04)
	bool m_damageIgnoreShield; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float m_radialDamageFalloffStartRange; // 0x160(0x04)
	float m_radialDamageFalloffMultiplier; // 0x164(0x04)
	float m_radialDamageRadius; // 0x168(0x04)
	float m_radialDamageCapsuleRadius; // 0x16c(0x04)
	float m_radialDamageCapsuleHalfHeight; // 0x170(0x04)
	float m_directDamageFalloffStartRange; // 0x174(0x04)
	float m_directDamageFalloffEndRange; // 0x178(0x04)
	float m_directDamageFalloffMultiplier; // 0x17c(0x04)
	float m_damageSelfMultiplier; // 0x180(0x04)
	enum class EYDamageApplication m_damageApplication; // 0x184(0x01)
	bool m_useDamageCauserForImpactDirection; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	float m_spinDownTimeRate; // 0x188(0x04)
	bool m_canSpinUpDuringInventory; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	float m_projectileAdjustDirectionImpactRange; // 0x190(0x04)
	float m_weaponSpreadDecreaseSinceLastShotTime; // 0x194(0x04)
	float m_easeOutMagnitudeRecoilStart; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UCurveFloat* m_recoilCurve; // 0x1a0(0x08)
	struct UCurveFloat* m_targetingRecoil; // 0x1a8(0x08)
	struct UCurveFloat* m_overridenEaseInRecoil; // 0x1b0(0x08)
	struct UCurveFloat* m_easeOutRecoil; // 0x1b8(0x08)
	struct UCurveFloat* m_cameraRecoilCompensationSpeedMultiplierCurve; // 0x1c0(0x08)
	struct UCurveVector* m_automaticFireWeaponRecoilVector; // 0x1c8(0x08)
	float m_automaticFireRecoilResetTime; // 0x1d0(0x04)
	bool m_burstFireUseCompensationStartTime; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	float m_cameraAffectMultiplierX; // 0x1d8(0x04)
	float m_cameraAffectMultiplierY; // 0x1dc(0x04)
	float m_crossHairAffectMultiplierX; // 0x1e0(0x04)
	float m_crossHairAffectMultiplierY; // 0x1e4(0x04)
	float m_cameraAffectMultiplierWhileTargetingX; // 0x1e8(0x04)
	float m_cameraAffectMultiplierWhileTargetingY; // 0x1ec(0x04)
	float m_crossHairAffectMultiplierWhileTargetingX; // 0x1f0(0x04)
	float m_crossHairAffectMultiplierWhileTargetingY; // 0x1f4(0x04)
	bool m_shootAtSocketWhenTargeting; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	struct FName m_socketNameShootAtSocketWhenTargeting; // 0x1fc(0x08)
	float m_burstInterval; // 0x204(0x04)
	int32_t m_amountOfBurst; // 0x208(0x04)
	int32_t m_amountOfImmediateFires; // 0x20c(0x04)
	bool m_immediateFireIncreasesSpread; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float m_movementSpeedMultiplier; // 0x214(0x04)
	struct TArray<struct FYGameplayAttributeModifier> m_attributeModifier; // 0x218(0x10)
	float m_firingMovementSpeedMultiplier; // 0x228(0x04)
	float m_firingTurnSpeedMultiplier; // 0x22c(0x04)
	float m_targetingTurnSpeedMultiplier; // 0x230(0x04)
	float m_weaponFOVInterpSpeed; // 0x234(0x04)
	float m_weaponFOVStartInterp; // 0x238(0x04)
	float m_weaponTargetingInterp; // 0x23c(0x04)
	int32_t m_startAmmo; // 0x240(0x04)
	int32_t m_ammoInClip; // 0x244(0x04)
	bool m_haveInfiniteAmmo; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FDataTableRowHandle m_ammoTypeToUse; // 0x250(0x10)
	int32_t m_useCooldownTime; // 0x260(0x04)
	int32_t m_useActionTime; // 0x264(0x04)
	int32_t m_healAmount; // 0x268(0x04)
	enum class EYWeaponSlotType m_slotType; // 0x26c(0x01)
	bool m_canUse; // 0x26d(0x01)
	bool m_canHealSelf; // 0x26e(0x01)
	bool m_useRandomSeed; // 0x26f(0x01)
	bool m_isLooping; // 0x270(0x01)
	bool m_canEverRefire; // 0x271(0x01)
	bool m_stopSpinupOnInputRelease; // 0x272(0x01)
	bool m_spinupUntilRelease; // 0x273(0x01)
	bool m_instantlyFireOnTimeThresholdReached; // 0x274(0x01)
	bool m_fireSpinupTimeRegadlessOfDuration; // 0x275(0x01)
	bool m_clearAllTimeWhenSpinupDone; // 0x276(0x01)
	bool m_spinupForUse; // 0x277(0x01)
	bool m_alwaysStopAnimationSpinup; // 0x278(0x01)
	bool m_stopAnimationOnSpinupInterupt; // 0x279(0x01)
	bool m_spinUpStopAfterFullDuration; // 0x27a(0x01)
	bool m_useFireWeaponDelayAtCachedTransform; // 0x27b(0x01)
	bool m_ignoreDamagePrevention; // 0x27c(0x01)
	bool m_canDamageSelf; // 0x27d(0x01)
	bool m_fireAtRelease; // 0x27e(0x01)
	char pad_27F[0x1]; // 0x27f(0x01)
	struct FGameplayTagContainer m_objectTypesAllowedToDamage; // 0x280(0x20)
	struct FYChainReactionDataEntry m_chainReactionData; // 0x2a0(0x0c)
	float m_requiredInputTimeForHeavyAttack; // 0x2ac(0x04)
	float m_lightAttackRecoveryTime; // 0x2b0(0x04)
	float m_lowStaminaLightAttackRecoveryTime; // 0x2b4(0x04)
	float m_lightAttackStaminaConsumption; // 0x2b8(0x04)
	float m_heavyAttackRecoveryTime; // 0x2bc(0x04)
	float m_lowStaminaHeavyAttackRecoveryTime; // 0x2c0(0x04)
	float m_heavyAttackStaminaConsumption; // 0x2c4(0x04)
	struct FName m_socketLocation; // 0x2c8(0x08)
	struct FDataTableRowHandle m_lightAttackWeaponTransportHandle; // 0x2d0(0x10)
	struct FDataTableRowHandle m_lightAttackLowStaminaTransportHandle; // 0x2e0(0x10)
	struct FDataTableRowHandle m_heavyAttackWeaponTransportHandle; // 0x2f0(0x10)
	struct FDataTableRowHandle m_heavyAttackLowStaminaTransportHandle; // 0x300(0x10)
	float m_spinupTime; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct FDataTableRowHandle> m_scannableRowHandles; // 0x318(0x10)
};

// ScriptStruct Prospect.YWeaponAnimations
// Size: 0x50 (Inherited: 0x00)
struct FYWeaponAnimations {
	struct TMap<enum class EYWeaponPlayState, struct FYWeaponAnimationStaticData> m_weaponAnimationAssociation; // 0x00(0x50)
};

// ScriptStruct Prospect.YWeaponAnimationStaticData
// Size: 0x68 (Inherited: 0x00)
struct FYWeaponAnimationStaticData {
	struct TArray<struct UAnimMontage*> m_weaponAnimationVariations; // 0x00(0x10)
	struct TArray<struct UAnimMontage*> m_playerAnimationThirdPersonVariations; // 0x10(0x10)
	struct TArray<struct UAnimMontage*> m_playerAnimationFirstPersonVariations; // 0x20(0x10)
	struct TArray<struct UAnimMontage*> m_weaponThirdPersonPlayerAnimationVariations; // 0x30(0x10)
	struct TArray<struct UAnimMontage*> m_playerAnimationFirstPersonLowStaminaVariations; // 0x40(0x10)
	struct TArray<struct UAnimMontage*> m_playerAnimationThirdPersonLowStaminaVariations; // 0x50(0x10)
	float m_desiredTuningPlayDuration; // 0x60(0x04)
	float m_animationRateScaleOverride; // 0x64(0x04)
};

// ScriptStruct Prospect.YWeaponDamageRelevantValues
// Size: 0x50 (Inherited: 0x00)
struct FYWeaponDamageRelevantValues {
	int32_t m_amountOfBursts; // 0x00(0x04)
	int32_t m_numBursts; // 0x04(0x04)
	int32_t m_amountOfImmediateFires; // 0x08(0x04)
	int32_t m_numFiresPerCompleteBurst; // 0x0c(0x04)
	int32_t m_numImpactsPerImmediateFire; // 0x10(0x04)
	int32_t m_numImpactsPerCompleteBurst; // 0x14(0x04)
	float m_directDamage; // 0x18(0x04)
	float m_radialDamage; // 0x1c(0x04)
	float m_totalDamagePerImpact; // 0x20(0x04)
	float m_totalDamageCompleteBurst; // 0x24(0x04)
	float m_spinupTime; // 0x28(0x04)
	float m_durationBurst; // 0x2c(0x04)
	float m_burstInterval; // 0x30(0x04)
	float m_durationOfCompleteBurstIncludingRefireTime; // 0x34(0x04)
	float m_refireTime; // 0x38(0x04)
	float m_numCompleteBurstWithRefireTimePerSecond; // 0x3c(0x04)
	float m_damagePerSecond; // 0x40(0x04)
	float m_numBurstsIncludeRefireTimePerMinute; // 0x44(0x04)
	float m_roundsPerMinute; // 0x48(0x04)
	float m_totalDamagePerFire; // 0x4c(0x04)
};

// ScriptStruct Prospect.YWeaponTransportDataTableRow
// Size: 0x110 (Inherited: 0x10)
struct FYWeaponTransportDataTableRow : FYDataTableRowBase {
	struct FName m_muzzleSocketName; // 0x10(0x08)
	struct FDataTableRowHandle m_impactDataTableRow; // 0x18(0x10)
	struct FYWeaponTransportHitscanData m_hitscanData; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FYWeaponTransportProjectileData m_projectileData; // 0x40(0x50)
	struct FYWeaponTransportPhysicActorData m_pysicActorData; // 0x90(0x10)
	struct FYWeaponTransportSphereData m_sphereData; // 0xa0(0x10)
	struct FYWeaponTransportCapsuleData m_capsuleData; // 0xb0(0x14)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FYWeaponLocationOffsetData> m_startLocationOffset; // 0xc8(0x10)
	struct FDataTableRowHandle m_defaultFXCategoryDataTableRow; // 0xd8(0x10)
	struct FVector m_shootingOffsetDefaultDirection; // 0xe8(0x0c)
	float m_scaleOffsetDirection; // 0xf4(0x04)
	bool m_shouldHaveFxCategory; // 0xf8(0x01)
	bool m_useShootingOffsetRandomization; // 0xf9(0x01)
	bool m_shootTroughDynamicObjects; // 0xfa(0x01)
	bool m_produceImpactRegadlessOfHit; // 0xfb(0x01)
	enum class EYWeaponTransportType m_transportType; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FDataTableRowHandle m_damageInfoApplyRowHandle; // 0x100(0x10)
};

// ScriptStruct Prospect.YWeaponLocationOffsetData
// Size: 0x18 (Inherited: 0x00)
struct FYWeaponLocationOffsetData {
	struct FVector m_offsetLocaton; // 0x00(0x0c)
	struct FVector m_overrideDirectionMovement; // 0x0c(0x0c)
};

// ScriptStruct Prospect.YWeaponTransportCapsuleData
// Size: 0x14 (Inherited: 0x00)
struct FYWeaponTransportCapsuleData {
	float m_radius; // 0x00(0x04)
	float m_halfHeight; // 0x04(0x04)
	bool m_skipTraceToVerifyHit; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float m_minDot2DThreshold; // 0x0c(0x04)
	bool m_verifyLineOfSight; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Prospect.YWeaponTransportSphereData
// Size: 0x10 (Inherited: 0x00)
struct FYWeaponTransportSphereData {
	float m_radius; // 0x00(0x04)
	bool m_skipTraceToVerifyHit; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float m_minDot2DThreshold; // 0x08(0x04)
	bool m_verifyLineOfSight; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Prospect.YWeaponTransportPhysicActorData
// Size: 0x10 (Inherited: 0x00)
struct FYWeaponTransportPhysicActorData {
	struct AActor* m_actorClass; // 0x00(0x08)
	float m_initialActorSpeed; // 0x08(0x04)
	float m_initialActorOffset; // 0x0c(0x04)
};

// ScriptStruct Prospect.YWeaponTransportProjectileData
// Size: 0x50 (Inherited: 0x00)
struct FYWeaponTransportProjectileData {
	struct AYProjectile* m_projectileClass; // 0x00(0x08)
	float m_gravityScale; // 0x08(0x04)
	float m_bounciniess; // 0x0c(0x04)
	bool m_shouldBeArmed; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float m_armingTime; // 0x14(0x04)
	float m_friction; // 0x18(0x04)
	bool m_returnPhysMaterialOnMove; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float m_initialProjectileSpeed; // 0x20(0x04)
	float m_acceleration; // 0x24(0x04)
	float m_accelerationApplyDelayTime; // 0x28(0x04)
	float m_applyAccelerationAdditionalMaxSpeed; // 0x2c(0x04)
	float m_homingAccelerationMagnitude; // 0x30(0x04)
	float m_maxSpeed; // 0x34(0x04)
	bool m_bounce; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float m_collisionRadius; // 0x3c(0x04)
	float m_maxAllowedDotProductToTurnWhenHoming; // 0x40(0x04)
	float m_projectileLifetime; // 0x44(0x04)
	float m_particleAdditionalLifetimeOnImpact; // 0x48(0x04)
	bool m_playClientSideProjectile; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Prospect.YWeaponTransportHitscanData
// Size: 0x14 (Inherited: 0x00)
struct FYWeaponTransportHitscanData {
	float m_maxTraceDistance; // 0x00(0x04)
	bool m_traceGroundWhenMaxDistanceHit; // 0x04(0x01)
	bool m_traceGround; // 0x05(0x01)
	bool m_traceComplexCollision; // 0x06(0x01)
	enum class EYTraceShapeType m_traceType; // 0x07(0x01)
	float m_capsuleRadius; // 0x08(0x04)
	float m_capsuleHalfHeight; // 0x0c(0x04)
	float m_collisionShapeMultiplierForGroundTrace; // 0x10(0x04)
};

// ScriptStruct Prospect.YMulticastHitscanReplicationData
// Size: 0x48 (Inherited: 0x00)
struct FYMulticastHitscanReplicationData {
	struct TArray<struct FYHitscanTraceEntry> m_traceEntries; // 0x00(0x10)
	struct FDataTableRowHandle m_transportDataTableRow; // 0x10(0x10)
	struct FDataTableRowHandle m_impactDataTableRow; // 0x20(0x10)
	struct FDataTableRowHandle m_damageOriginTableRow; // 0x30(0x10)
	struct AActor* m_owner; // 0x40(0x08)
};

// ScriptStruct Prospect.YHitSphereTraceEntry
// Size: 0x40 (Inherited: 0x00)
struct FYHitSphereTraceEntry {
	struct FVector_NetQuantize m_hitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal m_direction; // 0x0c(0x0c)
	struct FVector_NetQuantizeNormal m_impactNormal; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* m_hitComponent; // 0x28(0x08)
	struct AActor* m_hitActor; // 0x30(0x08)
	char m_surfaceType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Prospect.YTransportRuntimeInitializationData
// Size: 0xe8 (Inherited: 0x00)
struct FYTransportRuntimeInitializationData {
	struct FYDamageOriginInfo m_damageOriginInfo; // 0x00(0x28)
	struct FVector m_startLocation; // 0x28(0x0c)
	struct FVector m_direction; // 0x34(0x0c)
	struct FDataTableRowHandle m_transportDataTableRow; // 0x40(0x10)
	struct FDataTableRowHandle m_impactDataTableRow; // 0x50(0x10)
	struct FDataTableRowHandle m_fxCategoryDataTableRow; // 0x60(0x10)
	struct FDataTableRowHandle m_dataTableRowHandleContext; // 0x70(0x10)
	struct AActor* m_owner; // 0x80(0x08)
	int32_t m_transportHandle; // 0x88(0x04)
	float m_overrideGravity; // 0x8c(0x04)
	float m_overrideLaunchVelocity; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct USceneComponent* m_homingToComponet; // 0x98(0x08)
	enum class ECollisionChannel m_collisionChannelTrace; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FYChainReactionDataEntry m_chainReactionData; // 0xa4(0x0c)
	struct TArray<struct AActor*> m_actorsToIgnore; // 0xb0(0x10)
	bool m_replicateSkipAutonomous; // 0xc0(0x01)
	bool m_skipFindClosestBoneCheck; // 0xc1(0x01)
	bool m_clientSideProjectile; // 0xc2(0x01)
	bool m_isTargeting; // 0xc3(0x01)
	bool m_normalizeDirectionVector; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	int32_t m_randomSeed; // 0xc8(0x04)
	struct FVector m_visualOriginTrailLocation; // 0xcc(0x0c)
	struct FGuid m_shotGuid; // 0xd8(0x10)
};

// ScriptStruct Prospect.YFullscreenScopeData
// Size: 0x08 (Inherited: 0x00)
struct FYFullscreenScopeData {
	struct UObject* m_widgetClass; // 0x00(0x08)
};

// ScriptStruct Prospect.YWeaponRarityUpgradesModCollectionEntry
// Size: 0x20 (Inherited: 0x00)
struct FYWeaponRarityUpgradesModCollectionEntry {
	struct TArray<struct FDataTableRowHandle> m_unlockedMods; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> m_potentialUpgrades; // 0x10(0x10)
};

// ScriptStruct Prospect.YWeaponAttachmentEntry
// Size: 0x30 (Inherited: 0x00)
struct FYWeaponAttachmentEntry {
	struct TSoftObjectPtr<struct USkeletalMesh> m_skeletalMesh; // 0x00(0x28)
	struct FName m_socketName; // 0x28(0x08)
};

// ScriptStruct Prospect.YWeaponCompleteAnimationRuntimeDataSet
// Size: 0x50 (Inherited: 0x00)
struct FYWeaponCompleteAnimationRuntimeDataSet {
	struct TMap<enum class EYWeaponPlayState, struct FYWeaponAnimationPlayRuntimeData> m_runtimeData; // 0x00(0x50)
};

// ScriptStruct Prospect.YWeaponAnimationPlayRuntimeData
// Size: 0xa8 (Inherited: 0x00)
struct FYWeaponAnimationPlayRuntimeData {
	struct FYWeaponAnimationStaticData m_staticData; // 0x00(0x68)
	struct TArray<struct UAnimMontage*> m_weaponAnimationsStack; // 0x68(0x10)
	struct TArray<struct UAnimMontage*> m_playerFirstPersonStack; // 0x78(0x10)
	struct TArray<struct UAnimMontage*> m_thirdPersonStack; // 0x88(0x10)
	struct TArray<struct UAnimMontage*> m_thirdPersonWeaponStack; // 0x98(0x10)
};

// ScriptStruct Prospect.YWeaponAnimationData
// Size: 0x28 (Inherited: 0x00)
struct FYWeaponAnimationData {
	struct UAnimMontage* m_weaponAnimation; // 0x00(0x08)
	struct UAnimMontage* m_weaponAnimationThirdPerson; // 0x08(0x08)
	struct UAnimMontage* m_playerAnimationFirstPerson; // 0x10(0x08)
	struct UAnimMontage* m_playerAnimationThirdPerson; // 0x18(0x08)
	float m_desiredTuningPlayDuration; // 0x20(0x04)
	float m_animationRateScaleOverride; // 0x24(0x04)
};

// ScriptStruct Prospect.YWeaponInitializationData
// Size: 0x18 (Inherited: 0x00)
struct FYWeaponInitializationData {
	struct TArray<struct FYInventoryItem> m_inventoryWeapons; // 0x00(0x10)
	int32_t m_activeWeaponInstance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Prospect.YWeaponVanityRow
// Size: 0x3d8 (Inherited: 0x378)
struct FYWeaponVanityRow : FYVanityItemRowBase {
	struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> m_defaultAttachmentMaterials; // 0x378(0x50)
	struct TArray<struct FYWeaponVanityMeshAttachment> m_overrideVanityMeshAttachments; // 0x3c8(0x10)
};

// ScriptStruct Prospect.YChatWindowStyles
// Size: 0x410 (Inherited: 0x00)
struct FYChatWindowStyles {
	struct FButtonStyle Buttonlook; // 0x00(0x278)
	struct FSlateBrush ChatBackground; // 0x278(0x88)
	struct FSlateBrush InputBackground; // 0x300(0x88)
	struct FSlateBrush ChatUserMenuBackground; // 0x388(0x88)
};

// ScriptStruct Prospect.YBaseWheelEntry
// Size: 0x60 (Inherited: 0x08)
struct FYBaseWheelEntry : FTableRowBase {
	struct FText m_displayName; // 0x08(0x18)
	enum class EYWheelType m_wheelItemType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDataTableRowHandle m_uniqueRowHandleReference; // 0x28(0x10)
	struct TSoftObjectPtr<struct UTexture2D> m_iconWheelTexture; // 0x38(0x28)
};

// ScriptStruct Prospect.YTotalGainedCurrencyData
// Size: 0x20 (Inherited: 0x00)
struct FYTotalGainedCurrencyData {
	int32_t m_startAmount; // 0x00(0x04)
	enum class EYCurrencyType m_currencyType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t m_endAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FYRewardEntry> m_perEntryReward; // 0x10(0x10)
};

// ScriptStruct Prospect.YDamageNumberEntry
// Size: 0x10 (Inherited: 0x00)
struct FYDamageNumberEntry {
	struct UYWidget_DamageNumber* m_widget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Prospect.YPopupWidgetRow
// Size: 0x58 (Inherited: 0x10)
struct FYPopupWidgetRow : FYDataTableRowBase {
	SoftClassProperty m_associatedWidgetBP; // 0x10(0x28)
	struct FString m_startDateTime; // 0x38(0x10)
	struct FString m_endDateTime; // 0x48(0x10)
};

// ScriptStruct Prospect.YFpsData
// Size: 0x04 (Inherited: 0x00)
struct FYFpsData {
	float m_fps; // 0x00(0x04)
};

// ScriptStruct Prospect.YCarrouselData
// Size: 0x40 (Inherited: 0x00)
struct FYCarrouselData {
	struct TSoftObjectPtr<struct UTexture2D> m_texture; // 0x00(0x28)
	struct FText m_headline; // 0x28(0x18)
};

// ScriptStruct Prospect.YUIItemCachedData
// Size: 0x10 (Inherited: 0x00)
struct FYUIItemCachedData {
	struct UYWidget_ItemContainer* m_itemContainerWidget; // 0x00(0x08)
	int32_t m_previousAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Prospect.YUIInventoryData
// Size: 0x148 (Inherited: 0x00)
struct FYUIInventoryData {
	int32_t m_componentId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FYPlayerInventory m_bagInventoryItems; // 0x08(0x18)
	struct FYPlayerInventory m_safeContainerInventoryItems; // 0x20(0x18)
	struct FYPlayerInventory m_stashInventoryItems; // 0x38(0x18)
	struct FYInventoryItem m_bagItem; // 0x50(0x98)
	struct TMap<enum class EYPlayerSetType, struct FYInventoryItem> m_individualInventoryItems; // 0xe8(0x50)
	struct TArray<struct FString> m_removedItemIds; // 0x138(0x10)
};

// ScriptStruct Prospect.YExchangeVanityIdContextInfo
// Size: 0x30 (Inherited: 0x00)
struct FYExchangeVanityIdContextInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Prospect.LanguageSelectionData
// Size: 0x28 (Inherited: 0x00)
struct FLanguageSelectionData {
	struct FString m_cultureAberration; // 0x00(0x10)
	struct FText m_cultureLabel; // 0x10(0x18)
};

// ScriptStruct Prospect.YLeaderBoardEntryCreatedData
// Size: 0x18 (Inherited: 0x00)
struct FYLeaderBoardEntryCreatedData {
	struct UYWidget_RankedLeaderBoardEntry* m_widgetToCreate; // 0x00(0x08)
	struct TArray<struct UYWidget_RankedLeaderBoardEntry*> m_createdWidgets; // 0x08(0x10)
};

// ScriptStruct Prospect.YLeaderBoardEntryLatentCreationData
// Size: 0x60 (Inherited: 0x00)
struct FYLeaderBoardEntryLatentCreationData {
	struct UPanelWidget* m_parentWidgetToAttachTo; // 0x00(0x08)
	struct UYWidget_RankedLeaderBoardEntry* m_widgetToCreate; // 0x08(0x08)
	struct TMap<int32_t, struct FYLeaderBoardEntryData> m_leaderBoardEntriesData; // 0x10(0x50)
};

// ScriptStruct Prospect.YLeaderBoardEntryData
// Size: 0x20 (Inherited: 0x00)
struct FYLeaderBoardEntryData {
	struct FString m_playerName; // 0x00(0x10)
	int32_t m_playerRank; // 0x10(0x04)
	int32_t m_playerPlacement; // 0x14(0x04)
	bool m_isPlaced; // 0x18(0x01)
	bool m_isLocalPlayer; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Prospect.YUnlocksPopupUiData
// Size: 0x18 (Inherited: 0x00)
struct FYUnlocksPopupUiData {
	struct FString factionId; // 0x00(0x10)
	int32_t newLevel; // 0x10(0x04)
	bool unlockedShopItemsAvailable; // 0x14(0x01)
	bool unlockedContractsAvailable; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct Prospect.YVanityItemSelectionInitializationData
// Size: 0x30 (Inherited: 0x00)
struct FYVanityItemSelectionInitializationData {
	struct FYItemVisualAcquisitionData m_acqusitionData; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDataTableRowHandle m_associatedHandle; // 0x18(0x10)
	bool m_isOwned; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Prospect.YAbilityUIData
// Size: 0xa8 (Inherited: 0x00)
struct FYAbilityUIData {
	struct FYInventoryItem m_inventoryItem; // 0x00(0x98)
	int32_t m_chargeAmount; // 0x98(0x04)
	float m_timeRatio; // 0x9c(0x04)
	float m_remainingTime; // 0xa0(0x04)
	enum class EYAbilityState m_abilityState; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// ScriptStruct Prospect.YOptionsMenuData
// Size: 0x08 (Inherited: 0x00)
struct FYOptionsMenuData {
	struct UYNavigationCommand* m_commandClass; // 0x00(0x08)
};

// ScriptStruct Prospect.YWidgetUpdateInitializeData
// Size: 0x18 (Inherited: 0x00)
struct FYWidgetUpdateInitializeData {
	int32_t m_zOrder; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* m_actorToInitializeFor; // 0x08(0x08)
	struct UUserWidget* m_widgetClass; // 0x10(0x08)
};

// ScriptStruct Prospect.YSettingEntryDescriptionDataTableRow
// Size: 0x50 (Inherited: 0x10)
struct FYSettingEntryDescriptionDataTableRow : FYDataTableRowBase {
	struct FText m_description; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_image; // 0x28(0x28)
};

