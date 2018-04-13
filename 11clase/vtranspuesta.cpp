#include <iostream>
const int N=3;
const int M=5;

int main()
{
  int A[N*M] = {0.0}; //llenar de ceros
  int AT[M*N];

  //llenar matriz
  for(int f=0;f<N; ++f)
    {
      for(int c=0;c<M; ++c)
	{
	  A[f*M+c]=f*M+c; //numerar matriz
	}
    }

  //hallar transpuesta
    for(int f=0;f<N; ++f)
    {
      for(int c=0;c<M; ++c)
	{
	  AT[c*N+f]=A[f*M+c];
	}
    }

    //print M
    for(int f=0;f<N; ++f)
    {
      for(int c=0;c<M; ++c)
	{
	  std::cout << A[f*M+c] << " ";
	}
      std::cout << "\n";
    }
    
    std::cout << "\n";

    //print MT
    for(int f=0;f<M; ++f)
    {
      for(int c=0;c<N; ++c)
	{
	  std::cout << AT[f*N+c] << " ";
	}
      std::cout << "\n";
    }

  return 0;
}
