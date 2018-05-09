#include <iostream>
#include <cmath>

struct cp
{
  double x{0.0},y{0.0};

  //funciones extra
  void print(void); //imprime el vector
  cp conjugado(const cp &b); //halla el conjugado del vector
  double norma(void); //halla la norma del vector
  double angle(void); //halla el angulo
  void set(double a, double b); //llena un cp
  
  //suma y resta
  cp operator+(const cp &b);
  cp operator-(const cp &b);

  //multiplicacion-division por vector y escalar
  cp operator*(const cp &b);
  cp operator*(const double b);
  cp operator/(const cp &b);
};

int main()
{
  cp a;
  a.set(3.5,1.6);

  cp b;
  b.set(328,0.1*M_PI);

  cp result=a*b;
  result.print();

  std::cout << "La norma es: "<< result.norma() << "\nEl angulo es: " << result.angle() << "\n";

  return 0;
}

void cp::print(void)
{
  std::cout << "(" << x << " , " << y << ")\n";
}

cp cp::operator+(const cp &b)
{
  cp sum;
  sum.x= x+b.x;
  sum.y= y+b.y;
  return sum;
}

cp cp::operator-(const cp &b)
{
  cp dif;
  dif.x= x-b.x;
  dif.y= y-b.y;
  return dif;
}

cp cp::operator*(const cp &b)
{
  cp pro;
  pro.x= x*b.x - y*b.y;
  pro.y= x*b.y + y*b.x;
  return pro;
}

cp cp::operator*(const double b)
{
  cp es;
  es.x= x*b;
  es.y= y*b;
  return es;
}

cp cp::conjugado(const cp &b)
{
  cp con;
  con.x= x;
  con.y= (-1)*y;
  return con;
}

cp cp::operator/(const cp &b)
{
  cp a;
  a.x= x;
  a.y= y;
  return (a*b)*(1.0/(b.x*b.x + b.y));
}

double cp::norma(void)
{
  return std::hypot(x,y);
}

double cp::angle(void)
{
  return std::atan(y/x);
}

void cp::set(double a, double b)
{
  x= a;
  y= b;
}
