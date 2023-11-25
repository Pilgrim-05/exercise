#ifndef BANANA_H
#define BANANA_H
#include "fruit.h"
#include <string>
#include <ostream>

class Banana : public Fruit
{
public:
   Banana();

   std::string getName() const {return m_name;}
   std::string getColor() const {return m_color;}

   friend std::ostream& operator<< (std::ostream& out, const Banana& bn);
};

#endif // BANANA_H
