#include "Item.h"
// #include "Character.h"

struct Character;

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) {}
    void use(Character* character) override;
};

