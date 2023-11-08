#ifndef MONSTERS_H
#define MONSTERS_H
#include <string>

class Monsters
{
public:
   enum MonsterType{ Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire, Zombie, MAX_MONSTER_TYPES };

private:
   MonsterType m_type;
   std::string m_name;
   int m_health;

   std::string getTypeString();

public:
   Monsters(MonsterType type, std::string name, int health);
   void print();
};

#endif // MONSTERS_H
