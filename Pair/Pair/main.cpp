#include <iostream>
#include "Pair1.h"
#include "Pair2.h"
#include "StringValuePair.h"


int main()
{
//   Pair1<int> p1(6, 9);
//   std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

//   const Pair1<double> p2(3.4, 7.8);
//   std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

//   Pair2<int, double> p1(6, 7.8);
//   std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

//   const Pair2<double, int> p2(3.4, 5);
//   std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

   StringValuePair<int> svp("Amazing", 7);
   std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

   return 0;
}
