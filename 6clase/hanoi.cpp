#include <iostream>

void hanoi(int N, char A, char B, char C);

int main()
{
  hanoi(5,'a','c','b');
  
  return 0;
}

void hanoi(int N, char A, char C, char B)
{
  if(N==1)
    {
      std::cout << "mueva 1 a " << C << "\n";
    }
  else
    {
      hanoi(N-1,A,B,C);
      std::cout << "mueva " << N << " a " << C << "\n";
      hanoi(N-1,B,C,A);
    }
}
