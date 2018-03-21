//compilese con g++ -std=c++11
#include <iostream>
#include <cmath>
using namespace std;

using pk= double(double); //puntero para fdev
using dev= double(double, double, pk); //puntero para richardson
double fdev(double h, double x, pk f1);
double frdev(double h, double x, pk f1, dev f2);
double f(double x);

int main()
{
  cout.precision(10);
  cout << fdev(x, h, f) << endl;
  cout << frdev(h, x, f, fdev) << endl;
  return 0;
}

double f(double x)
{
  return "funcion(x)";
}

double fdev(double h, double x, pk f1)
{
  return (f1(x+h)-f1(x))/h;
}

double frdev(double h, double x, pk f1, dev f2)
{
  return (4*f2(h/2,x,f1)-f2(h,x,f1))/3;
}
