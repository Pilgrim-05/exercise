#include "fixedpoint.h"
#include <cmath>

FixedPoint::FixedPoint(int16_t cel, int8_t drob) : m_cel(cel), m_drob(drob)
{
   if(m_cel < 0 || m_drob < 0)
   {
      if(m_drob > 0)
         m_drob = -m_drob;
      else if(m_cel > 0)
         m_cel = -m_cel;
   }
}

FixedPoint::FixedPoint(double num)
{
   m_cel = static_cast<int16_t>(num);
   m_drob = static_cast<int8_t>(round((num - m_cel) * 100));
}

FixedPoint::operator double()  const
{
   double tmp = m_drob / 100.0;
   if(m_drob < 10)
      tmp = m_drob / 100.0;
   else if(m_drob > 99)
      tmp =  (m_drob / 10 + (m_drob % 10 > 4)) / 100.0;

   return m_cel + static_cast<double>(tmp);
}

FixedPoint FixedPoint::operator-()
{
   return -static_cast<double>(*this);
}

std::ostream& operator<< (std::ostream& out,  const FixedPoint & fn)
{
   out << static_cast<double>(fn);
   return out;
}

std::istream& operator>> (std::istream& in, FixedPoint & fn)
{
   double n;
   in >> n;
   fn = FixedPoint(n);
   return in;
}

bool operator== (const FixedPoint &a, const FixedPoint &b)
{
   return static_cast<double>(a) == static_cast<double>(b);
}

FixedPoint operator+ (const FixedPoint &a, const FixedPoint &b)
{  double tmp = static_cast<double>(a) + static_cast<double>(b);
   return FixedPoint(tmp);
}
