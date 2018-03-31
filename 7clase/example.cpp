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
  for(int i=1; i<=n ; ++i)
    {
      fout << i << "\n"; //1.0 para leer como double
    }
  fout.close(); //liberar el recurso para despues poder usarlo otra vez

}

void read(std::string name)
{
  int n, sumn=0;
  std::ifstream fin(name);
  fin >> n ;
  while(fin) //es verdadero si termina o hay un error
    {
      sumn += n;
      fin >> n; //lee primera columna 
    }
  fin.close();
  std::cout << sumn << std::endl;
}
