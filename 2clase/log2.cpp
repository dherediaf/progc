#include <iostream>
#include <cmath>

int main()
{
  for(double x=0.1; x<=10e4; x *=2)
    {
      std::cout << x << "\t" << std::log2(x) << std::endl;

    }

  return 0;

}
