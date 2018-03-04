#include <iostream>
using namespace std;

int main()
{
  int m=2;
  
  for(int a=1;a<=2;a=a++)
    {
      if(a%13==0)
	{
	  m--;
	}
      
    }

  cout << m << endl;
  
  return 0;
}
