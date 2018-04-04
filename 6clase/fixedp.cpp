#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
//solo sirva para ciertos intervalos

using pk=double(double);
using pk0=double(double,int,double,pk);
double fixed(double ini, int max, double tol, pk g);
double g(double x);
void error(pk0 f1, pk f2, std::string name);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << fixed(1,10,1e-10,g) << std::endl;
  error(fixed,g,"fixederror.txt");
  return 0;
}

double g(double x)
{
  return 1/x; // esta funcion no sirve para regula falsi
}

double fixed(double ini, int max, double tol, pk g)
{
  for (int i = 1; i <= max, std::fabs(g(ini)-ini) >= tol; ++i)
    {
      ini = g(ini);
    }
  return ini;
}

void error(pk0 f1, pk f2, std::string name) //funcion para graficar error
{
  long double realval=1; //valor exacto
  std::ofstream fout(name);
  fout.precision(16); fout.setf(std::ios::scientific);
  for (int i = 3; i <= 20 ; ++i)
    {
      fout << i << "\t" << fabs(1-(f1(1, i, 1e-5, f2)/realval)) << "\n";     
    }
fout.close();
}
















