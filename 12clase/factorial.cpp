#include <iostream>
#include <vector>

void factorial(int N);

int main(void)
{
  factorial(520);
  return 0;
}

void factorial(int N)
{
  std::vector<int> res;
  res = {1}; //multiplicador
  int a=0; //residuo
  int S=res.size();
  int sum=0;
  
  for(int j=1; j<=N; ++j)
    {
      // multiplicacion de un numero con un vector
      int x=j;
      for (int i = 0; i < S; ++i)
	{
	  int temp = res[i];
	  res[i] = (x*temp+a)%10;
	  a = (int)((x*temp+a)/10);
	  
	  if(i == (S-1))
	    {
	      while(a != 0)
		{
		  res.resize(S+1);
		  res[S] = a%10;
		  a = (int)(a/10);
		  ++S;
		}
	      break;
	    }
	}
    }

  std::cout << "El factorial de " << N << " es igual a: \n";
  for (int i = S-1; i>=0; --i)
    {
      std::cout << res[i];
      sum += res[i];
    }
  std::cout << "\nLa suma de los digitos es: " << sum << "\n"; 
}
