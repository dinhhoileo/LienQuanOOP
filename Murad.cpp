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

    std::string getTypeHero(){return this->typeHero;}
    void getTypeHero(std::string typeHero){this->typeHero=typeHero;}

    void setInformation() 
    {
        Hero::setInfo();
        std::cout<<"Type Hero: ";
        std::cin>>this->typeHero;
    }

     void getInformation() 
    {
        std::cout<<"Murad"<<std::endl;
        std::cout<<"Type Hero:"<<this->typeHero<<std::endl;
        Hero::getInfor();
    }
    
    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }

    void skill_1()
    {
        std::cout<<"Luot 3 lan:"<<std::endl;
    }
    void skill_2()
    {
        std::cout<<"Xoay ao anh"<<std::endl;
    }
    void ultimate()
    {
        std::cout<<"Ao anh tram:"<<std::endl;
    }
    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout<<"FULL TANK"<<std::endl;
    }
};
