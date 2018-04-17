#include <iostream>

void array(int vr[])
{
for (int i = 0; i < 5 ; ++i)
  {
    std::cout << vr[i] << "\n";
  }
}

int main()
{
  int v[5]={1,2,2,4,5};

  array(v);

  return 0;
  
}
