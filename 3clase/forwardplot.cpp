#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);

int main()
{
  for(double i=-M_PI; i<=M_PI; i=i+0.01)
    {

  /* printf("%.16e\n", fdev(x,h));
  
   cout << "x= \n";
  cin >> x;
  cout << "h= \n";
  cin >> n; */

      cout << i << "\t" << fdev(i,h) << endl;

    }

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
