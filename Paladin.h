#pragma once
#include "Character.h"

struct Paladin : public Character
{
    Paladin( std::string Name, int hitpoints, int armor );

    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};