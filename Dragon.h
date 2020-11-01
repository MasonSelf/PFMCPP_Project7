#pragma once

#include "Character.h"

struct Dragon : public Character
{
    Dragon(std::string name_, int hitPoints, int armor);
    
    void attack(Character& other) override;

    const std::string& Dragon::getName() override;
    std::string Dragon::getStats() override;
private:
    const std::string name;
};

