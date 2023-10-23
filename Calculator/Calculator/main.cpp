#include <iostream>


using std::cout;
using std::cin;
using std::endl;

using arithmeticFcn = double(*)(double, double);
//typedef double (*arithmeticFcn)(double, double);

struct arithmeticStruct{
   char op;
   arithmeticFcn fun;
};

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
arithmeticFcn getArithmeticFcn(char op);
static arithmeticStruct arithmeticArray[4] {{'+', add}, {'-', subtract}, {'*', multiply}, {'/', divide}};

int main()
{
   double a, b;
   cin >> a >> b;
   char op;
   cin >> op;

   arithmeticFcn f = getArithmeticFcn(op);
   cout << f(a, b);
   return 0;
}

double add(double a, double b)
{
   return a + b;
}
double subtract(double a, double b)
{
   return a - b;
}
double multiply(double a, double b)
{
   return a * b;
}
double divide(double a, double b)
{
   return a / b;
}

arithmeticFcn getArithmeticFcn(char op)
{
   for(auto i : arithmeticArray)
      if(i.op == op)  return i.fun;
   return add;
}
