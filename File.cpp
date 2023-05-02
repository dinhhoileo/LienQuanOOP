#include <fstream>
#include "Hero.cpp"
class HeroFileWriter
{
public:
    static void writeToFile( Hero& hero,  std::string& filePath)
    {
        std::ofstream outFile(filePath);

        if (outFile.is_open())
        {
            outFile << "Name: " << hero.getName() << std::endl;
            outFile << "Strength: " << hero.getStrength() << std::endl;
            outFile << "Endurance: " << hero.getEndurance() << std::endl;
            outFile << "Speed: " << hero.getSpeed() << std::endl;
            outFile << "Physical Damage: " << hero.getPhysicalDamage() << std::endl;
            outFile << "Magic Damage: " << hero.getMagicDamage() << std::endl;
            outFile << "Critical Damage: " << hero.getCriticalDamage() << std::endl;
            outFile << "Armor: " << hero.getArmor() << std::endl;
            outFile << "Magic Defense: " << hero.getMagicDefense() << std::endl;
            outFile << "Damage: " << hero.getDamage() << std::endl;
            outFile << "Coin: " << hero.getCoin() << std::endl;

            outFile.close();
            std::cout << "Successfully written to file " << filePath << std::endl;
        }
        else
        {
            std::cout << "Failed to open file " << filePath << std::endl;
        }
    }
};
