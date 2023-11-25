#include "apple.h"

Apple::Apple(std::string color) : Fruit("apple", color)
{

}

std::ostream& operator<< (std::ostream& out, const Apple& apl)
{
   out << "Apple(" << apl.getName() << ", " << apl.getColor() << ")\n";

   return out;
}
