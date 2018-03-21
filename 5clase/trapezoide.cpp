#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

using pk= double(double);
double trap(const double a, const double b, const int n, pk f1);
double rtrap(double a, double b, int n);
double f(double x);

int main()
{
  cout << trap(0, 9, 10, f) << endl;
  cout << rtrap(0, 9, 10) << endl;
  return 0;
}

double f(double x)
{
  return exp(-x)*sqrt(1-sin(x));
}

double trap(const double a, const double b, const int n, pk f1)
{
  double h=(b-a)/n;
  //   double res=0;
  double res= 0.5*(f1(a)+f1(b));
  for(int i=1; i<n-1; ++i)
    {
      double x=a+(i*h);
      res += f1(x);
    }
  return res*h;
  
   /* for(int i=1; i<=n-1; ++i)
    {
      res += f(a+i*h)+f(a+(i+1)*h);
    }
    return res*0.5*h; */
}

double rtrap(double a, double b, int n)
{
  return (4*trap(a,b,2*n,f)-trap(a,b,n,f))/3; //con alfa=2
}
