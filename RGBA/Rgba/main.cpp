#include <iostream>

class RGBA{
private:
   uint8_t m_red;
   uint8_t m_green;
   uint8_t m_blue;
   uint8_t m_alpha;

public:
   RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255)
      : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
   {}

   void print()
   {
      std::cout  << "R = " << static_cast<int>(m_red) << " G = " << static_cast<int>(m_green) <<" B = "
                 << static_cast<int>(m_blue) << " A = " << static_cast<int>(m_alpha) << std::endl;

   }
};

int main()
{
   RGBA color(0, 135, 135);
   color.print();
   return 0;
}
