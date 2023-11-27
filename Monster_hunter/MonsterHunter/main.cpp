//#include <iostream>
//#include "player.h"
//#include "monster.h"



//int main()
//{
//   using namespace std;


//   Creature o("orc", 'o', 4, 2, 10);
//   o.addGold(5);
//   o.reduceHealth(1);
//   std::cout << "The " << o.getName() << " has " << o.getHealth() <<
//                " health and is carrying " << o.getGold() << " gold.";


//   string name;
//   cout << "Enter your name: ";
//   cin >> name;
//   cout << "Welcome, " << name << endl;

//   Player player(name);
//   cout << "You have " << player.getHealth() << " health and are carrying " << player.getGold() << " gold.";

//   srand(static_cast<unsigned int>(time(0)));
//   rand();

//   for (int i = 0; i < 10; ++i)
//   {
//      Monster m = Monster::getRandomMonster();
//      std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
//   }


//   return 0;
//}


#include <cassert>
#include <iostream>


class Fibonacci final {
 public:
  static int get_last_digit(int n) {
    assert(n >= 1);
    // put your code here
      unsigned int a = 0, b = 1;
      for(int i{}; i < n; ++i)
      {
          b = (a + b) % 10;
          a = (b - a) % 10;
      }

    return a % 10;
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
}
