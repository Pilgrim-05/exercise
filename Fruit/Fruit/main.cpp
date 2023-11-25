#include <iostream>
#include "apple.h"
#include "banana.h"
#include "grannysmith.h"

using namespace std;

int main()
{
//   const Apple a("red");
//   std::cout << a;

//   const Banana b;
//   std::cout << b;

   Apple a("red");
   Banana b;
   GrannySmith c;

   std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
   std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
   std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
   return 0;
}
