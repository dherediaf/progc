#include <iostream>
#include <vector>
const int N=7;

void defaultfillm(std::vector<double> &V, int F, int C, bool r); //llena de ceros si r=0 y de numeros1,2,3.. si r=1 
void printm(std::vector<double> &V, int F, int C); //imprime las matrices
double detm(std::vector<double> &V, int K, int Y);

int main()
{
  std::vector<double> A(N*N);
  std::vector<double> M((N-1)*(N-1));
  defaultfillm(A,N,N,1);
  printm(A,N,N);
  
  std::cout << detm(A,N,N) << "\n";  
  return 0;
}

double detm(std::vector<double> &V, int K, int Y)
{
  if(Y==1 && K==1){
    return V[0]; 
  } 
  
  double M=0;
  int a=0;
  std::vector<double> Tm((Y-1)*(Y-1));
  
    for (int r=0; r<K; ++r)
      {  
  //para hallar las menores
      for(int i=0; i<Y-1; ++i)
	{
	  a=r;
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
	}
      //printm(Tm,Y-1,Y-1);
      M += ((r%2==0)? V[r]*detm(Tm,K-1,Y-1) : (-1)*V[r]*detm(Tm,K-1,Y-1));      
      }

    return  M;
}

void defaultfillm(std::vector<double> &V, int F, int C, bool r)
{
  for (int i=0; i < F; ++i)
    {
      for (int j=0; j < C; ++j)
	{
	  //formas de llenar la matriz: se ponen las condiciones que se quieran
	  if(r)
	    {
	      if(i==j)
	      V[i*C+j]=i*C+j+2;
	      else
		V[i*C+j]=4;
	    }
	  else
	    {
	      V[i*C+j]=0;
	    }
	  //fin de formas de llenar matriz
	}   
    }
}

void printm(std::vector<double> &V, int F, int C)
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
