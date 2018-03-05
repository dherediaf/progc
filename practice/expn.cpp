#include <iostream>
using namespace std;

double exp(double ex, unsigned int n)
{
  double result=ex;
  for(int i=1; i<n; i=++i)
    {
      result = result*ex;      
    }
  return result;
}
int main()
{
  double ex=0;
  unsigned int n=0;

  cout << "Esbriba el numero que desea elevar a una cierta potencia:\n";
  cin >> ex;
  cout << "Escriba la potencia a la que desea elevar a " << ex << " :\n";
  cin >> n;
  
  cout << "El resultado es: " << exp(ex,n) << endl;

  return 0;

}
