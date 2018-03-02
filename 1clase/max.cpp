#include <iostream>

int max(int a, int b)
{
  int m=a;
  ((a>b)? m=a : m=b);
  return m;
}
int main()
{
  std::cout << max(16,33) << std::endl;
  return 0;
}
