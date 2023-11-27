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

private:
   static int getRandomNumber(int min, int max);

public:
   Monster(Type type);

   static Monster getRandomMonster();
};

#endif // MONSTER_H
