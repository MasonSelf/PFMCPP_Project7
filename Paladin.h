#pragma once
#include "Character.h"

struct Paladin : Character
{
    Paladin( std::string Name, int hp, int armor );

    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
