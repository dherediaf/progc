#include <iostream>
using namespace std;

int main()
{
  int a;
  int b=2;
  cout << "Escriba un numero para verificar si es primo\n";
  cin >> a;

  if(a<=1)
    {
      cout << a << " no es primo\n";
    }
  else
    {
      
  while(a%b != 0)
    {
      b=++b;
    }
  
  ((b==a)? cout << "es primo\n" : cout << "no es primo\n");
  
    }
  
 /*  for(int b=1; b<=a; b=++b)
    {
      if(a%b==0)
	{
	  c=++c;
	}
    }
  
    ((c==2)? cout << a << " es primo\n" : cout << a << " no es primo\n"); */
     
  return 0;
}
