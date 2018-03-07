#include <iostream>
using namespace std;

int main()
{
  int a=3;
  int b=5;
  int cont=0;

  for(int i=1;i<1000; i++)
    {
      if(i%a==0 || i%b==0)
	{
	  cont=cont+i;
	}
    }
  cout << cont << endl;
  


  
  return 0;
}
