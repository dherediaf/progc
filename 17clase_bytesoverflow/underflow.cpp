#include <iostream>

int main(void)
{
  typedef double RL;
  RL a = 1.0, b = 1.0;
  for(int i=1; i<=1075 ; ++i)
    {
      a /= 2;
      b *= 2;
      std::cout << i << " " << a << " " << b << "\n"; 
    }
  return 0;
}
