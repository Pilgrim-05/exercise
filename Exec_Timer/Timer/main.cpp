#include <iostream>
#include "timer.h"
#include <random>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   Timer tm;

   std::random_device rd;
   std::mt19937 mersenne(rd());

   vector<int> arr(100);

   for(auto &i : arr){
      i = mersenne() % 100 + 1;
   }
   cout << tm.finish() << endl;
   tm.reset();


   std::sort(arr.begin(), arr.end());

   for(const auto &i : arr){
         cout << i << " ";
   }
   cout << endl << tm.finish() << endl;;
   return 0;
}
