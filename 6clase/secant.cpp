/* el metodo de la secante es como usar el de newton-rahpson solo
 que se hace un calculo aproximado de la derivada para acercarce al
 cero de la funcion, ademas se necesitan dos punto para empezar */
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using fun=double(double);
using pk=double(double,double,double,int,fun);
double secant(double x1, double x2, double tol, int max, fun f1);
double f(double x);
void error(fun f1, pk f2, std::string name);

int main()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  std::cout << secant(0,10,1e-10,20,f) << "\n";
  error(f,secant,"errorsecant.txt");
  return 0;
}

double f(double x)
{
  return std::pow(x,2)-1;
}

double secant(double x1, double x2, double tol, int max, fun f1)
{
  double x=0;
  for (int i = 1; i <= max && std::fabs(f1(x))>=tol ; ++i)
  {
    x = x1 - ((f1(x1)*(x2-x1))/(f1(x2)-f1(x1)));
    x2 = x1;
    x1 = x;    
  }
  return x;
}

void error(fun f1, pk f2, std::string name) //funcion para graficar error
{
  long double realval=1; //valor exacto
  std::ofstream fout(name);
  fout.precision(30); fout.setf(std::ios::scientific);
  for (int i = 1; i <= 20 ; ++i)
    {
      fout << i << "\t" << fabs(1-(f2(0,10,1e-10,i,f1)/realval)) << "\n";     
    }
fout.close();
}
