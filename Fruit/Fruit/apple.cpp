#include "apple.h"

Apple::Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber(fiber)
{

}

std::ostream& operator<< (std::ostream& out, const Apple& apl)
{
   out << "Apple(" << apl.getName() << ", " << apl.getColor() << ", " << apl.m_fiber <<")\n";

   return out;
}
