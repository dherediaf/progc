#include <iostream>
#include <cmath>

using fun=double(double);
using dfun=double(double);
double newton(double ini, double tol, int max, fun f1, dfun df1);
double f(double x);
double df(double x);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << newton(0,1e-11,20,f,df) << "\n";
  return 0;
}

double f(double x)
{
  return /*(std::exp(-x))-x*/ std::pow(x,10)-1;
}

double df(double x)
{
  return /*-1-(std::exp(-x))*/ 10*std::pow(x,9);
}

double newton(double ini, double tol, int max, fun f1, dfun df1)
{
  for (int i = 1; i <= max, std::fabs(f1(ini))>=tol ; ++i)
  {
    ini = ini-(f1(ini)/df1(ini)); 
  }
  return ini;
}
