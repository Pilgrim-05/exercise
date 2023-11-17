#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>

class IntArray
{
private:
   int m_size = 0;
   int *m_array = nullptr;
public:
   IntArray(int size = 0);
   ~IntArray();
   IntArray(const IntArray& arr);

   int& operator[] (int i);
   int& operator[] (int i) const;
   IntArray& operator= (const IntArray& arr);

   friend std::ostream& operator<< (std::ostream &out, const IntArray &arr);

};

#endif // INTARRAY_H
