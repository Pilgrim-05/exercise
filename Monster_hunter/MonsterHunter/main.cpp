#include <iostream>
#include "creature.h"


int main()
{
   using namespace std;
   Creature o("orc", 'o', 4, 2, 10);
   o.addGold(5);
   o.reduceHealth(1);
   std::cout << "The " << o.getName() << " has " << o.getHealth() <<
                " health and is carrying " << o.getGold() << " gold.";
   return 0;
}
