#include <iostream>
#include <cmath>
using namespace std;

using pk= double(double);
double simp(double a, double b, int n, pk f1);
double rsimp(double a, double b, int n);
double f(double x);

int main()
{
  cout << simp(0,1,20,f) << endl;
  cout << rsimp(0,1,20) << endl;
  return 0;
}

double f(double x)
{
  return exp(x);
}

double simp(double a, double b, int n, pk f1)
{
  double h=(b-a)/n;
  double res=f1(a)+f1(b);
  double sum=0;
  for(int i=1; i<=n/2-1; ++i)
    {
      sum += f1(a+2*i*h);
    }
  res += 2*sum;
  sum=0;
  for(int ii=1; ii<=n/2; ++ii)
    {
      sum += f1(a+(2*ii-1)*h);
    }
  res += 4*sum;
  return (res*h)/3;
}

double rsimp(double a, double b, int n)
{
  return (4*simp(a,b,2*n,f)-simp(a,b,n,f))/3; //con alfa=2
}
