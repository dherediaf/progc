#include <iostream>
#include <string>
using namespace std;

int numero(string num)
{
  if(num=="one") return 1;
  if(num=="two") return 2;
  if(num=="three") return 3;
  if(num=="four") return 4;
  if(num=="five")return 5;
  if(num=="six") return 6;
  if(num=="seven") return 7;
  if(num=="eight") return 8;
  if(num=="nine") return 9;
  else return 0;
}

int main()
{
  string a;
  cout << "inserte un numero en letras:\n";
  cin >> a ;
  
  ((numero(a) !=0)? cout<< "el numero es: " << numero(a) << endl :
   cout << "eso no es un numero que considere este programa" << endl);

   return 0;
}

