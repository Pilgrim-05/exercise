#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "worker.h"
#include<iostream>
#include <vector>

class Department
{
private:
    std::vector<Worker*> m_worker;
    size_t size;

public:
    Department();
    Department(std::vector<Worker*> worker);

    friend std::ostream& operator<< (std::ostream& out, const Department &dp);

    void add(Worker* w);
};

#endif // DEPARTMENT_H
