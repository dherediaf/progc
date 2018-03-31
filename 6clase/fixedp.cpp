#include <iostream>
#include <cmath>
//solo sirva para ciertos intervalos
using pk=double(double);
double fixed(double ini, int max, double tol, pk g);
double g(double x);

int main()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  std::cout << fixed(-3,10,1e-10,g) << std::endl;
  return 0;
}

double g(double x)
{
  return std::exp(-x);
}

double fixed(double ini, int max, double tol, pk g)
{
  for (int i = 1; i <= max, std::fabs(g(ini)-ini) >= tol; ++i)
    {
      ini = g(ini);
    }
  return ini;
}
