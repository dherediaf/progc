#include <iostream>

long prime(int number);

int main()
{
  for (int i = 2; i <= 100; ++i)
    {
      if(prime(i)==1){
	std::cout << i << "\n";
      }
    }
  return 0;
}

long prime(int number)
{
  int b=2;
  if(number<2)
    {
      return 0;
    }
  else
    {     
  while(number%b != 0)
    {
      ++b;
    }
  
  if(b==number)
    return 1;
  else
    return 0;
  
    }
}
