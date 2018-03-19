#include <iostream>
#include <string>
using namespace std;

void diam(int alt);
string car(int var);
string esp(int var);

int main()
{
  diam(20);
  return 0;
}

// agrega por cada linea un numero impar de * para hacer la piramide
string car(int var)
{
  string res="*";
  for(int i=1; i<var; i++)
    {
      res += "**";
    }
  return res;
}

//agrega por cada linea el numero de esp necesarios para centrar el *
string esp(int var)
{
  string res="";
  for(int i=1; i<=var; ++i)
  {
    res += " ";
  }
  return res;
}

//imprime la piramide
void diam(int alt)
{
  for(int i=1; i<=alt; i++) //pate de arriba del diamante
    {
      cout << esp(alt-i) << car(i) << endl;
    }
  for(int i=alt-1; i>=1; i--) // parte de abajo del diamante
    {
      cout << esp(alt-i) << car(i) << endl;
    }
}
