#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "point.h"

class Circle : public Shape
{
private:
   Point m_p;
   int m_radius;
public:
   Circle(const Point& p, int radius);

   int const getRadius() const {return m_radius;};

   virtual std::ostream& print(std::ostream& out) const override;
};

#endif // CIRCLE_H
