#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double fdev(double x, double h);

int main()
{
  double x=M_PI/4;
  
  for(double i=2 i>=0.1; i-=0.1)
    {

  /* printf("%.16e\n", fdev(x,h));
  
   cout << "x= \n";
  cin >> x;
  cout << "h= \n";
  cin >> n; */

      cout << i << "\t" << (1-(fdev(x,i)/cos(x))) << endl;

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
