#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker
{
private:
     std::string m_name;

public:
     Worker(std::string name);

    std::string getName();
};

#endif // WORKER_H
