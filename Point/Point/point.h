#ifndef POINT_H
#define POINT_H


class Point
{
private:
   double m_x;
   double m_y;
   friend double distanceFrom(const Point &a, const Point &b);
public:
   Point(double x = 0.0, double y = 0.0);
   void print();
   double distance(const Point &p);


};

#endif // POINT_H
