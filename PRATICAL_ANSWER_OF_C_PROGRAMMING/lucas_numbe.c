#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y,z,num;
 clrscr();
 printf("Enter the limit of Lucas number : ");
 scanf("%d",&num);
 x=2;
 y=1;
 while(num>=x)
 {
   printf(" %d",x);
   z=x+y;
   x=y;
   y=z;
 }
 getch();

}
