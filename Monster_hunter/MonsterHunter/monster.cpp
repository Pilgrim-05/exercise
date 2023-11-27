#include "monster.h"

Monster::Monster(Type type) :
   Creature(monsterData[static_cast<int>(type)].name,
            monsterData[static_cast<int>(type)].ch,
            monsterData[static_cast<int>(type)].health,
            monsterData[static_cast<int>(type)].damage,
            monsterData[static_cast<int>(type)].gold)
{

}

int Monster::getRandomNumber(int min, int max)
{
   static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
   return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster Monster::getRandomMonster()
{
   return Monster(static_cast<Type>(getRandomNumber(0, Monster::MAX_TYPES-1)));
}

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
    { "dragon", 'D', 20, 4, 100 },
    { "orc", 'o', 4, 2, 25 },
    { "slime", 's', 1, 1, 10 }
};
