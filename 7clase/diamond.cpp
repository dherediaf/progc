#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void diam(int alt, std::string name);
string car(int var);
string esp(int var);

int main()
{
  diam(40, "joya.txt");
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
void diam(int alt, std::string name)
{
  std::ofstream fout(name); // se le da nombre a la funcion que imprime
  for(int i=1; i<=alt; i++) //pate de arriba del diamante
    {
      fout << esp(alt-i) << car(i) << endl;
    }
  for(int i=alt-1; i>=1; i--) // parte de abajo del diamante
    {
      fout << esp(alt-i) << car(i) << endl;
    }
  fout.close();
}
