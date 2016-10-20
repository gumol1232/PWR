#include <stdio.h>

int main()
{
int n;
printf("Podaj liczbe calkowita: ");
scanf("%d",&n );
for (int i=0;i<n;i++)
    {
      for (int s=0;s<n-i;s++)
      {
        printf(" ");
      }
      for (int g=0;g<i*2-1;g++)
      {
        printf("*");
      }
      printf("\n");
    }
  return 0;
}
