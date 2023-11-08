#include "monsters.h"
#include <iostream>

std::string Monsters::getTypeString()
{
   std::string str = "";

   switch(m_type)
   {
   case MonsterType::Dragon:
      str = "Dragon";
      break;
   case MonsterType::Goblin:
      str = "Goblin";
      break;
   case MonsterType::Ogre:
      str = "Ogre";
      break;

   case MonsterType::Orc:
      str = "Orc";
      break;
   case MonsterType::Skeleton:
      str = "Skeleton";
      break;
   case MonsterType::Troll:
      str = "Troll";
      break;
   case MonsterType::Vampire:
      str = "Vampire";
      break;
   case MonsterType::Zombie:
      str = "Zombie";
      break;
   default:
      str = "Not Monster";
   }

   return str;
}

Monsters::Monsters(MonsterType type, std::string name, int health) : m_type(type), m_name(name), m_health(health)
{
}

void Monsters::print()
{
   std::cout << m_name << " is the " << getTypeString() << " that has " << m_health << " health points." << std::endl;
}
