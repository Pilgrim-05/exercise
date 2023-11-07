#include <iostream>
//#include "point3d.h"
//#include "vector3d.h"

class Vector3D;
class Point3D
{
private:
   double m_x, m_y, m_z;

public:
   Point3D(double x = 0.0, double y = 0.0, double z = 0.0);

   void print();

   void moveByVector(const Vector3D &v);
};

class Vector3D
{
private:
   double m_x, m_y, m_z;
   friend void Point3D::moveByVector(const Vector3D &v);
public:
   Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);

   void print();
};

using namespace std;

int main()
{
   Point3D p3d(0, 2, 0);
   Vector3D v3d(0, 1, 2);
   p3d.print();
   p3d.moveByVector(v3d);
   p3d.print();


   return 0;
}


Point3D::Point3D(double x, double y, double z)
   : m_x(x), m_y(y), m_z(z)
{}

void Point3D::print()
{
   std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}

void Point3D::moveByVector(const Vector3D &v)
{
   m_x += v.m_x;
   m_y += v.m_y;
   m_z += v.m_z;
}


Vector3D::Vector3D(double x, double y, double z)
   : m_x(x), m_y(y), m_z(z)
{}

void Vector3D::print()
{
   std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
