#ifndef AVERAGE_H
#define AVERAGE_H
#include <iostream>

class  Average
{
private:
    int32_t m_summ = 0;
    int8_t m_count = 0;

public:
    Average(int32_t summ = 0);

    Average& operator+(int a);

    Average& operator+= (int a);

    friend std::ostream & operator<< (std::ostream& out, const Average &d);

};


#endif // AVERAGE_H


