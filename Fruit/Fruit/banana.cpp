#include "banana.h"

Banana::Banana() :Fruit("banana", "yellow")
{
}

std::ostream& operator<< (std::ostream& out, const Banana& bn)
{
   out << "Banana(" << bn.getName() << ", " << bn.getColor() << ")\n";

   return out;
}
