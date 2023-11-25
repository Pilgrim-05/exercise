#ifndef APPLE_H
#define APPLE_H
#include "fruit.h"
#include <ostream>
class Apple : public Fruit
{
public:
   Apple(std::string color = "green");

   std::string getName() const {return m_name;}
   std::string getColor() const {return m_color;}

   friend std::ostream& operator<< (std::ostream& out, const Apple& apl);

};

#endif // APPLE_H
