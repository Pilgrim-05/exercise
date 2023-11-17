#include <iostream>
#include "fixedpoint.h"

using namespace std;

int main()
{
   FixedPoint a(37, 58);
   std::cout << a << '\n';

   FixedPoint b(-3, 9);
   std::cout << b << '\n';

   FixedPoint c(4, -7);
   std::cout << c << '\n';

   FixedPoint d(-5, -7);
   std::cout << d << '\n';

   FixedPoint e(0, -3);
   std::cout << e << '\n';

   std::cout << static_cast<double>(e) << '\n';
   return 0;
}
