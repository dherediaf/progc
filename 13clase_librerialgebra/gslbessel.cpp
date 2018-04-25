#include <iostream>
#include <gsl/gsl_sf_bessel.h>

int main(void)
{
  double dx=0.01;
  for(int i=1; i<=4000; ++i)
    {
      double x= 0 + i*dx;
      std::cout << x << " " << gsl_sf_bessel_J0(x) << "\n";
    }
  
  return 0;
}
  
