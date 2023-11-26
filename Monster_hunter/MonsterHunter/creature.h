#ifndef CREATURE_H
#define CREATURE_H
#include <string>

class Creature
{
private:
   std::string m_name = "";
   char m_ch;
   int m_health = 0;
   int m_amount = 0;
   int m_gold = 0;

public:
   Creature(std::string name = "", char ch = 0, int health = 0, int amount = 0, int gold = 0);

   void reduceHealth(int); //уменьшает здоровье Creature на указанное целочисленное значение
   bool isDead(); //возвращает true, если здоровье Creature равно 0 или меньше;
   void addGold(int); // добавляет золото Creature-у.

   const std::string &getName() const;
   char getCh() const;
   int getHealth() const;
   int getAmount() const;
   int getGold() const;
};

#endif // CREATURE_H
