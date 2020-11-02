#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin( std::string name_, int hitpoints, int armor ) : Character(hitPoints, armor, 10), name(name_) 
{
    helpfulItems = makeHelpfulItems(rand());
    defensiveItems = makeDefensiveItems(rand());
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
