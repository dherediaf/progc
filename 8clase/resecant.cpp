/* el metodo de la secante es como usar el de newton-rahpson solo
 que se hace un calculo aproximado de la derivada para acercarce al
 cero de la funcion, ademas se necesitan dos punto para empezar */
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using fun=double(double);
double secant(double x1, double x2, double tol, int max, fun f1);
double f(double x);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << secant(-10,0,1e-10,100,f) << "\n";
  return 0;
}

double f(double x)
{
  return std::exp(-x)-x;
}

double secant(double x1, double x2, double tol, int max, fun f1)
{
  double x=0;
    x = x1 - ((f1(x1)*(x2-x1))/(f1(x2)-f1(x1)));
    x2 = x1;
    x1 = x;

    if(std::fabs(f1(x))<tol || max==0)
      return x;
    else
      return secant(x1,x2,tol,max-1,f1);
}
