#include <iostream>
#include <cmath>

double f(double x);
double biseccion(double x1, double x2, double eps);

int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  const double xmin= 0.5;
  const double xmax= 2.0;
  const double eps= 1e-8;
  std::cout << "\t" << biseccion(xmin,xmax,eps) << std::endl;
  return 0;
}

double f(double x)
{
  return x*x*x - 2*std::sin(x);
}

double biseccion(double x1, double x2, double eps)
{  
  double res=(x1+x2)*0.5;
  std::cout << res << std::endl;

  //calcular intervalo
  if(f(res)*f(x1)>0)
    x1=res;
  else
    x2=res;
  
  //recursividad
  if(std::fabs(f(res))<eps)
    return res;
  else
    return biseccion(x1,x2,eps);
}
