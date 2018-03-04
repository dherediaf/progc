#include <iostream>
#include <string>

/* char password[5]= ""; Notacion de cadenas de caracteres */

using namespace std;

int main()

{
  string password="hola";  

  cout << "Ingrese la contraseña humano insignificante:\n";

  cin >> password;

  if(password =="3435")
    {
      cout << "Bienvenido a: NADA!!\n";
    }
  else
    {
      cout << "Esa no es la contraseña, primitivo humano\n";
    }
  
  
  return 0;
}
