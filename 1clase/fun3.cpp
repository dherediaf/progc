#include <iostream>

double prom(int a, double b, int c)
{
  double r=0;
  r=(a+b+c)/3;
  std::cout << r << std::endl;
  return r ;  
}

int main()
{
  int d=1;
  double e=2.0;
  int f=8;

  prom(d,e,f);

  return 0;
}
