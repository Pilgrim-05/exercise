#ifndef SHAPE_H
#define SHAPE_H
#include <ostream>
class Shape
{
public:
   Shape(){};
   virtual ~Shape(){}

   virtual std::ostream& print(std::ostream&) const = 0;

   friend std::ostream& operator<< (std::ostream& out, const Shape& sh)
   {
      return sh.print(out);
   }
};

#endif // SHAPE_H
