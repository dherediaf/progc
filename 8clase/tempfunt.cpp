#include <iostream>

template <class unk>
unk sum(unk r, unk t)
{
  return (r>t? r:t); //retorna el mayor de los numeros
}


int main()
{
  int a=1,b=2;
  double c=1.2, d=0.9;

  std::cout << sum(a,b) << " " << sum(c,d) << "\n";
  return 0;
}

