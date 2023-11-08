#include <iostream>
#include "point.h"
#include <cmath>

double distanceFrom(const Point &a, const Point &b);

using namespace std;

int main()
{
   Point a;
   Point b(2.0, 5.0);

   a.print();
   b.print();

   cout << "Distance to " << distanceFrom(a, b);

   return 0;
}

double distanceFrom(const Point &a, const Point &b)
{
   return (sqrt((a.m_x - b.m_x) * (a.m_x - b.m_x) + (a.m_y - b.m_y) * (a.m_y - b.m_y)));
}
