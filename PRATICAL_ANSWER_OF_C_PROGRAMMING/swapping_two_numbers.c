#include <stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("the value of a and b  : ");
scanf("%d%d",&a&b);
printf("\n befor swapping a=%d,\t b=%d"a,b);
c=a;
a=b;
b=c;
printf("\n\nafter swaping a=%d,\t b=%d"a,b);
getch();
}
