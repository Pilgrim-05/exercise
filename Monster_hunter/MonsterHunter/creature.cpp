#include "creature.h"


Creature::Creature(std::string name, char ch, int health, int damage, int gold) :
   m_name(name), m_ch(ch), m_health(health), m_damage(damage), m_gold(gold)
{

}

void Creature::reduceHealth(int h)
{
   m_health -= h;
}

bool Creature::isDead()
{
   return m_health == 0;
}

void Creature::addGold(int g)
{
   m_gold += g;
}

const std::string &Creature::getName() const
{
   return m_name;
}

char Creature::getSymbol() const
{
   return m_ch;
}

int Creature::getHealth() const
{
   return m_health;
}

int Creature::getDamage() const
{
   return m_damage;
}

int Creature::getGold() const
{
   return m_gold;
}

