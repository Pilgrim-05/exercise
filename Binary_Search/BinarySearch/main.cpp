#include <iostream>

using namespace std;

int binarySearch(int *array, int searched, int min, int max);


int main()
{
   int max = 14;
   int array[] = { 4, 7, 9, 13, 15, 19, 22, 24, 28, 33, 37, 41, 43, 47, 50 };

   std::cout << "Enter a number: ";
   int searched ;
   std::cin >> searched ;

   int index = binarySearch(array, searched , 0, max);

   if (index != -1)
      std::cout << "Good! Your value " << searched << " is on position "<< index << " in array!\n";
   else
      std::cout << "Fail! Your value " << searched << " isn't in array!\n";
   return 0;
}

int binarySearch(int *array, int searched, int min, int max)
{
   int n = (min+max) / 2;
   while(min <= max)
   {
      if(array[n] == searched) return n;
      if(array[n] > searched) max = n-1;
      else if(array[n] < searched) min = n+1;
      n = (min+max) / 2;
   }
   return -1;
}

