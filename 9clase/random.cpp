#include <iostream>
#include <random> //libreria para generar numeros aleatorios

int main()
{
  int seed=0; //numero de la semilla
  std::mt19937 gen(seed); //se fija la semilla seed=0
  std::uniform_real_distribution<> dis(1.0,2.0);
  //  std::normal_distribution<> dis(1.6,0.00001);
    for(int i=1; i<=10000; ++i)
      {
	std::cout << dis(gen) << "\n"; //se llama a gen en la distribucion
      }
  return 0;
}
