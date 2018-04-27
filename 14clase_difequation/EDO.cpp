#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>

const double w = 2.2315; // omega en radianes

double f(double t, const std::vector<double> &y, int n);
void euler(double a, double b, double n, std::vector<double> &y);

int main()
{
  const double N = 2;
  const double ta = 0;
  const double tb = 23.4;
  const double h = 0.001;
  std::vector<double> Y = {2.3, 0}; //x0, v0
  euler(ta,tb,h,Y);  
  return 0;
}

double f(double t, const std::vector<double> &y, int id)
{
  if(0 == id){
    return y[1];
  }
  else if(1==id){
    return -w*w*y[0];
  }

  else{
    std::cerr << "Error " << id << std::endl;
    exit(1);
  }

}

void euler(double ta, double tb, double h, std::vector<double> &y)
{
  std::vector<double> yaux(y.size());
  const int N = (tb-ta)/h;
  for(int i=0; i<N; ++i)
    {
      double t = ta + h*i;
      std::copy(y.begin(), y.end(), yaux.begin());
      for(int id=0; id < y.size(); ++id)
	{
	  y[id] = y[id] + h*f(t, yaux, id);
	}
      std::cout << t << "\t" << y[0] << "\t" << y[1] << std::endl;
    }
}
