#include "fraction.h"
#include <iostream>

int Fraction::nod(int a, int b) {
   return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
}

Fraction::Fraction(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator)
{
}

void Fraction::print()
{
   int nd = nod(m_numerator, m_denominator);
   std::cout << m_numerator/nd  << "/" << m_denominator/nd << std::endl;
}

Fraction operator*(const Fraction & f1, const Fraction & f2)
{
   return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator*(const int val, const Fraction & f2)
{
   return Fraction(val * f2.m_numerator, f2.m_denominator);
}

Fraction operator*(const Fraction & f1, const int val)
{
   return Fraction(val * f1.m_numerator, f1.m_denominator);
}
