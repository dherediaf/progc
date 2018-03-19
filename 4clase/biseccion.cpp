#include <iostream>
#include <cmath>
using namespace std;

long double bis(double a, double b, long double tol);
long double f(double x);

int main()
{
  cout.precision(10);
  cout << bis(0,-1, 1e-4) << endl;
  return 0;
}

long double f(long double x)
{
  return exp(x)+x;
}

long double bis(double a, double b, long double tol)
{
  long double x1=a; //no importa el orden de a y b
  long double x2=b;
  long double res=0;
  do{
    
      res=(x1+x2)/2;
      if(f(res)*f(x1)>0)  x1=res; //criterios para elegir el siguiente intervalo
      if(f(res)*f(x2)>0)  x2=res; //para mantener a cero siempre en el intervalo
      
  } while(abs(f(res))>=tol);

  return res;
}
