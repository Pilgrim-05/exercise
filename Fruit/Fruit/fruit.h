#ifndef FRUIT_H
#define FRUIT_H

#include <string>

class Fruit
{
private:
   std::string m_name = "";
   std::string m_color = "";
public:
   Fruit(std::string name = "", std::string color = "");
   std::string getName() const {return m_name;}
   std::string getColor() const {return m_color;}
};

#endif // FRUIT_H
