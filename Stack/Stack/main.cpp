#include <iostream>
#include <array>
#include <cassert>

class Stack{
private:
   const int max = 10;
   int size;
   std::array<int, 10> v;
public:
   void reset()
   {
      size = 0;
      for(auto &el: v)
         el = 0;
   }

   bool push(int n)
   {
      if(size >= max) return false;

      v.at(size) = n;
      ++size;

      return true;
   }

   int pop()
   {
      assert(size > 0);
      --size;
      return v.at(size);
   }

   void print()
   {
      std::cout << "( ";

      if(size > 0)
      {
         for(int i{}; i < size; ++i)
            std::cout << v.at(i) << " ";
      }
      std::cout << ")\n";
   }

};

int main()
{
   Stack stack;
   stack.reset();

   stack.print();

   stack.push(3);
   stack.push(7);
   stack.push(5);
   stack.print();

   stack.pop();
   stack.print();

   stack.pop();
   stack.pop();

   stack.print();
}

