#include <iostream>
#include <cmath>

double cuadraticEQ(double a, double b, double c);

int main()
{
  cuadraticEQ(-0.5,2.5,4.5);
  return 0;
}

double cuadraticEQ(double a, double b, double c)
{
  double x1, x2;
  x1= (-b + sqrt(b*b -4*a*c))/(2*a);
  x2= (-b - sqrt(b*b -4*a*c))/(2*a);
  std::cout << x1 << " " << x2 << "\n";
}
