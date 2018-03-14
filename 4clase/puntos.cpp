#include <iostream>
#include <string>

void arbol(int altura, int crec, std::string car);
std::string creci(int crec, std::string car);

int main()
{
  std::string a="#";
  arbol(5,3,a);
  return 0;
}

void arbol(int altura, int crec, std::string car)
{
  std::string arb=car;
  for(int i=altura; i>0; --i)
    {
      std::cout << arb << "\n";
      arb +=(creci(crec,car));
      
    }
}

std::string creci(int crec, std::string car)
{
  std::string res="";
  for(crec; crec>0; crec--)
    {
      res=res+car;
    }

  return res;
}
