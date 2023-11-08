#include "monstergenerator.h"
#include <random>
#include <ctime>
#include <array>


int MonsterGenerator::getRandomNumber(int min, int max)
{
   srand(time(nullptr));
   static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
   return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monsters MonsterGenerator::generateMonster()
{
   std::array<std::string, 6> names={"Morgan", "Blaster", "Gargon", "Jeck", "Raptor", "Stricke"};
   int type = getRandomNumber(0, Monsters::MAX_MONSTER_TYPES-1);
   int health = getRandomNumber(1, 100);
   int index = getRandomNumber(0, names.size()-1);
   std::string name = names[index];
   return Monsters(type, name, health);
}
