#include <stdio.h>
#include<conio.h>
void main()
{
  int i,j, c=1, n;
  clrscr();
  printf ("enter rows :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",c);
      c++;
    }
    printf("\n");

  }
  getch();
}