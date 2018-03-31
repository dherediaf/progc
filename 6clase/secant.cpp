/* el metodo de la secante es como usar el de newton-rahpson solo
 que se hace un calculo aproximado de la derivada para acercarce al
 cero de la funcion, ademas se necesitan dos punto para empezar */
#include <iostream>
#include <cmath>

using fun=double(double);
double secant(double x1, double x2, double tol, int max, fun f1);
double f(double x);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << secant(0.1,0,1e-10,11,f) << "\n";
  return 0;
}

double f(double x)
{
  return std::pow(x,2)-1;
}

double secant(double x1, double x2, double tol, int max, fun f1)
{
  double x=0;
  for (int i = 1; i <= max, std::fabs(f1(x))>=tol ; ++i)
  {
    x = x1 - ((f1(x1)*(x2-x1))/(f1(x2)-f1(x1)));
    x2 = x1;
    x1 = x;    
  }
  return x;
}
