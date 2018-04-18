#include <iostream>

template <class unk>
unk max(unk a, unk b, unk c)
{
  if(a>=b && a>=c)
    return a;
  else
    return (b>=c? b:c); 
}

int main()
{
  std::cout << max(3,1,2) << std::endl;
  std::cout << max(-3.0,1.0,2.0) << std::endl;
  std::cout << max(-3.0f,1.0f,-2.0f) << std::endl;
  return 0;
}
