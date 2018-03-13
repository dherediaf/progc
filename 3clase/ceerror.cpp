#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);
double frichardson(double x, double h);

int main()
{
  double x=M_PI/4;
  
  for(double i=2; i>=0.1; i-=0.1)
    {
      cout << i << "\t" << (1-(frichardson(x,i)/cos(x))) << endl;
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
