#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin( std::string name_, int hp, int armor ) : Character(hp, armor, 10), name(name_) 
{
    helpfulItems = makeHelpfulItems(rando());
    defensiveItems = makeDefensiveItems(rando());
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
