#include <iostream>
#include "triangle.h"
#include "circle.h"
#include <vector>


int getLargestRadius(std::vector<Shape*> v);

int main()
{
   std::vector<Shape*> v;
   v.push_back(new Circle(Point(1, 2, 3), 7));
   v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));

   v.push_back(new Circle(Point(4, 5, 6), 3));

   for(auto &i : v)
      std::cout << *i << std::endl;

   std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';

   for(auto &i : v)
      delete i;

   return 0;
}


int getLargestRadius(std::vector<Shape*> v)
{ int max = 0;
   for(const auto &i : v)
   {
      if(dynamic_cast<Circle*>(i))
      {
         if(max < dynamic_cast<Circle*>(i)->getRadius())
            max = dynamic_cast<Circle*>(i)->getRadius();
      }
   }
   return max;
}
