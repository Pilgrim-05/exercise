#include "fixedpoint.h"


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

FixedPoint::operator double()  const
{
   double tmp = m_drob / 100.0;
   if(m_drob < 10)
      tmp = m_drob / 100.0;
   else if(m_drob > 99)
      tmp =  (m_drob / 10 + (m_drob % 10 > 4)) / 100.0;

   return m_cel + static_cast<double>(tmp);
}

std::ostream& operator<< (std::ostream& out,  const FixedPoint & fn)
{
   out << static_cast<double>(fn);
   return out;
}
