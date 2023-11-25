#include "grannysmith.h"

GrannySmith::GrannySmith() : Apple()
{
   m_name = "Granny Smith apple";
}

std::ostream& operator<< (std::ostream& out, const GrannySmith& apl)
{
   out << "Apple(" << apl.getName() << ", " << apl.getColor() << ")\n";

   return out;
}

