#include<iostream>
#include<string>
#include"Hero.cpp"
#include"Skill.cpp"
class Florentino :public Hero,public Skill
{
private:
    std::string genre;
public:
    Florentino(std::string genre,std::string name, int strength,int endurance, float speed, int physicalDamage, int magicDamage, int criticalDamage, int armor, int magicDefense,int damage,int coin)
    :Hero(name,strength,endurance,speed,physicalDamage,magicDamage,criticalDamage,armor,magicDefense,damage,coin)
    {
        this->genre=genre;
    }
    
    //method getter and setter
    std::string getGenre(){return this->genre;}
    void setGenre(std::string genre){ this->genre=genre;}

    void setInformation()  
    {
        Hero::setInfo();
        std::cout<<"Genre: ";
        std::cin>>this->genre;
    }

    void attack() override {
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
        std::cout<<"FULL TANK"<<std::endl;
    }



    void skill_1() override {
        std::cout << "Using Skill 1: Phi Hoa" << std::endl;
    }

    void skill_2() override {
        std::cout << "Using Skill 2: Mua Kiem" << std::endl;
    }

    void ultimate() override {
        std::cout << "Using Ultimate: Cuong Hoa:" << std::endl;
    }
    void getInformation() 
    {
        std::cout<<"FLORENTINO"<<std::endl;
        std::cout<<"Genre:"<<this->genre<<std::endl;
        Hero::getInfor();
    }
};