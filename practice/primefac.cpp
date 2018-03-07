#include <iostream>
using namespace std;

int main()
{
 unsigned long long int a=600851475143 ;
  int b;

  for(int i=2; a!=1; i++) /* para que for se siga ejecutando se puede
			     usar una condicion de verdadero o falso */
    {
      while(a%i==0)
	{
	  a=a/i;
	  b=i;
	}

    }

  cout << b << endl;
  
  return 0;
}
