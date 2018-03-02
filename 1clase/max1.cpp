#include <iostream>
using namespace std;

int max(int a, int b)
{
  int m=a;
  
  if(m>=b)
    {
      return m; //sirve para asignarle ese valor a la funcion
    }
  else
    {
      m=b;

      return m;
    }

}
int main()
{
  int a=15, b=3;

  cout << max(a,b) << endl;

  return 0;
}
