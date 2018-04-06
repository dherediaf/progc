#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using pk=double(double);
long double bis(double a, double b, double tol, pk f, int lim);
double f(double x);

int main()
{
  std::cout.precision(10);
  std::cout << bis(0,3,1e-10,f,100) << std::endl;
  return 0;
}

double f(double x)
{
  return std::pow(x,10)-1;
}

long double bis(double a, double b, double tol, pk f, int lim)
{  
  double res=(a+b)*0.5;
  
      if(f(res)*f(a)>0)
	a=res;
      else
	b=res;
      
      if(std::fabs(f(res))<tol || lim==0)
	return res;
      else
	return bis(a,b,tol,f,lim-1);
}
