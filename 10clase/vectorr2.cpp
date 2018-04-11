#include <iostream>
#include <vector>
#include <cmath>

using pk=double(const std::vector<double>&);
double mean(const std::vector<double> &v);
double desv(const std::vector<double> &v, pk f);

int main()
{
  const int N=10;
  std::vector<double> v(N);
  for(int i=0; i<N; i++)
    {
      v[i]=1.0;
    }
  std::cout << mean(v) << " " << desv(v, mean) << "\n";
  return 0;
}

double mean(const std::vector<double> &v)
{
  int N = v.size();
  double mean=0.0;
  for(int i=0; i<N; i++)
    {
      mean += (v[i]);
    }
  return mean/N;
}
double desv(const std::vector<double> &v, pk f)
{
  int N = v.size();
  double desv=0.0;
  double sum=0.0;
  if(N!=1)
    {
      for(int i=0; i<N; i++)
	{
	  sum += (v[i]-mean(v))*(v[i]-mean(v));
	}
      desv = std::sqrt(sum/(N-1)); 
    }
  return desv;
}
