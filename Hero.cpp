#include <iostream>
#include <string>

class Hero
{
private:
    std::string name;   // Tên tướng
    int strength;       // Sức mạnh ban đầu
    int endurance;      // Sức bền
    float speed;        // Tốc độ
    int physicalDamage; // Sát thương vật lí
    int magicDamage;    // Sát thương phép thuật
    int criticalDamage; // Sát thương chí mạng
    int armor;          // Giáp
    int magicDefense;   // Kháng phép
    int damage;         // sát thương
    int coin;           // tiền trong trận đấu

public:
    // constructor
    Hero(std::string name, int strength,int endurace, float speed, int physicalDamage, int magicDamage, int criticalDamage
    , int armor, int magicDefense,int damage,int coin)
    {
        this->name = name;
        this->strength = strength;
        this->endurance = endurance;
        this->speed = speed;
        this->physicalDamage = physicalDamage;
        this->magicDamage = magicDamage;
        this->criticalDamage = criticalDamage;
        this->armor = armor;
        this->magicDefense=magicDamage;
        this->damage=damage;
        this->coin=400;
    }
    // method getter and setter
    std::string getName() { return this->name; }
    int getStrength() { return this->strength; }
    int getEndurance() { return this->endurance; }
    int getSpeed() { return this->speed; }
    int getPhysicalDamage() { return this->physicalDamage; }
    int getMagicDamage() { return this->magicDamage; }
    int getCriticalDamage() { return this->criticalDamage; }
    int getArmor() { return this->armor; }
    int getMagicDefense() { return this->magicDefense; }
    int getDamage(){ return this->damage;}
    int getCoin(){ return this->coin=coin;}

    void setName(std::string name) { this->name = name; }
    void setStrength(int strenght) { this->strength = strenght; }
    void setEndurance(int endurance) { this->endurance = endurance; }
    void setSpeed(float speed) { this->speed = speed; }
    void setPhysicalDamage(int physicalDamage) { this->physicalDamage = physicalDamage; }
    void setMagicDamage(int magicDamage) { this->magicDamage = magicDamage; }
    void setCriticalDamage(int criticalDamage) { this->criticalDamage = criticalDamage; }
    void setArmor(int armor) { this->armor = armor; }
    void setMagicDefense(int magicDefense) { this->magicDefense = magicDefense; }
    void setDamage(int damage){ this->damage=damage;}
    void setCoin(int coint){this->coin=coin;}
    void setInfo()
    {
        std::cout << "Name :";
        std::cin >> this->name;
        std::cout << "Strenght:";
        std::cin >> this->strength;
        std::cout << "Endurance:";
        std::cin >> this->endurance;
        std::cout << "Speed:";
        std::cin >> this->speed;
        std::cout << "Physical Damage:";
        std::cin >> this->physicalDamage;
        std::cout << "Magic Damage:";
        std::cin >> this->magicDamage;
        std::cout << "Critial Damage:";
        std::cin >> this->criticalDamage;
        std::cout << "Armor:";
        std::cin >> this->armor;
        std::cout << "Magic Defense:";
        std::cin >> this->magicDefense;
        std::cout << "Coin:";
        std::cin >> this->coin;
        std::cin.ignore();
    }
    void getInfor()
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Strength: " << this->strength << std::endl;
        std::cout << "Endurance: " << this->endurance << std::endl;
        std::cout << "Speed: " << this->speed << std::endl;
        std::cout << "Physical Damage: " << this->physicalDamage << std::endl;
        std::cout << "Magic Damage: " << this->magicDamage << std::endl;
        std::cout << "Critical Damage: " << this->criticalDamage << std::endl;
        std::cout << "Armor: " << this->armor << std::endl;
        std::cout << "Magic Defense: " << this->magicDefense << std::endl;
        std::cout << "Coin:"<<this->coin<<std::endl;

        std::cin.ignore();
    }
    // method di chuyển
    virtual int move(int setSpeed())= 0;
    // virtual method tấn công
    virtual void attack() = 0;
    // virtual method phòng thủ
    virtual void defend() = 0;
};
