#include <iostream>
using namespace std;

int main()
{
  int a=1.0;
  int b=1.0;
  int c;
  int cont=0;

  while(a<=1000000)
    {
      if(a%2==0){ cont=cont+a;}
      c=a;
      a=a+b;
      b=c;
    }

  cout << cont << endl;

  return 0;
}
