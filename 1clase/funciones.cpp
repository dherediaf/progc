#include <iostream>

void hola(void) // funcion hola que no retorna nada void
{
  std::cout << "Hello insignificant human\n";
  // se puede usar return;
}


int main()
{

  hola(); // invocar la funcion, como es void no recibe nada

  return 0;
}
