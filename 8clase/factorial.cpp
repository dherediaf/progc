#include <iostream>

long fact(int lim);

int main()
{
  std::cout << fact(9) << "\n";
  return 0;
}

long fact(int n)
{
  if(n==0) return 1;
  return n*fact(n-1);
}
