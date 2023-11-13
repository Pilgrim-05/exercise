#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
private:
   int m_numerator;
   int m_denominator;

   friend Fraction operator*(const Fraction & f1, const Fraction & f2);
   friend Fraction operator*(const int val, const Fraction & f2);
   friend Fraction operator*(const Fraction & f1, const int val);
   int nod(int a, int b);
public:
   Fraction(int numerator = 1, int denominator = 1);
   void print();
};

#endif // FRACTION_H
