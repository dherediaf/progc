#include <iostream>
#include <string>

/* (?:) este condicional se usa para lo mismo que el if-else pero mas corto,
su estructura es :

   ((condicion)? opcion if : opcion else )  

 */

using namespace std;

int main()
{
  string a="";

  int b=0,c=1;

  cout << "Escriba el usuario del sia del simpatico Diego Heredia\n";

  cin >> a;

  /*  ((a=="dherediaf") ? c *= 2 : b= b+50 );

      cout << b << " " <<  c << endl;  */

  cout << ( (a=="dherediaf") ? "Correcto\n" : "Incorrecto, no conoces a diego?\n");
  
  return 0;
}
