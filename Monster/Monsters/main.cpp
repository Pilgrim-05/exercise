#include <iostream>
#include <random>
#include <ctime>
#include "monsters.h"
#include "monstergenerator.h"

using namespace std;

int main()
{
   srand(time(nullptr));
   rand();

   Monsters jack = MonsterGenerator::generateMonster(); //(Monsters::Orc, "Jack", 90);

   jack.print();

   return 0;
}
