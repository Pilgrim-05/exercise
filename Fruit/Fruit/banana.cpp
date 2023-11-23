#include "banana.h"

Banana::Banana(std::string name, std::string color) :Fruit(name, color)
{

}

std::ostream& operator<< (std::ostream& out, const Banana& bn)
{
   out << "Banana(" << bn.getName() << ", " << bn.getColor() << ")\n";

   return out;
}
