#include <iostream>
#include <cmath>

using pk = long double(long double);
long double bis(long double a, long double b, long double tol, int lim, pk f);
long double f(long double x);

int main()
{
  // std::cout.setf(std::ios::scientific);
  std::cout.precision(10);
  std::cout << bis(0,-1, 1e-8, 1000, f) << std::endl;
  return 0;
}

long double f(long double x)
{
  return std::exp(x)+x;
}

long double bis(long double a, long double b, long double tol, int lim, pk f)
{
  int step=0;//no importa el orden de a y b
  long double res=0;
  do{
      res= b-(f(b)*(a-b))/(f(a)-f(b));
      if(f(res)*f(a)>0)
	a=res; //criterios para elegir el siguiente intervalo
      else
	b=res; //para mantener a cero siempre en el intervalo
      step++;
      
  } while(fabs(f(res))>=tol && step<=lim);

  return res;
}
