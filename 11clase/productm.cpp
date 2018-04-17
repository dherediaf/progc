#include <iostream>
#include <vector>
const int N=2;
const int M=2;
const int J=2;

void defaultfillm(std::vector<int> &V, int F, int C, bool r); //llena de ceros si r=0 y de numeros1,2,3.. si r=1 
void printm(std::vector<int> &V, int F, int C); //imprime las matrices
std::vector<int>  multm(std::vector<int> &V, std::vector<int> &W, int NV, int MVW, int MW); //multiplica la matriz

int main()
{
  std::vector<int> A(N*M);
  std::vector<int> B(M*J);
  std::vector<int> R(N*J);
  
  defaultfillm(A,N,M,1);
  defaultfillm(B,M,J,1);

  R=multm(A,B,N,M,J);
  printm(R,N,J);
  
  return 0;
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
	      V[i*C+j]=1;//i*C+j;
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

std::vector<int>  multm(std::vector<int> &V, std::vector<int> &W, int NV, int MVW, int MW)
{
  std::vector<int> T(NV*MW);
  defaultfillm(T,NV,MW,0);
  
  //calcular matriz
  for (int f = 0; f < NV; ++f)
    {
      for (int c = 0; c < MW; ++c)
	{
	  for (int i = 0; i < MVW; ++i)
	    {
	      T[f*MW+c] += V[f*MVW+i]*W[i*MW+c]; //filas por columnas
	    }
	}
    }
  return T;
}
