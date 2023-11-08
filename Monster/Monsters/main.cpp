#include <iostream>
#include "monsters.h"
#include "monstergenerator.h"

using namespace std;

int main()
{
   Monsters jack = MonsterGenerator::generateMonster(); //(Monsters::Orc, "Jack", 90);

   jack.print();

   return 0;
}
