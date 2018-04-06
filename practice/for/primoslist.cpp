#include <iostream>
using namespace std;

int main()
{
 unsigned long long int b=2;
 int cont=0;
 int mem;
  
  for(long i=2; i<=1000; i=++i)
    {
      while(i%b != 0) //si i no divide a b entonces b aumenta
	{
	  b=++b;
	}
      if(b==i) //si i divide a b e i es igual a b, el numero es primo
	{
	  cout << i << endl;
	}
      b=2; // se reinicia b para volver a ejecutar
    }

  return 0;
}
