// &a es la direccion de a en la memoria
#include <iostream>
using namespace std;

int addition(int a, int b) /* ir por referencia con &, asi a de addition
 y a de main son iguales, con const int & a a pasa por referencia pero
 no se puede modificar */
{
  int r;
  r=a+b;
  cout << &a << endl; // esta a esta definida para la funccion addition
  return r;
}
int main()
{
  int c,a,b;
  a=5;
  b=3;
  c= addition(a, b);
  cout << &a << endl; // esta a esta definida para la funcion main
  return 0;
}
