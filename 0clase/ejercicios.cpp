#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Hola\a" << "Mundo" << endl; // beep
  cout << "Hola\b" << "Mundo" << endl; // borra la a de Hola
  cout << "Hola\n" << "Mundo" << endl; // agrega nueva linea
  cout << "Hola\r" << "Mundo" << endl; // borra Hola
  cout << "Hola\t" << "Mundo" << endl; // tab
  cout << "Hola\v" << "Mundo" << endl; // nueva linea + tab
  cout << "Hola\'" << "Mundo" << endl; // comilla simple
  cout << "Hola\"" << "Mundo" << endl; // comilla doble
  cout << "Hola\\" << "Mundo" << endl; // slash (\)
 
  return 0;

}
