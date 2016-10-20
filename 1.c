#include <stdio.h>

char wyraz[] = { "ABRAKADABRA" };
int main()
{
for(int i=0;i<11;i++)
{
    for(int j=0;j<i;j++)
      {
        printf(" ");
      }
      int p=11-i;
    for(int k=0;k<p;k++)
      {
        printf("%c",wyraz[k]);
        printf(" ");
      }
    printf("\n");
}
  return 0;
}
