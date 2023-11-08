#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H
#include "monsters.h"

class MonsterGenerator
{
private:
   static int getRandomNumber(int min, int max);

public:
   static Monsters generateMonster();

};

#endif // MONSTERGENERATOR_H
