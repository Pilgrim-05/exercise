#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H

#include <iostream>

class FixedPoint
{
private:
   std::int16_t m_cel = 0;
   std::int8_t m_drob = 0;
public:
   FixedPoint(std::int16_t cel = 0, std::int8_t drob = 0);
   FixedPoint(double num);

   operator double() const;
   FixedPoint operator- ();

   friend std::ostream& operator<< (std::ostream& out, const FixedPoint & fn);
   friend std::istream& operator>> (std::istream& in, FixedPoint & fn);
   friend bool operator== (const FixedPoint &a, const FixedPoint &b);
   friend FixedPoint operator+ (const FixedPoint &a, const FixedPoint &b);


};

#endif // FIXEDPOINT_H
