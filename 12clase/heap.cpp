#include <iostream>
unsigned long long int factorial(int N);

int main()
{
  std::cout.precision(100);
  int N=100;
  long double R=factorial(N);
  int S=0;
  while((int)R%10 != (int)R)
    {
      S += (int)R%10;
      R = (int)(R/10);
    }
  
  std::cout << factorial(N) << "\n";
  return 0;
}

unsigned long long int factorial(int N)
{
  if(N==1) return 1.0;
  return N*factorial(N-1);
}
