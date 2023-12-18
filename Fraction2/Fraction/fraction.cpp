#include "fraction.h"
#include <stdexcept>


Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom)
{
   if(denominator == 0)
      throw std::runtime_error("Your fraction has an invalid denominator.");
}
