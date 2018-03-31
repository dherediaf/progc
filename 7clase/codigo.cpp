#include <fstream> //incluir(manejar) archivos
#include <iostream>
#include <string>      

/* escribir: ofstream
   leer: ifstream  */

void print(int n, std::string name);

int main()
{
  print(100, "datosfout.txt");
  print(200, "datosfout2.txt");  
  return 0;
}

void print(int n, std::string name)
{
  std::ofstream fout(name); //para ponerle nombre
  fout.precision(16); fout.setf(std::ios::scientific); //establecer precision
  for(int i=1; i<=n ; ++i)
    {
      fout << i << "\t" << 1.0/i << "\n"; //1.0 para leer como double
    }
  fout.close(); //liberar el recurso para despues poder usarlo otra vez

}
