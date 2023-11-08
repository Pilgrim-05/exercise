#include "point.h"
#include <iostream>
#include <cmath>


Point::Point(double x, double y) : m_x(x), m_y(y)
{
}

void Point::print()
{
   std::cout << "(" << m_x << ", " << m_y << ")" << std::endl;

}

double Point::distance(const Point &p)
{
    return (sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y)));
}
