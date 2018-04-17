#include <iostream>
#include <vector>
const int N=3;

void defaultfillm(std::vector<int> &V, int F, int C, bool r); //llena de ceros si r=0 y de numeros1,2,3.. si r=1 
void printm(std::vector<int> &V, int F, int C); //imprime las matrices
std::vector<int> detm(std::vector<int> &V, int F, int C, int Y);

int main()
{
  std::vector<int> A(N*N);
  std::vector<int> M((N-1)*(N-1));
  defaultfillm(A,N,N,1);

  for(int i=0; i<N; ++i)
    {
      for (int j=0; j<N; ++i)
	{
	  M=detm(A,i,j,N);
	  printm(M,N-1,N-1);
	  std::cout << "\n";
	}
    }
  
  return 0;
}

std::vector<int> detm(std::vector<int> &V, int F, int C, int Y)
{
  std::vector<int> Tm((Y-1)*(Y-1));
    if((F*N+C)%2==0)
    {
      for(int i=0; i<Y-1; ++i)
	{
	  for (int j=0; j<Y-1; ++i)
	    {
	      Tm[i*(Y-1)+j]=V[(i+1)*Y+j+1];
	    }
	}
    }
  else
    {
      for(int i=0; i<N-1; ++i)
	{
	  for (int j=0; j<N-1; ++i)
	    {
	      Tm[i*(N-1)+j]=(-1)*V[(i+1)*N+j+1];
	    }
	}
    }
    return Tm;
}

void defaultfillm(std::vector<int> &V, int F, int C, bool r)
{
  for (int i=0; i < F; ++i)
    {
      for (int j=0; j < C; ++j)
	{
	  //formas de llenar la matriz: se ponen las condiciones que se quieran
	  if(r)
	    {
	      V[i*C+j]=i*C+j;
	    }
	  else
	    {
	      V[i*C+j]=0;
	    }
	  //fin de formas de llenar matriz
	}   
    }
}

void printm(std::vector<int> &V, int F, int C)
{
  for (int i=0; i < F; ++i)
    {
      for (int j=0; j < C; ++j)
	{
	  std::cout << V[i*C+j] << " ";
	}
      std::cout << "\n";
    }
}
