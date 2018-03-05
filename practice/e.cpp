#include <iostream>
using namespace std;

long double exp(long double ex, unsigned int n)
{
  long double result=ex;
  for(int i=1; i<n; i=++i)
    {
      result = result*ex;      
    }
  return result;
}

int main()
{
  cout.precision(100);
  long double ex=0.0;
  long double n=2000000;
  ex=1+(1.0/n);

  cout << exp(ex,n) << endl;

return 0;
}
