#include <iostream>

int main()
{
  int array[5]={2,3,4,5}; //llena lo ultimo de ceros
  int *ptr=nullptr;
  ptr=array;
  std::cout << array[4] <<" "<< ptr <<"\n";
  return 0;
}
