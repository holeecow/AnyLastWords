#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
};