#include <iostream>

int main()
{
  int a=10;
  int *ptr=&a; //nullptr
  std::cout << &a << "\n"; //direccion de a
  std::cout << ptr << "\n"; //direccion que almacena ptr, es decir &a
  std::cout << &ptr << "\n"; //direccion de ptr
  std::cout << *ptr << "\n"; //acceder al valor al que paunta el puntero: 10
  return 0;
}
