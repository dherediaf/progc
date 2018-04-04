#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
//#include <istream>

void write(std::string name);
void read(std::string file);
void car(std::string name);

int main()
{
  write("text.txt");
  // read("text.txt");
  car("text.txt");
  return 0;
}

void write(std::string name)
{
  std::ofstream fout(name);
  for (int i = 0; i < 10; ++i)
    {
      fout << "hola, esto es una prueba" << i << std::endl;      
    }
}

void read(std::string file) //leer lineas 
{
  std::string linea;
  std::ifstream fin(file);
  while(fin)
    {
      std::getline(fin, linea);
      std::cout << linea << "\n";
    }
  fin.close();
}

void car(std::string name) // leer caracter a caracter
{
  char ch;
  std::ifstream fin(name);
  fin >> ch;
  while(fin)
    {
      std::cout << ch << " ";
      fin >> ch;
    }
  fin.close();
}

