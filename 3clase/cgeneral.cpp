//compilese con g++ -std=c++11
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
  cout << cdev(h, x, f) << endl;
  cout << crdev(h, x, f, cdev) << endl;
  return 0;
}

double f(double x)
{
  return "funcion(x)";
}

double cdev(double h, double x, pk f1)
{
  return (f1(x+h/2)-f1(x-h/2))/h;
}

double crdev(double h, double x, pk f1, dev f2)
{
  return (4*f2(h/2,x,f1)-f2(h,x,f1))/3;
}
