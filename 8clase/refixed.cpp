#include <iostream>
#include <cmath>

using pk=double(double);
long double fix(double ini, double tol, int max, pk f);
double g(double x);

int main()
{
  std::cout << fix(0.1,1e-10,10,g) << std::endl;
  return 0;
}

double g(double x)
{
  return std::exp(-x);
}

long double fix(double ini, double tol, int max, pk f)
{
  ini=f(ini);
  if(std::fabs(f(ini)-ini)<tol || max==0){
    return ini;
  }
  else{
    return fix(ini,tol,max-1,f);
  }
}
