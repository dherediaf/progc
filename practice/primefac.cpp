#include <iostream>
using namespace std;

unsigned long long int primos(int lim)
{
  unsigned long long int b=2;
  int cont=0;
  unsigned long long int mem;
  
  for(unsigned long long int i=2; i<=1000; i=++i)
    {
      while(i%b != 0) //si i no divide a b entonces b aumenta
	{
	  b=++b;
	}
      if(b==i) //si i divide a b e i es igual a b, el numero es primo
	{
	  cont++; // el contador aumenta
	  mem=i;  // se almacena el primo
	}
      if(cont==lim)
	break; // limite de primos
      b=2; // se reinicia b para volver a ejecutar
    }
 
  return mem;
}

int main()
{
 unsigned long long int num=6043;
 unsigned long long int res;

  for(int lim=1; lim<=num; lim++)
    {
      while(num%(primos(lim))==0) // se divide por el primo para simplificar 
	{
	  num=num/primos(lim);
	  res=primos(lim);
	}
      if(primos(lim+1)>num)
	break;

    }
  cout << res << endl;
  

  return 0;
  }
