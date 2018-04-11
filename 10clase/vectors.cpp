#include <iostream>
#include <vector>
#include <cmath>

int main()
{
  //llenar vector
  const int N=10;
  std::vector<double> v(N);
  for(int i=0; i<N; i++)
    {
      v[i]=i+1;
    }

  //promedio
  double mean=0.0;  
  for(int i=0; i<N; i++)
    {
      mean += (v[i]);
    }
  mean /= N;

  //desviacion estandar
  double desv=0.0;
  double sum=0.0;
  if(N!=1)
    {
      for(int i=0; i<N; i++)
	{
	  sum += (v[0]-mean)*(v[0]-mean);
	}
      desv = std::sqrt(sum/(N-1));
    }

  //imprimir
  std::cout << mean << " " << desv << "\n";

 
  return 0;
}
