#include "student.h"

Student::Student()
{
}

char &Student::operator[](std::string name)
{
   for(auto &el : m_map)
      if(el.name == name)
         return el.grade;

   StudentGrade tmp{name, 'A'};
   m_map.push_back(tmp);
   return m_map.back().grade;
}
