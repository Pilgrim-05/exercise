#ifndef APPLE_H
#define APPLE_H
#include "fruit.h"
#include <ostream>
class Apple : public Fruit
{
private:
    double m_fiber = 0.0;
public:
   Apple(std::string name = "", std::string color = "", double fiber = 0.0);

   friend std::ostream& operator<< (std::ostream& out, const Apple& apl);

};

#endif // APPLE_H
