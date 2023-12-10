#ifndef PAIR2_H
#define PAIR2_H

template<typename T, typename T1>
class Pair2{
private:
   T m_first;
   T1 m_second;
public:
   Pair2(T first, T1 second) : m_first(first), m_second(second)
   {}

   T first() const {return m_first;}
   T1 second() const {return m_second;}
};

#endif // PAIR2_H
