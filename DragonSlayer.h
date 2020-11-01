#pragma once
#include "Character.h"

struct DragonSlayer : public Character
{
    DragonSlayer( std::string name_, int hitPoints, int armor );
    
    const std::string& DragonSlayer::getName() override;
    std::string DragonSlayer::getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};