#include <iostream>
#include "worker.h"
#include "department.h"

using namespace std;

int main()
{
   Worker *w1 = new Worker("Anton");
   Worker *w2 = new Worker("Ivan");
   Worker *w3 = new Worker("Max");

   {
      Department department;
      department.add(w1);
      department.add(w2);
      department.add(w3);

      std::cout << department;
   }

   std::cout << w1->getName() << " still exists!\n";
   std::cout << w2->getName() << " still exists!\n";
   std::cout << w3->getName() << " still exists!\n";

   delete w1;
   delete w2;
   delete w3;


   return 0;
}
