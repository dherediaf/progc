#include <iostream>
#include <string>
#include <cstdio>

void arbol(int altura, int crec, std::string car);
std::string creci(int crec, std::string car);
std::string space(int num, int crec); //pone los espacios

int main()
{
  std::string a="#";
  arbol(6,0,a);
  return 0;
}

void arbol(int altura, int crec, std::string car)
{
  std::string arb=car;
  for(int i=altura; i>0; --i)
    {
      std::cout << space(i-2,crec) << arb << "\n"; 
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

std::string space(int num, int crec)
{
  std::string res="";
  for(int i=0;i<=num; ++i)
    {
      res += creci(crec, " ");
    }
  return res;
}
