#include <iostream>
#include "student.h"

using namespace std;

int main()
{
   Student grades;
   grades["John"] = 'A';
   grades["Martin"] = 'B';
   std::cout << "John has a grade of " << grades["John"] << '\n';
   std::cout << "Martin has a grade of " << grades["Martin"] << '\n';
   std::cout << "Djeck has a grade of " << grades["Djeck"] << '\n';
   return 0;
}
