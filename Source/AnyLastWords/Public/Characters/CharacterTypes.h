#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
	ECS_Dead UMETA(DisplayName = "Dead"),
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_GettingHit UMETA(DisplayName = "Getting Hit"),
};

UENUM(BlueprintType)
enum class EMinionState : uint8
{
	EMS_Idle UMETA(DisplayName = "Idle"),
	EMS_Chasing UMETA(DisplayName = "Chasing"),
	EMS_Attacking UMETA(DisplayName = "Attacking"),
	EMS_Dead UMETA(DisplayName = "Dead"),
};