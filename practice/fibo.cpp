#include <iostream>
using namespace std;

int main()
{
 double a=0.0;
 double b=1.0;
 double c=0.0;
  int contador=0;

  while(contador<=100)
    {
      cout.precision(30);
      cout << a << endl;
      c=a;
      a=a+b;
      b=c;
      contador=++contador;
    }



  return 0;
}
