#include <iostream>
#include <string>

void hello(std::string a) // es correcto usar void?
{
  std::cout << "Hello " << a << std::endl;
  return;
}

int main()
{
  std::string b="Diego"; //no necesariamente es igual a (a)

  hello(b); // la funcion opera sobre b
  return 0;
}
