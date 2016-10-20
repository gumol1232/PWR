#include <stdio.h>

int main()
{
int n;
printf("Podaj liczbe (naturalna): ");
scanf("%d",&n);

  for (int i=0;i<n;i++)
    {
        for (int j=0;j<n*2;j++)
        {
          printf("*");
        }
        printf("\n");
      }

  return 0;
}
