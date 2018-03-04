#include <iostream> // directiva de preprocesador
#include <cmath> // libreria matematica
#include <cstdio> // antigua libreria de C

// std es estandar

const double VAR = 4.0;

int main(void)
{
  std::cout.precision(16); // Se imprime con 16 cifras decimales
  std::cout.setf(std::ios::scientifinc); // para que se use notacion cientifica
  
  std::cout << std::sin(VAR) << std::endl; // seno se declara con std 
  std::cout << std::cos(M_PI) << std::endl; // constante pi

  std::printf("%20.16le\t%20.16le\n", VAR , std::sin(VAR)); // imprimir algo
  
  return 0;
}
