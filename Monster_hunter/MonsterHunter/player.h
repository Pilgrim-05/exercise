#ifndef PLAYER_H
#define PLAYER_H
#include "creature.h"

class Player : public Creature
{
private:
   int m_level = 1;
   std::string playerName = "";

public:
   Player(std::string name = "");

   void levelUp();

   int getLevel() { return m_level; }
   bool hasWon() { return m_level >= 20; }

};

#endif // PLAYER_H
