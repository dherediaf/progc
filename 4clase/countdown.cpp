#include <iostream>

long int sumwhile(long int a, long int start); // no es necesario ponerle el mismo nombre

int main()
{
  std::cout << sumwhile(0,10) << std::endl;   
  return 0;
}

long int sumwhile(long int finish, long int start)
{
  long int result=0;
  if(start<=finish){
    
    while(start<=finish){
    result += start;
    ++start;
    
    }
  }
  else
    {
      while(finish<=start){
	result += finish;
	++finish;
      }
    }

  return result;
}
