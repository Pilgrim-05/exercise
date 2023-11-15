#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
private:
   struct StudentGrade
   {
      std::string name;
      char grade;

   };

   std::vector<StudentGrade> m_map;

public:
   Student();

   char& operator[](std::string name);
};

#endif // STUDENT_H
