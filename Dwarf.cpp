#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf( std::string name_, int hp, int armor ) : Character(hp, armor, 4), name(name_)
{
    // helpfulItems = makeHelpfulItems(2); 
    // defensiveItems = makeDefensiveItems(4);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
