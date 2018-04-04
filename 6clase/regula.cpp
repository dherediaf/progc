#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using pk = long double(long double);
using pk0 = long double(long double, long double, long double, int , pk);
long double reg(long double a, long double b, long double tol, int lim, pk f);
long double f(long double x);
void error(pk0 f1, pk f2, std::string name);

int main()
{
  // std::cout.setf(std::ios::scientific);
  std::cout.precision(10);
  std::cout << reg(0,-1, 1e-8, 1000, f) << std::endl;
  error(reg, f , "regulaerror.txt");
  return 0;
}

long double f(long double x)
{
  return std::pow(x,2)-1;
}

long double reg(long double a, long double b, long double tol, int lim, pk f)
{
  int step=0;//no importa el orden de a y b
  long double res=0;
  do{
      res= b-(f(b)*(a-b))/(f(a)-f(b));
      if(f(res)*f(a)>0)
	a=res; //criterios para elegir el siguiente intervalo
      else
	b=res; //para mantener a cero siempre en el intervalo
      step++;
      
  } while(fabs(f(res))>=tol && step<=lim);
  
  return res;
}

void error(pk0 f1, pk f2, std::string name) //funcion para graficar error
{
  long double realval=1; //valor exacto
  std::ofstream fout(name);
  fout.precision(16); fout.setf(std::ios::scientific);
  for (int i = 3; i <= 20 ; ++i)
    {
      fout << i << "\t" << fabs(1-(f1(0,6, 1e-10, i, f2)/realval)) << "\n";     
    }
fout.close();
}
