#include <iostream>
using namespace std;

int main()
{
 unsigned long long int b=2;
  
  for(unsigned long long int i=2; i<=1000000; i=++i)
    {
      while(i%b != 0)
	{
	  b=++b;
	}
      if(b==i)
	{
	  cout << i << endl;
	}
      b=2;
    }

  return 0;
}
