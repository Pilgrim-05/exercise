#include "timer.h"
#include <iostream>

Timer::Timer():starter(clock_t::now())
{}

void Timer::reset()
{
   starter = clock_t::now();
}

double Timer::finish() const
{
   return std::chrono::duration_cast<second_t>(clock_t::now() - starter).count();
}

Timer::~Timer()
{
//   std::cout << std::chrono::duration_cast<second_t>(clock_t::now() - starter).count();
}
