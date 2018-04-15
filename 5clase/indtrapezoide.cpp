#include <iostream>
#include <cmath>

using pk= double(double);
double trap( double a, double tol, double stp, int n, pk f1);
double rtrap(double a, double tol, double stp, int n);
double f(double x);

int main()
{
  std::cout << trap(0, 1e-20, -1.0, 50, f) << std::endl;
  std::cout << rtrap(0, 1e-20, -1.0, 50) << std::endl;
  return 0;
}

double f(double x)
{
  return std::exp(x);
}

//INTEGRALES A +-INFINITO

//para funciones decrecientes cuyo limite tienda a cero en +-inf
double trap(double a, double tol, double stp, int n, pk f1)
{
  //establecer limite a infinito
  double b=a;
  for(int i=1; i<1e4 && std::fabs(f1(b))>tol; ++i)
    {
      b += stp;
    }
  std::cout << b << "\n";

  //establecer h a +int o -inf
  double h=0.0, mem;
  if(b>a){
    h=(b-a)/n;
  }else
    {
      h=(a-b)/n;
      mem=a;
      a=b;
      b=mem;
    }
  
  //calcular integral  
  double res= 0.5*(f1(a)+f1(b));
  for(int i=1; i<(n-1); ++i)
    {
      double x=a+(i*h);
      res += f1(x);
    }
  return res*h;
}

double rtrap(double a, double tol, double stp, int n)
{
  return (4*trap(a,tol,stp,2*n,f)-trap(a,tol,stp,n,f))/3; //con alfa=2
}
