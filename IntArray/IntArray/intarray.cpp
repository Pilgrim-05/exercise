#include "intarray.h"
#include <cassert>

IntArray::IntArray(int size)
{
   assert(size >=0);
   m_size = size;
   m_array = new int[size];
}

IntArray::~IntArray()
{
   if(m_array != nullptr)
      delete[] m_array;
}

IntArray::IntArray(const IntArray &arr)
{
   m_size = arr.m_size;
   m_array = new int[m_size];
   for(int i{}; i < m_size; ++i)
      m_array[i] = arr.m_array[i];
}

int &IntArray::operator[](int i)
{
   assert(i >= 0 && i < m_size);
   return m_array[i];
}

int &IntArray::operator[](int i) const
{
   assert(i >= 0 && i < m_size);
   return m_array[i];
}

IntArray &IntArray::operator=(const IntArray &arr)
{
   if(this == &arr) return *this;

   m_size = arr.m_size;
   delete [] m_array;
   m_array = new int[m_size];
   for(int i{}; i < m_size; ++i)
      m_array[i] = arr.m_array[i];

   return *this;
}

std::ostream& operator<< (std::ostream &out, const IntArray &arr)
{
   for(int i{}; i < arr.m_size; ++i)
   {
      out << arr.m_array[i] << " ";
   }

   return out;
}


