#include <iostream>

long fibo(int lim);

int main()
{
  std::cout << fibo(10) << "\n";
  return 0;
}

long fibo(int n)
{
  if(n==1) return 0;
  if(n==2) return 1;
  return fibo(n-1)+fibo(n-2);
}
