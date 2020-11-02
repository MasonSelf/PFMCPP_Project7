#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf( std::string name_, int hitpoints, int armor ) : Character(hitPoints, armor, 4), name(name_) 
{
    helpfulItems = makeHelpfulItems(rand());
    defensiveItems = makeDefensiveItems(rand());
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}