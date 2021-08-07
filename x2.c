
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=7;i>=1;i--)
  {
    for(j=1;j<=7;j++)
    {
      if(j<=7)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=7;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
}