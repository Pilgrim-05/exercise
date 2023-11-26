#ifndef PLAYER_H
#define PLAYER_H
#include "creature.h"

class Player : public Creature
{
private:
   int m_level = 1;
   std::string playerName = "";

public:
   Player(std::string name = "", char ch = '@', int health = 10,
          int amount = 1, int gold = 0);
};

#endif // PLAYER_H
