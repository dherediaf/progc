#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);
double frichardson(double x, double h);

int main()
{
  double x=M_PI/3;
  double h=0.1;

  printf("%25.16e\n", fdev(x,h));
  printf("%25.16e\n" , frichardson(x,h));
  
  /* cout << "x= \n";
  cin >> x;
  cout << "h= \n";
  cin >> n;

  cout << fdev(x,h) << "\t" << cos(x) << endl; */

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
  return (4*fdev(x,(h/2))-fdev(x,h))/3; // se necesita usar 3.0 en vez de 3
}
