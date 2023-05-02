#include <string>
#include "Hero.cpp"
#include "Skill.cpp"
class Murad : public Hero, public Skill
{
private:
    std::string typeHero;

public:
    Murad(std::string typeHero, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->typeHero = typeHero;
    }

    
};
