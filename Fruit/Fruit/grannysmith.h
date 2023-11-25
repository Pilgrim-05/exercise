#ifndef GRANNYSMITH_H
#define GRANNYSMITH_H
#include "apple.h"

class GrannySmith : public Apple
{
public:
   GrannySmith();

   std::string getName() const {return m_name;}
   std::string getColor() const {return m_color;}

   friend std::ostream& operator<< (std::ostream& out, const GrannySmith& apl);
};

#endif // GRANNYSMITH_H
