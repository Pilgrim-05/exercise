#include "player.h"

Player::Player(std::string name, char ch, int health, int amount, int gold) :
   Creature(name, ch, health, amount, gold), m_level(1)
{


}
