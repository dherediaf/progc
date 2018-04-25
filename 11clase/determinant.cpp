#include <iostream>
#include <vector>
const int N=2;

void defaultfillm(std::vector<int> &V, int F, int C, bool r); //llena de ceros si r=0 y de numeros1,2,3.. si r=1 
void printm(std::vector<int> &V, int F, int C); //imprime las matrices
int detm(std::vector<int> &V, int K, int Y);

int main()
{
  std::vector<int> A(N*N);
  std::vector<int> M((N-1)*(N-1));
  defaultfillm(A,N,N,1);
  
  std:: cout << detm(A,N,N)<<"\n";  
  return 0;
}

int detm(std::vector<int> &V, int K, int Y)
{
  if(Y==1 && K==1){
    return V[0];
  }
  
  int M=0;
  int a=K;
  std::vector<int> Tm((Y-1)*(Y-1));
  
    for (int r=0; r<K; ++r)
      {  
  //para hallar las menores
      for(int i=0; i<Y-1; ++i)
	{
	  for (int j=0; j<Y-1; ++j)
	    {
	      if(j==a){
		Tm[i*(Y-1)+j]=V[(i+1)*Y+j+1];
		++a;
	      }
	      else{
		Tm[i*(Y-1)+j]=V[(i+1)*Y+j];
	      }
	    }
	  a=K;
	}
      M += ((r%2==0)? V[r]*detm(Tm,K-1,Y-1) : (-1)*V[r]*detm(Tm,K-1,Y-1));      
      }

    return  M;
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
	      V[i*C+j]=i*C+j+1;
	      
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
