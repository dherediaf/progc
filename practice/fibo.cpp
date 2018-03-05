#include <iostream>
using namespace std;

int main()
{
 unsigned long long int a=0;
 unsigned long long int b=1;
 unsigned long long int c=0;
 unsigned long long int contador=0;

  while(contador<=93)
    {
      cout << a << endl;
      c=a;
      a=a+b;
      b=c;
      contador=++contador;
    }



  return 0;
}
