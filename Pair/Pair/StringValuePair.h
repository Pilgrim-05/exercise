#ifndef STRINGVALUEPAIR_H
#define STRINGVALUEPAIR_H
#include <string>
#include "Pair2.h"

template<typename T>
class StringValuePair : public Pair2<std::string, T>
{
public:
   StringValuePair(std::string str, T val) : Pair2<std::string, T>(str, val)
   {
   }
};

#endif // STRINGVALUEPAIR_H
