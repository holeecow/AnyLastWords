#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Attacking UMETA(DisplayName = "Attacking"),
	ECS_Idle UMETA(DisplayName = "Idle State"),
};