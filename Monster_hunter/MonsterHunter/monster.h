#ifndef MONSTER_H
#define MONSTER_H
#include "creature.h"

#include <cstdlib>
#include <ctime>


class Monster : public Creature
{
public:
   enum Type{DRAGON, ORC, SLIME, MAX_TYPES};

   struct MonsterData
   {
      std::string name = "";
      char ch;
      int health = 0;
      int damage = 0;
      int gold = 0;
   };

   static MonsterData monsterData[MAX_TYPES];

   Monster(Type type);
   static Monster getRandomMonster();
private:
   static int getRandomNumber(int min, int max);
};

#endif // MONSTER_H
