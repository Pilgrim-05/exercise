#include "department.h"

Department::Department() : size(0){}

Department::Department(std::vector<Worker *> worker) : size(worker.size())
{
   for(int i{}; i < size; ++i)
      m_worker[i] = worker[i];
}

void Department::add(Worker *w)
{
   m_worker.push_back(w);
}


std::ostream& operator<< (std::ostream& out, const Department &dp)
{
   out << "Department: ";
   for(auto &i : dp.m_worker)
      out << i->getName() << " ";
   out << std::endl;

   return out;
}
