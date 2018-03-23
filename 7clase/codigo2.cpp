#include <fstream> //incluir(manejar) archivos
#include <iostream>
#include <string>

/* escribir: ofstream
   leer: ifstream  */

void print(int n, std::string name);
void read(std::string name);

int main()
{
  print(100, "datosfout.txt");
  read("datosfout.txt");  
  return 0;
}

void print(int n, std::string name)
{
  std::ofstream fout(name); //para ponerle nombre
  fout.precision(16); fout.setf(std::ios::scientific); //establecer precision
  for(int i=1; i<=n ; ++i)
    {
      fout << i << " " << 1.0/i << " "; //1.0 para leer como double
    }
  fout.close(); //liberar el recurso para despues poder usarlo otra vez

}

void read(std::string name)
{
  int n, sumn=0;
  double x=0, sumx=0;
  std::ifstream fin(name);
  while(fin) //es verdadero si termina o hay un error
    {
      fin >> n >> x; //lea primera y segunda columna
      sumn += n;
      sumx += x;
    }
  fin.close();
  std::cout << sumn << "\t" << sumx << std::endl;
}
