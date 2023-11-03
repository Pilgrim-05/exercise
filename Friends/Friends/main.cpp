#include <iostream>
#include "vector3d.h"
#include "point3d.h"

using namespace std;

int main()
{
   Point3D p3d(0, 2, 0);
   Vector3D v3d(0, 1, 2);
   p3d.print();
//   p3d.moveByVector(v3d);
   p3d.print();


   return 0;
}
