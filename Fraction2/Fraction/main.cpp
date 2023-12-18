#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
   int num;
   int denom;
   cout << "Enter the numerator: ";
   cin >> num;
   cout << "Enter the denominator: ";
   cin >> denom;

   try{
      Fraction fr(num, denom);
   }
   catch(exception& ex)
   {
      cerr << ex.what();
   }

   return 0;
}
