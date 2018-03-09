#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);

int main()
{
  double x=M_PI/3;
  double h=0.01;

  printf("%.16e\n", fdev(x,h));
  
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
  return (f(x+h)-f(x))/h;
}
