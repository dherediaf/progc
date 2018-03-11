#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);
double frichardson(double x, double h);

int main()
{
  for(double i=-M_PI; i<=M_PI; i += 0.01)
    {
      cout << i << "\t" << frichardson(i,0.01) << endl;

    }

  return 0;
}

double f(double x)
{
  return sin(x);
}

double fdev(double x, double h)
{
  return (f(x+h/2)-f(x-h/2))/h;
}

double frichardson(double x, double h)
{
  return (4*fdev(x,(h/2))-fdev(x,h))/3; // se necesita usar 3.0 en vez de 3?
}
