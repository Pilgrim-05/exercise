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
list_number getList(int start, int count);
list_number userIn();
int getGuessNum();
bool searchRemov(list_number &list, int guess);
int distance(list_number &list, int guess);
void playGame(list_number &list);

int main()
{
   list_number list = userIn();
   playGame(list);

   return 0;
}

int randomfrom(int min, int max)
{
   std::mt19937 mt(time(nullptr));
   return std::uniform_int_distribution{min, max}(mt);
}

list_number getList(int start, int count)
{
   int factor{randomfrom(Consts::minRandNum, Consts::maxRandNum)};
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

list_number userIn(){
   cout << "Enter start number: ";
   int start;
   cin >> start;
   cout << "Enter count numbers: ";
   int count;
   cin >> count;

   return getList(start, count);
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

int distance(list_number &list, int guess)
{
   auto result = std::min_element(list.begin(), list.end(), [=](int a, int b){
      return abs(a - guess) < abs(b - guess);
   });

   return *result;
}

void playGame(list_number &list)
{
   int guess = getGuessNum();
   while(1)
   {
      if(searchRemov(list, guess))
      {
         cout << "Nice! ";
         if(!list.empty())
         {
            cout << list.size() << " number(s) left.\n";
            guess = getGuessNum();
         }else{
            cout << " You found all numbers, good job!\n";
            break;
         }
      }else{
         cout << guess <<" is wrong!"; //
         int minDist = distance(list, guess);
         if(Consts::maxDistance >= abs(minDist - guess))
            cout << " Try " << minDist << " next time.\n";

         break;
      }
   }
}
