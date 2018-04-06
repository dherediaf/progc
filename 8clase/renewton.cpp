#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using fun=double(double);
using dfun=double(double);
double newton(double ini, double tol, int max, fun f1, dfun df1);
double f(double x);
double df(double x);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << newton(6,1e-11,100,f,df) << "\n";
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
    ini = ini-(f1(ini)/df1(ini));
    if(std::fabs(f1(ini))>tol && max>0)
      {
	return newton(ini,tol,max-1,f1,df1);
      }
    else
      {
	return ini;
      }
}
