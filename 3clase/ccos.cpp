#include <iostream>
#include <cmath>
using namespace std;

using pk= double(double); //puntero para fdev
using dev= double(double, double, pk); //puntero para richardson
double cdev(double h, double x, pk f1);
double crdev(double h, double x, pk f1, dev f2);
double f(double x);

int main()
{
  cout.precision(10);
  cout << cdev(1e-2, M_PI/2, f) << endl;
  cout << crdev(1e-2, M_PI/2, f, cdev) << endl;
  return 0;
}

double f(double x)
{
  return cos(x);
}

double cdev(double h, double x, pk f1)
{
  return (f1(x+h/2)-f1(x-h/2))/h;
}

double crdev(double h, double x, pk f1, dev f2)
{
  return (4*f2(h/2,x,f1)-f2(h,x,f1))/3;
}
