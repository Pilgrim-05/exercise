#include "circle.h"

Circle::Circle(const Point& p, int radius) : m_p(p), m_radius(radius)
{
}

std::ostream &Circle::print(std::ostream &out) const
{
   out << "Circle(" << m_p << ", radius " << m_radius << ")";
   return out;
}
