#include <iostream>

long int sum( long int start, long int finish);

int main()
{
  std::cout << sum(0,100) << std::endl;
  return 0;
}

long int sum(long int start, long int finish)
{
  long int result=0;
  do {
    result += start;
    ++start;
  } while(start<=finish);

  return result;

}
