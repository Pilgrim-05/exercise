#include "average.h"

Average::Average(int32_t summ) : m_summ(summ), m_count(0)
{
}

Average &Average::operator+(int a)
{
   ++m_count;
   m_summ += a;
   return *this;
}

Average &Average::operator+=(int a)
{
   return *this + a;
}

std::ostream& operator<<(std::ostream& out, const Average &d)
{
   out << d.m_summ/d.m_count;
   return out;
}


