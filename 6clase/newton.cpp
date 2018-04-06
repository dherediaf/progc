#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using fun=double(double);
using dfun=double(double);
using pk=double(double,double,int,fun,dfun);
double newton(double ini, double tol, int max, fun f1, dfun df1);
double f(double x);
double df(double x);
void error(fun f1, dfun f2, pk f3, std::string name);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << newton(2,1e-11,20,f,df) << "\n";
  error(f,df,newton,"newtonerror.txt");
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
  for (int i = 1; i <= max && std::fabs(f1(ini))>=tol ; ++i)
  {
    ini = ini-(f1(ini)/df1(ini)); 
  }
  return ini;
}

void error(fun f1, dfun f2, pk f3, std::string name) //funcion para graficar error
{
  long double realval=1; //valor exacto
  std::ofstream fout(name);
  fout.precision(16); fout.setf(std::ios::scientific);
  for (int i = 3; i <= 20 ; ++i)
    {
      fout << i << "\t" << fabs(1-(f3(100, 1e-20, i, f1, f2)/realval)) << "\n";     
    }
fout.close();
}
