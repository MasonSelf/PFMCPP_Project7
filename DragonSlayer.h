#pragma once
#include "Character.h"
#include "AttackItem.h"
#include <memory>

struct DragonSlayer : Character
{
    DragonSlayer( std::string name_, int hp, int armor );
    // ~DragonSlayer()
    // {
    //     delete attackItem;
    //     attackItem = nullptr;
    // } 
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

    //Item* attackItem;
    std::unique_ptr<Item> attackItem;
private:
    const std::string name;
};

