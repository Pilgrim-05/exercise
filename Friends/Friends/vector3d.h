#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
#include "point3d.h"

class Vector3D
{
private:
   double m_x, m_y, m_z;
   friend void moveByVector(const Vector3D &v);
public:
   Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);

   void print();


};

#endif // VECTOR3D_H


