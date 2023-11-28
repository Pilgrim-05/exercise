#include <iostream>
#include "player.h"
#include "monster.h"

Player plaerCreate();

bool fightMonster(Player&);
bool attackMonster(Player&, Monster&);
bool attackPlayer(Player&, Monster&);

int main()
{
   using namespace std;

   Player player = plaerCreate();
//   cout << "You have " << player.getHealth() << " health and are carrying " << player.getGold() << " gold.";

   srand(static_cast<unsigned int>(time(0)));
   rand();

   while(fightMonster(player))
   {}

   return 0;
}

Player plaerCreate()
{
   std::string name;
   std::cout << "Enter your name: ";
   std::cin >> name;
   std::cout << "Welcome, " << name << std::endl;
   return Player(name);
}

bool fightMonster(Player& player)
{

   Monster m = Monster::getRandomMonster();
   std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";
   bool flag = true;
   bool live = true;
   do{
      char act;
      do{
         std::cout << "(R)un or (F)ight: ";
         std::cin >> act;
         act = tolower(act);
      }while (act != 'r' && act != 'f');

      if(act == 'r' && (rand()%2))
      {
         flag = false;
         std::cout << "You successfully fled.\n";
      }else if(act == 'r'){
         live = attackPlayer(player, m);
         std::cout << "The " << m.getName() << " hit you for " << m.getDamage() << " damage." << std::endl;
      }else{
         std::cout << "You hit the " << m.getName() << " for " << player.getDamage() <<" damage.\n";
         flag = attackMonster(player, m);

         if(!flag)
         {
            std::cout << "You killed the " << m.getName() << std::endl;
            std::cout << "You are now level " << player.getLevel() << std::endl;
            std::cout << "You found " << player.getGold() << " gold." << std::endl;
            break;
         }

         live = attackPlayer(player, m);
         std::cout << "The " << m.getName() << " hit you for " << m.getDamage() << " damage." << std::endl;
      }

   }while(flag && live);

   if(!live)
   {
      std::cout << "You died at level " << player.getLevel() << " and with "
                << player.getGold() << " gold. \nToo bad you can't take it with you!" << std::endl;
   }

   if(player.hasWon())
   {
     std::cout << "Congratulations!!! You won with " << player.getGold()
               << " gold \nToo bad you can't take it with you!" << std::endl;
   }

   return (!player.hasWon() && live);
}


bool attackPlayer(Player& p, Monster& m)
{
   p.reduceHealth(m.getDamage());
   return !p.isDead();
}

bool attackMonster(Player& p, Monster& m)
{
   m.reduceHealth(p.getDamage());
   if(m.isDead())
   {
      p.addGold(m.getGold());
      p.levelUp();
   }
   return !m.isDead();
}
