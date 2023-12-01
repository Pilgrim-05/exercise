#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include "point.h"

class Triangle : public Shape
{
private:
   Point m_p1;
   Point m_p2;
   Point m_p3;

public:
   Triangle(const Point& p1, const Point& p2, const Point& p3);

   virtual std::ostream& print(std::ostream& out) const override;

   ~Triangle(){};
};

#endif // TRIANGLE_H
