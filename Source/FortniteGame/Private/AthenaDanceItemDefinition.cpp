#include "AthenaDanceItemDefinition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

FText UAthenaDanceItemDefinition::GetChatTriggerCommandName() const {
    return FText::GetEmpty();
}

UAthenaDanceItemDefinition::UAthenaDanceItemDefinition() {
    this->bMovingEmote = false;
    this->bMoveForwardOnly = false;
    this->WalkForwardSpeed = 300.00f;
    ItemType = EFortItemType::AthenaDance;
}

