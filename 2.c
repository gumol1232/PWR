#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c, delta, pdelta, x0, x1, x2;
  printf("Rownanie: ax^2+bx+c=0\n");
  printf("Podaj a: ");
  scanf("%f",&a);
  printf("Podaj b: ");
  scanf("%f",&b);
  printf("Podaj c: ");
  scanf("%f",&c);
  delta=b*b-(4*a*c);
  if(delta<0)
    {
      printf("wyroznik rownania kwadratowego jest mniejszy od zera, brak rozwiazan rzeczywistych\n");
    }
      else if (delta==0)
    {
      x0=(-b)/(2*a);
      printf("Xo=%f\n",x0);
    }
      else
    {
      pdelta = sqrt(delta);
      x1=(-b-pdelta)/(2*a);
      x2=(-b+pdelta)/(2*a);
      printf("X1=%f X2=%f\n",x1 ,x2 );
    }
  return 0;
}
