#include <cmath>
#include <iostream>

int main()
{
  for(double x=-M_PI; x<=M_PI; x += 0.1)
    {
      std::cout << x << "\t" << std::sin(x) << std::endl;
    }

  return 0;
}
