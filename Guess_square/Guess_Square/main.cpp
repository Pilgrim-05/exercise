#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

using list_number = std::vector<int>;

enum Consts{
   minRandNum = 2,
   maxRandNum = 4,
   maxDistance = 4,
};

int randomfrom(int min, int max);
list_number getList(int start, int count, int factor);
list_number userIn(const int factor);
int getGuessNum();
bool searchRemov(list_number &list, int guess);
void playGame(list_number &list);

int main()
{
   int factor{randomfrom(Consts::minRandNum, Consts::maxRandNum)};
   list_number list = userIn(factor);

   for(const auto &el : list)
      cout << el << " ";

   playGame(list);
   return 0;
}

int randomfrom(int min, int max)
{
   std::mt19937 mt(time(nullptr));
   return std::uniform_int_distribution{min, max}(mt);
}

list_number getList(int start, int count, int factor)
{
   list_number list(count);
   int i = start;
   for(auto &el : list)
   {
      el = i * i * factor;
      ++i;
   }
   cout << "I generated " << count << " square numbers. Do you know what each number is after multiplying it by " << factor << "?\n";
   return list;
}

list_number userIn(int factor){
   cout << "Enter start number: ";
   int start;
   cin >> start;
   cout << "Enter count numbers: ";
   int count;
   cin >> count;

   return getList(start, count, factor);
}

int getGuessNum()
{
   cout << ">";
   int guess;
   cin >> guess;
   return guess;
}

bool searchRemov(list_number &list, int guess)
{
   auto it = std::find(list.begin(), list.end(), guess);
   if(it != list.end())
   {
      list.erase(it);
      return true;
   }else{
      return false;
   }
}



void playGame(list_number &list)
{
   while(searchRemov(list, getGuessNum()))
   {
      cout << "Nice!" << list.size() << " number(s) left.\n";
   }



}
