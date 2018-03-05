#include <iostream>
using namespace std;

/* cout se puede interpretar como salir por eso << pues el texto sale(out) a la pantalla. Lo mismo sucede con cin pero >> significa que la variable entra(in) */

int main() // va sin ;

{
  int edad; // declara una variable entera
  
  cout << "introduzca su edad:" << endl;
  
  cin >> edad; // recibe la variable, en este caso "edad"
  
  cout << "usted tiene " << edad << " años\n";

  return 0;

}
