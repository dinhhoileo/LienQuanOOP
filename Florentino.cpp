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
    
    void setInformation()  
    {
        Hero::setInfo();
        std::cout<<"Genre: ";
        std::cin>>this->genre;
    }
    void move()
    {
        std::cout<<"go straight , turn left , turn right , turn around"<<std::endl;
    }
        void attack() override {
        std::cout << "Choose a skill to use:" << std::endl;
        std::cout << "1. Skill 1" << std::endl;
        std::cout << "2. Skill 2" << std::endl;
        std::cout << "3. Ultimate" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                skill_1();
                break;
            case 2:
                skill_2();
                break;
            case 3:
                ultimate();
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }
    }

    void skill_1() override {
        std::cout << "Using Skill 1: Phi Hoa" << std::endl;
    }

    void skill_2() override {
        std::cout << "Using Skill 2: Mua Kiem" << std::endl;
    }

    void ultimate() override {
        std::cout << "Using Ultimate: Cuong Hoa" << std::endl;
    }
};