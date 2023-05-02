#include <iostream>
#include <string>
#include <cstring>
#include<fstream>
// lớp định nghĩa nhân vật
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
    Hero(std::string name, int strength, int endurace, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
    {
        this->name = name;
        this->strength = strength;
        this->endurance = endurance;
        this->speed = speed;
        this->physicalDamage = physicalDamage;
        this->magicDamage = magicDamage;
        this->criticalDamage = criticalDamage;
        this->armor = armor;
        this->magicDefense = magicDamage;
        this->damage = damage;
        this->coin = 400;
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
    int getDamage() { return this->damage; }
    int getCoin() { return this->coin = coin; }

    void setName(std::string name) { this->name = name; }
    void setStrength(int strenght) { this->strength = strenght; }
    void setEndurance(int endurance) { this->endurance = endurance; }
    void setSpeed(float speed) { this->speed = speed; }
    void setPhysicalDamage(int physicalDamage) { this->physicalDamage = physicalDamage; }
    void setMagicDamage(int magicDamage) { this->magicDamage = magicDamage; }
    void setCriticalDamage(int criticalDamage) { this->criticalDamage = criticalDamage; }
    void setArmor(int armor) { this->armor = armor; }
    void setMagicDefense(int magicDefense) { this->magicDefense = magicDefense; }
    void setDamage(int damage) { this->damage = damage; }
    void setCoin(int coint) { this->coin = coin; }
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
        std::cout << "Coin:" << this->coin << std::endl;

        std::cin.ignore();
    }
    // method di chuyển
    virtual int move(int setSpeed()) = 0;
    // virtual method tấn công
    virtual void attack() = 0;
    // virtual method phòng thủ
    virtual void defend() = 0;
};

// lớp định nghĩa chiêu thức
class Skill
{
protected:
    virtual void skill_1() = 0;
    virtual void skill_2() = 0;
    virtual void ultimate() = 0;
};
// đối tượng florentino
class Florentino : public Hero, public Skill
{
private:
    std::string genre; // giới tính

public:
    Florentino();
    Florentino(std::string genre, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->genre = genre;
    }

    // method getter and setter
    std::string getGenre() { return this->genre; }
    void setGenre(std::string genre) { this->genre = genre; }

    void setInformation()
    {
        std::cout << "============FLORENTINO===========" << std::endl;
        Hero::setInfo();
        std::cout << "Genre: ";
        std::cin >> this->genre;
    }

    void getInformation()
    {
        std::cout << "============FLORENTINO===========" << std::endl;
        std::cout << "Genre:" << this->genre << std::endl;
        Hero::getInfor();
    }
    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }
    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout << "FULL TANK" << std::endl;
    }

    void skill_1() override
    {
        std::cout << "Using Skill 1: Phi Hoa" << std::endl;
    }

    void skill_2() override
    {
        std::cout << "Using Skill 2: Mua Kiem" << std::endl;
    }

    void ultimate() override
    {
        std::cout << "Using Ultimate: Cuong Hoa:" << std::endl;
    }
};
// đối tượng murad
class Murad : public Hero, public Skill
{
private:
    std::string typeHero; // thể loại tướng

public:
    Murad();
    Murad(std::string typeHero, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->typeHero = typeHero;
    }

    std::string getTypeHero() { return this->typeHero; }
    void getTypeHero(std::string typeHero) { this->typeHero = typeHero; }

    void setInformation()
    {
        std::cout << "============MURAD===========" << std::endl;
        Hero::setInfo();
        std::cout << "Type Hero: ";
        std::cin >> this->typeHero;
    }

    void getInformation()
    {
        std::cout << "============MURAD===========" << std::endl;
        std::cout << "Type Hero:" << this->typeHero << std::endl;
        Hero::getInfor();
    }

    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }

    void skill_1() override
    {
        std::cout << "Luot 3 lan:" << std::endl;
    }
    void skill_2() override
    {
        std::cout << "Xoay ao anh" << std::endl;
    }
    void ultimate() override
    {
        std::cout << "Ao anh tram:" << std::endl;
    }
    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout << "FULL TANK" << std::endl;
    }
};

class Krixi : public Hero, public Skill
{
private:
    std::string theFace; // gương mặt

public:
    // constructor
    Krixi(std::string theFace, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->theFace = theFace;
    }

    void setInformation()
    {
        std::cout << "============KRIXI==============" << std::endl;
        std::cout << "The Face:";
        std::cin >> this->theFace;
        Hero::getInfor();
    }

    void getInformation()
    {
        std::cout << "============KRIXI==============" << std::endl;
        std::cout << "The Face: " << this->theFace << std::endl;
        Hero::getInfor();
    }

    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }

    void skill_1() override
    {
        std::cout << "Tha buom" << std::endl;
    }

    void skill_2() override
    {
        std::cout << "Bao la" << std::endl;
    }

    void ultimate() override
    {
        std::cout << "Mua sao bang" << std::endl;
    }

    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout << "FULL TANK" << std::endl;
    }
};

class Toro : public Hero, public Skill
{
private:
    std::string typeHero; // thể loại tướng

public:
    Toro();
    Toro(std::string typeHero, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->typeHero = typeHero;
    }

    std::string getTypeHero() { return this->typeHero; }
    void getTypeHero(std::string typeHero) { this->typeHero = typeHero; }

    void setInformation()
    {
        std::cout << "============TORO===========" << std::endl;
        Hero::setInfo();
        std::cout << "Type Hero: ";
        std::cin >> this->typeHero;
    }

    void getInformation()
    {
        std::cout << "============TORO===========" << std::endl;
        std::cout << "Type Hero:" << this->typeHero << std::endl;
        Hero::getInfor();
    }

    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }
    void skill_1() override
    {
        std::cout << "Huc" << std::endl;
    }
    void skill_2() override
    {
        std::cout << "Gong" << std::endl;
    }
    void ultimate() override
    {
        std::cout << "Dia chan" << std::endl;
    }
    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout << "FULL TANK" << std::endl;
    }
};

class Hayate: public Hero,public Skill
{
private:
    std::string typeHero; // thể loại tướng

public:
    Hayate();
    Hayate(std::string typeHero, std::string name, int strength, int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int damage, int coin)
        : Hero(name, strength, endurance, speed, physicalDamage, magicDamage, criticalDamage, armor, magicDefense, damage, coin)
    {
        this->typeHero = typeHero;
    }

    std::string getTypeHero() { return this->typeHero; }
    void getTypeHero(std::string typeHero) { this->typeHero = typeHero; }

      void setInformation()
    {
        std::cout << "============HAYATE===========" << std::endl;
        Hero::setInfo();
        std::cout << "Type Hero: ";
        std::cin >> this->typeHero;
    }

    void getInformation()
    {
        std::cout << "============HAYATE===========" << std::endl;
        std::cout << "Type Hero:" << this->typeHero << std::endl;
        Hero::getInfor();
    }

    void attack() override
    {
        skill_1();
        skill_2();
        ultimate();
    }
    void skill_1() override
    {
        std::cout << "Chuoi phi tieu" << std::endl;
    }
    void skill_2() override
    {
        std::cout << "Luot" << std::endl;
    }
    void ultimate() override
    {
        std::cout << "Bao phi tieu" << std::endl;
    }
    int move(int setSpeed()) override
    {
        return getSpeed();
    }

    void defend() override
    {
        std::cout << "FULL TANK" << std::endl;
    }

};

class File {
private:
    std::ofstream file;
public:
    File() {}
    File(const std::string& filename) {
        file.open(filename, std::ios::out | std::ios::app);
    }
    ~File() {
        if (file.is_open()) {
            file.close();
        }
    }
    void writeToTextFile(const std::string& name, int strength, int endurance, int speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense, int coin) {
        if (file.is_open()) {
            file << "Name: " << name << std::endl;
            file << "Strength: " << strength << std::endl;
            file << "Endurance: " << endurance << std::endl;
            file << "Speed: " << speed << std::endl;
            file << "Physical Damage: " << physicalDamage << std::endl;
            file << "Magic Damage: " << magicDamage << std::endl;
            file << "Critical Damage: " << criticalDamage << std::endl;
            file << "Armor: " << armor << std::endl;
            file << "Magic Defense: " << magicDefense << std::endl;
            file << "Coin: " << coin << std::endl;
        }
        else {
            std::cerr << "File is not open!" << std::endl;
        }
    }
};
