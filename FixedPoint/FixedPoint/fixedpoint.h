#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H

#include <ostream>

class FixedPoint
{
private:
   std::int16_t m_cel = 0;
   std::int8_t m_drob = 0;
public:
   FixedPoint(std::int16_t cel = 0, std::int8_t drob = 0);

   operator double() const;

   friend std::ostream& operator<< (std::ostream& out, const FixedPoint & fn);

};

#endif // FIXEDPOINT_H
