#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <random>

void weibulld(int see, double a, double b, std::string name);

int main()
{
  int a=1.0, b=2.0;
  int seed=10; //numero de la semilla
  weibulld(seed,a,b,"datos.txt"); 
  return 0;
}

void weibulld(int seed, double a, double b, std::string name)
{
  //escribir archivo
  std::ofstream fout(name);
  fout.precision(16);

  //generar numeros aleatorios con weibull
  std::mt19937 gen(seed);
  std::weibull_distribution<> dis(a,b);
    for(int i=1; i<=10000; ++i)
      {
	fout << dis(gen) << "\n";
      }
    fout.close();
}

/* en gnuplot se pueden nombrar los ejes con set xlabel "", o set ylabel ""

para guardar un archivo en pdf:
 set term pdf
 set output "nombredelarchivo.pdf"
 se vuelve a graficar 

*/
